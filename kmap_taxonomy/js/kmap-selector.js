/**
* A class for configuring a Kmap selector
* Requires:
*   jQuery JavaScript Library v1.4.4
*   jQuery UI 1.8.7 components:
*      Autocomplete, Dialog, Draggable, Resizable
*      Core, Widget, Position, Mouse
*
* Features:
*    Configurable,
*    Cross-domain scripting safe (JSONP)
*    l10n-ready (requires pluggable translation function)
* @todo
*/

/**
* KmapSelector class constructor
* @todo Throw Exceptions in the Constructor to prevent breakage and confusion
**/
function KmapSelector(options) {
   this.name = options.name || Math.ceil(Math.random()*2000000);
   
   var scripts, i;
   // L10n translation function (e.g. function (str) { return my_l10n_translation(str))
   // Initialize l10n first so we can use it in the constructor
   this.l10nTranslateFunction = options.l10nTranslateFunction? options.l10nTranslateFunction : null;
   this.initLocalization();
   
   // Form Elements
   this.autocompleteInput = null;
   this.selectionResult = null;
   this.hiddenInput = null;
   this.branchFilter = null;
   this.treeSelector = null;
   
   // Values
   if (options.prepopulateValues&& !this.empty(options.prepopulateValues)) {
      this.selectedValues = options.prepopulateValues;
   } else {
      this.selectedValues = {};
   }
   
   // Kmaps Data
   this.allData = {}; // A cache object (associatiive array) keyed to service path; @TODO use client-side caching for allData
      
   // Form element names, classes and labels
   this.targetDivId = options.targetDivId || null;
   this.hiddenInputId = options.hiddenInputId || null;
   this.selectorTitle = options.selectorTitle || this.t('Search Categories');
   this.autocompleteLabel = options.autocompleteLabel || this.t('Search Categories');
   this.branchFilterLabel = options.branchFilterLabel || this.t('Filter by Sub-category');
   this.treeSelectorLabel = options.treeSelectorLabel || this.t('Select one or more categories');
   this.formInputClass = options.formInputClass || '';
   this.formTextareaClass = options.formTextareaClass || '';
   this.formSelectClass = options.formSelectClass || '';
   
   // Kmaps service options
   this.kmapServerUri = options.kmapServerUri || 'http://subjects.kmaps.virginia.edu/';
   this.listService = options.listService? this.kmapServerUri + options.listService :  'features/list.json';
   this.treeService = options.treeService? this.kmapServerUri + options.treeService :  'features/all.json';
   this.categoryService = options.categoryService? this.kmapServerUri + options.categoryService :  'features.json';
   this.listServiceBranch = options.listServiceBranch? this.kmapServerUri + options.listServiceBranch :  'features/{id}/list.json';
   this.treeServiceBranch = options.treeServiceBranch? this.kmapServerUri + options.treeServiceBranch :  'features/{id}/all.json';
   this.categoryServiceBranch = options.categoryServiceBranch? this.kmapServerUri + options.categoryServiceBranch :  'features/{id}/children.json';
   
   /* Old urls
   this.kmapServerUri = options.kmapServerUri || 'http://tmb.thlib.org/';
   this.listService = options.listService? this.kmapServerUri + options.listService :  'categories/list.json';
   this.treeService = options.treeService? this.kmapServerUri + options.treeService :  'categories/all.json';
   this.categoryService = options.categoryService? this.kmapServerUri + options.categoryService :  'categories.json';
   this.listServiceBranch = options.listServiceBranch? this.kmapServerUri + options.listServiceBranch :  'categories/{id}/list.json';
   this.treeServiceBranch = options.treeServiceBranch? this.kmapServerUri + options.treeServiceBranch :  'categories/{id}/all.json';
   this.categoryServiceBranch = options.categoryServiceBranch? this.kmapServerUri + options.categoryServiceBranch :  'categories/{id}/children.json';
   */
   // Show Branch Filter and Tree Selector
   this.showAutocomplete = (typeof options.showAutocomplete === 'undefined') ? true : options.showAutocomplete;
   this.showBranchFilter = (typeof options.showBranchFilter === 'undefined') ? false : options.showBranchFilter;
   this.showTreeSelector = (typeof options.showTreeSelector === 'undefined') ? false : options.showTreeSelector;
   this.rootKmapId = this.isNumber(options.rootKmapId)  ? options.rootKmapId : null;
   
   // Show annotations and formatting
   this.allowAnnotations = (typeof options.allowAnnotations === 'undefined') ? true : options.allowAnnotations;
   this.allowFormatting = (typeof options.allowFormatting === 'undefined') ? true : options.allowFormatting;

   // Allow multiple values
   this.allowMultipleValues = (typeof options.allowMultipleValues === 'undefined') ? true : options.allowMultipleValues;
   
   // Set the base path of the script        
   /* Travis' old code for getting base path                                                                                                        
   scripts = jQuery("head script");
   for (i = 0; i < scripts.length; i += 1) {;
      if (scripts[i].src && 'kmap-selector.js' === scripts[i].src.split('?')[0].split('/').pop()) {
         this.scriptBasePath = scripts[i].src.split('?')[0].split('/').slice(0, -1).join('/') + '/';
      }
   }    
   */
   this.scriptBasePath = Drupal.settings.basePath + Drupal.settings.mediabase.path + '/kmap_taxonomy/js/';
   //console.log("script base path: " + this.scriptBasePath)  ;
   
   // Parentage formats
   this.parentageFormats = options.parentageFormats? options.parentageFormats :  {
      first_last: this.t('First ancestor and last child'),
      last: this.t('Last child only'),
      last_plus_parent: this.t('Last child and its parent'),
      full: this.t('Full ancestry of subject'),
   };
}

/**
*  initialize this selector
**/
KmapSelector.prototype.init = function () {
   var kmapSelector = this;
   if ( !this.showAutocomplete && !this.showTreeSelector ) {
      return;
   }
   this.initStylesheet();
   this.initScripts();
   this.initSelectorMarkup();
   this.initItems();
   
   // Autocomplete
   if (this.showAutocomplete) {
      var rootService = this.rootKmapId ? this.listServiceBranch.replace('{id}', this.rootKmapId) : this.listService;
      if (typeof (this.allData[rootService] == 'undefined')) {
         jQuery.ajax({
               url: rootService,
               dataType: "jsonp",
               success: function (data) {
                  kmapSelector.initAutocomplete(rootService, data);
               }
         });
      } else {
         this.initAutocomplete(rootService);
      }
   }
   
   // Branch Filter
   if (this.showBranchFilter) {
      var rootService = this.rootKmapId ? this.categoryServiceBranch.replace('{id}', this.rootKmapId) : this.categoryService;
      jQuery.ajax({
            url: rootService,
            dataType: "jsonp",
            success: function (data) {
               kmapSelector.initBranchFilter(data);
            }
		});
   }
   
   // Tree Selector
   if (this.showTreeSelector) {
      var rootService = this.rootKmapId ? this.treeServiceBranch.replace('{id}', this.rootKmapId) : this.treeService;
      jQuery.getScript(this.scriptBasePath + "lib/jstree/jquery.jstree.js");
      //jQuery.getScript(this.scriptBasePath + "lib/jstree-05-14-2012/jstree.js")
      jQuery.ajax({
            url: rootService,
            dataType: "jsonp",
            success: function (data) {
               kmapSelector.initTreeSelector(rootService, data);
            }
		});
   }
   
};

/**
* add the form markup
**/
KmapSelector.prototype.initSelectorMarkup = function () {
   var kmapSelector = this;
   
   // The top-level container 
   var container="#"+this.targetDivId;
   jQuery(container).addClass('kmap-selector');
   jQuery(container).prepend(jQuery('<div class="branch-filter"/>'));
   jQuery(container).before(jQuery('<label/>').text(this.selectorTitle));
   
   // Hidden Input
   this.hiddenInput = document.getElementById(this.hiddenInputId) ;
   
   // Autocomplete  Input
   if (this.showAutocomplete) {
      this.autocompleteInput = jQuery("<input/>").attr({
            id: "autocomplete_" + this.targetDivId,
            class : this.formInputClass,
            type: 'text',
            size: 60,
      });
      jQuery(this.autocompleteInput).after(jQuery('<img/>').attr('src', this.scriptBasePath + 'lib/jstree/themes/default/throbber.gif'));
      var acTarget = jQuery('<div class="autocomplete-input"/>');
      jQuery(acTarget).html(jQuery("<label>").html(this.t(this.autocompleteLabel)));
      jQuery(acTarget).append(this.autocompleteInput);
      jQuery(container).append(acTarget);
   }
   
   // Simple Selection Result
   this.selectionResult = jQuery("<div/>").attr( { id: "results_" + this.targetDivId, class: 'results'} );
   jQuery(this.selectionResult).append("<br style='clear:left'/>");
   jQuery(container).append(this.selectionResult);
   
   if (this.allowAnnotations) {
      // Annotation Toggle
      var showAnnot = jQuery('<a>').attr({href:'#', class:'show-annot'}).html( this.t('More options') ).click( function (event) {
            jQuery(kmapSelector.annotResult).css('display', 'block');
            jQuery(this).siblings('.hide-annot').css('display', 'inline');
            jQuery(this).css('display', 'none');
            event.preventDefault();
      });
      var hideAnnot = jQuery('<a>').attr({href:'#', class:'hide-annot'}).html( this.t('Hide options') ).click( function (event) {
            jQuery(kmapSelector.annotResult).css('display', 'none');
            jQuery(this).siblings('.show-annot').css('display', 'inline');
            jQuery(this).css('display', 'none');
            event.preventDefault();
      });
      jQuery(container).append(showAnnot);
      jQuery(container).append(hideAnnot);
      
      // Annotated Selection Result
      this.annotResult = jQuery("<div/>").attr('id', "annot_results_" + this.targetDivId).attr('class', 'annot-results');
      jQuery(container).append(this.annotResult);
      
      // Annotation json storage in a textarea for the whole form
      if ( ! jQuery('#kmap_annotation_json').length ) {
         jQuery(this.hiddenInput).parents('form').append('<textarea id="kmap_annotation_json" name="kmap_annotation_json"/>');
      }
      
      // Annotation submit handler
      jQuery('#kmap_annotation_json').parents('form').submit( function (event) {
            var allSelectedKmapItems = jQuery.parseJSON(jQuery(this).children('#kmap_annotation_json').val());
            allSelectedKmapItems = allSelectedKmapItems || {};
            allSelectedKmapItems[kmapSelector.name] = kmapSelector.selectedValues;
            jQuery(this).children('#kmap_annotation_json').val(JSON.stringify(allSelectedKmapItems));
            /* event.preventDefault();
            event.stopPropagation(); */
      });
   }
};


/**
* populate the widget
**/
KmapSelector.prototype.initItems = function () {
   if (typeof (this.selectedValues) == 'object') {
      for (var kmapId in this.selectedValues) {
         this.displayItem(this.selectedValues[kmapId]);
         // Add kmapId to the hidden input
         var origVal = jQuery(this.hiddenInput).val();
         var values = this.empty(origVal) ? [] : jQuery(this.hiddenInput).val().split(',');
         if (values.indexOf(kmapId) == -1) {
            values.push(kmapId);
            jQuery(this.hiddenInput).val(values.join(','));
         }
         
      }
   }
};

/**
* initialize the autocomplete input
* called in 'success' method of the $.ajax() call for the data
**/
KmapSelector.prototype.initAutocomplete = function (servicePath, data) {

   var kmapSelector = this;
   if (typeof (data) !== 'undefined') {
      var categories = [];
      jQuery.map(data.features, function (item) {
            var row = {
               label: item.header,
               value: '',
               id: item.id
            };
            categories.push(row);	
      });
      this.allData[servicePath] = categories;
   }
   
   this.autocompleteInput.autocomplete({
         source: this.allData[servicePath],
         minLength: 2,
         select: function (event, ui) {
            kmapSelector.addItem(ui.item);
         },
         open: function () {  
            jQuery(this).removeClass("ui-corner-all").addClass("ui-corner-top");
         },
         close: function () {
            jQuery(this).removeClass("ui-corner-top").addClass("ui-corner-all");
         }
   });
   
   // Remove the throbber if this is a re-init
   jQuery('#'+this.targetDivId+ ' .autocomplete-input img').remove();
};

/**
* initialize the branch filter
* called in 'success' method of the $.ajax() call for the data
**/
KmapSelector.prototype.initBranchFilter = function (data) {
   var kmapSelector = this;
   var categories = {};
   for ( var id in data.features ) {
      var item = data.features[id];
      categories[id] = {
           label: item.header,
            value: '',
            id: item.id
      };
   }
   this.branchFilter = jQuery('<select>').attr({
   	id: "branch_filter_"+this.targetDivId,
   	class: "form-control form-select ss-select selectpicker"
   });
   jQuery("#"+this.targetDivId + " .branch-filter").append(this.branchFilter);
   jQuery("#"+this.targetDivId +" .branch-filter").prepend(jQuery('<label/>').text(this.branchFilterLabel));
   var rootVal = this.rootKmapId ? this.rootKmapId : '';
   var option = jQuery('<option/>').val(rootVal).text(this.t('Select a Category'));
   jQuery(this.branchFilter).append(option);
   for (var key in categories) {
      var item = categories[key];
      option = jQuery('<option/>').val(item.id).text(item.label);//
      jQuery(this.branchFilter).append(option);
   }
   
   // ON CHANGE RE-INIT THE SELECTORS
   jQuery(this.branchFilter).change(function () {
         var root_kmap_id = kmapSelector.branchFilter.val();
         var listService, treeService;
         if (root_kmap_id !== '') {
            listService = kmapSelector.listServiceBranch.replace('{id}', root_kmap_id);
            treeService = kmapSelector.treeServiceBranch.replace('{id}', root_kmap_id);
         } else {
            listService = kmapSelector.listService;
            treeService = kmapSelector.treeService;
         }
         
         // re-init autocomplete
         if (kmapSelector.showAutocomplete) {
            jQuery(kmapSelector.autocompleteInput).after(jQuery('<img/>').attr('src', kmapSelector.scriptBasePath + 'lib/jstree/themes/default/throbber.gif'));
            if (typeof (kmapSelector.allData[listService] == 'undefined')) {
               jQuery.ajax({
                     url: listService,
                     dataType: "jsonp",
                     success: function (data) {
                        kmapSelector.initAutocomplete(listService, data);
                     }
               });
            } else {
               kmapSelector.initAutocomplete(listService);
            }
         }
         
         // re-init tree selector
         if (kmapSelector.showTreeSelector) {
            jQuery('#'+kmapSelector.targetDivId).find('.browse-link').html(jQuery('<img/>').attr('src', kmapSelector.scriptBasePath + 'lib/jstree/themes/default/throbber.gif'));
            jQuery(kmapSelector.treeSelector).remove(); // when doing a re-init, completely remove the old tree selector
            if (typeof (kmapSelector.allData[treeService] == 'undefined')) {
               jQuery.ajax({
                     url: treeService,
                     dataType: "jsonp",
                     success: function (data) {
                        kmapSelector.initTreeSelector(treeService, data);
                     }
               });
            } else {
               kmapSelector.initTreeSelector(treeService);
            }
         }
   }
   );
   jQuery(".selectpicker").selectpicker();
};

/**
* Set up the tree selector after data has been loaded in init()
**/
KmapSelector.prototype.initTreeSelector = function (servicePath, data) {
   var kmapSelector = this;
   
   // Convert the data to jstree format
   if (typeof (data) !== 'undefined') {
      var jstree = {
         data: data.feature ? data.feature.header : 'kmaps_root',  //root category title
         attributes: {
            id: data.feature ? data.feature.id : null// root kmap id
         },
         children: [],
      };

      
      
      //console.info({'data new':data, 'jstree':jstree, 'features': features});
      var features = data.feature ? data.feature.features : data.features;
      
      for (var feature in features) {
         kmap = features[feature];
         /*if (kmap.categories && !jQuery.isArray(kmap.categories.category)) {
            kmap.categories = kmap.categories.category.categories; // this is how the json data comes from the server
         }*/
         this.buildJsTree(jstree, kmap);
      }
      this.allData[servicePath] = jstree;
      
      /*var root = onBranch ? data.category.categories : data.categories; // json from server looks different if we've selected a branch as root

      var jstree = {
         data: root.category.title ? root.category.title : 'kmaps_root',  //root category title
         attributes: {
            id: root.category.id ? root.category.id : null// root kmap id
         },
         children: [],
      };
      root.category = (jQuery.isArray(root.category) ? root.category : [root.category]);
      for (var category in root.category) {
         kmap = root.category[category];
         if (kmap.categories && !jQuery.isArray(kmap.categories.category)) {
            kmap.categories = kmap.categories.category.categories; // this is how the json data comes from the server
         }
         this.buildJsTree(jstree, kmap);
      }
      this.allData[servicePath] = jstree;*/
   }
   
   // Set up the markup
   this.treeSelector = jQuery("<div/>").attr({
         id: "tree_selector_" + this.targetDivId,
         class: 'tree-selector',
         title: this.treeSelectorLabel // appears in the dialog
   });
   jQuery("#"+this.targetDivId + " .branch-filter").after(this.treeSelector);
   var browseLink = jQuery('<a href="#"/>').text(this.t('Browse Categories'));

   jQuery(this.treeSelector).bind("loaded.jstree", function (event, data) {
         jQuery('#'+this.targetDivId + ' .browse-link .throbber').remove();
   });
   var browseLinkDiv = jQuery('#'+this.targetDivId).find('.browse-link');
   if (browseLinkDiv.length == 0) {
      browseLinkDiv = jQuery('<div class="browse-link"/>');
      jQuery(this.treeSelector).before(browseLinkDiv);
   }
   jQuery(browseLinkDiv).html(browseLink);
   // Create the JsTree
   /*if(typeof(this.treeSelector.jstree) == "undefined") {
   	console.log(this, 'undefined');
   }*/
   jQuery(this.treeSelector).jstree({
         ui: {
            select_limit: this.allowMultipleValues ? -1 : 1,
         },
         json_data: {
            data: this.allData[servicePath].children,
            progressive_render: true,
         },
         themes: {
            url: this.scriptBasePath + "lib/jstree/themes/default/style.css",
            dots: false,
            icons: false
         },
         checkbox: {
            override_ui:true,
            real_checkboxes: true,
            two_state:true,
            real_checkboxes_names: function (n) { 
               var kmapId = n[0].id.split('_').pop();
               return ["check_" + kmapId , 1];
            }
         },
         plugins: [ "themes", "json_data", "checkbox", "ui" ]
   });
   
   // The Dialog - show treeSelector in a jQuery UI Dialog
   jQuery(browseLink).click( function (event) {
         var wHeight = jQuery(window).height();
         var wWidth = jQuery(window).width();

         var dialogOptions = {
            height: wHeight * .8,
            width: wWidth * .8,
            modal: true,
            draggable: true,
            resizable: true,
            position: [wWidth * .1, wHeight * .1   ],
            buttons: [
               {
                  text: kmapSelector.t('Add Selected Items'),
                  click: function () {  // Add items to the selector when 'DONE' button is selected
                     var checked = jQuery(kmapSelector.treeSelector).find('.jstree-checked');
                     if (checked.length > 1 && ! kmapSelector.allowMultipleValues) {
                        jQuery(kmapSelector.treeSelector).siblings('.ui-dialog-buttonpane').children('.ui-dialog-buttonset').before(
                           jQuery('<p class="warning"/>').css('float', 'left').text('Please select just one item and try adding again.')
                           );
                        return;
                     }
                     for (var i = 0; i<checked.length; i++) {
                        var kmap_id = jQuery(checked[i]).children('input').attr('id').split('_')[1];
                        var label = jQuery(checked[i]).children('a').text();
                        item = {
                           id: kmap_id,
                           label: label
                        };
                        kmapSelector.addItem(item);
                     }
                     jQuery(kmapSelector.treeSelector).dialog("close");
                  }
               },
               {
                  text: kmapSelector.t('Cancel'),
                  click: function () {
                     jQuery(kmapSelector.treeSelector).dialog("close");
                  },
               }
            ]
        };
         jQuery(kmapSelector.treeSelector).dialog(dialogOptions);
         event.preventDefault();
   });
};


/**
* Create the t() function for a pluggable approach to l10n translation of strings
* Usage: this.t('A string needing translation');
* Note the default function is a passthrough that does no translation
**/
KmapSelector.prototype.initLocalization = function () {
   //setup the 't()' function for translations
   if (typeof (this.l10nTranslateFunction) == 'function') {
      this.t = this.l10nTranslateFunction;
   } else {
      // Default pass through, i.e. no l10n translation configured
      this.t = function (string) { return string; };
   }
};

KmapSelector.prototype.addItem = function (item){
   
   if (this.selectedValues[item.id]) {
      return;
   }
   
   // Add kmapId to the hidden input
   var origVal = jQuery(this.hiddenInput).val();
   var values = typeof (origVal) == 'undefined' || origVal == '' ? [] : jQuery(this.hiddenInput).val().split(',');
   if ( this.allowMultipleValues ) {
      values.push(item.id); // allow multiple
   } else {
      values = [item.id]; // force single
   }
   jQuery(this.hiddenInput).val(values.join(','));
   
   // Add kmapId to selected values
   this.selectedValues[item.id] = item;
   
   this.displayItem(item);
};

/**
* parentage formats
**/
KmapSelector.prototype.displayItem = function (item){
   var kmapSelector = this;
   
   // delete item click handler
   var removeFunc = function (element){
      var spanId = jQuery(element).parent().attr('id'); // get the span parent of the link
      var kmapId = spanId.split('_').pop();
      kmapSelector.removeItem(kmapId); //remove the values
      jQuery(element).parent().remove(); //remove the display span
   };
   
   // Display the newly added kmap in the 'selectionResult' next to a remove link
   var spanId = "item_" + item.id;
   //var spanSel = "#" + spanId;
   var spanSel = "#" + this.targetDivId + " #" + spanId;

   var itemSpan = jQuery('<span>').addClass('kmap-selector-item').attr('id',spanId);
   
   if ( ! this.allowMultipleValues ) { // force single
      this.selectionResult.children('span').remove(); // remove other spans
   }
   var br = jQuery(this.selectionResult.children('br'));
   jQuery(br).before(itemSpan);
   var removeLink = jQuery('<a>').attr('href', '#').attr('title', this.t('Remove ' + item.label)).click(function (event){
         removeFunc(this) ; // 'this' here is the a element not the kmap selector instance
         event.preventDefault(); // 
   });
   jQuery(spanSel).html(removeLink);
   //jQuery(spanSel+" a").append(jQuery('<img>').attr('src', this.scriptBasePath+'images/delete.png')); // old way before Sarvaka
   jQuery(spanSel+" a").append(jQuery('<span>').attr('class', 'icon shanticon-close2b'));
   jQuery(spanSel+" a").after(item.label);
   
   // Display annotations   
   if (this.allowAnnotations) {
      this.displayItemAnnotation(item);
   }
};

KmapSelector.prototype.displayItemAnnotation = function (item) {
   var kmapSelector, textLabel, numLabel, note, idSuffix, container, annotBlock;
   kmapSelector = this;
   
   // Annotation block
   idSuffix = "_" + this.targetDivId + "_" + item.id;
   annotBlock = jQuery('<div/>').attr({
         id: "kmap_annot_block" + idSuffix,
         class: "kmap-annot-block"
   });
   
   // Annotation label
   annotBlock.append( jQuery('<p/>').html(this.t('Annotations for <strong>@kmapFormat</strong>.', { '@kmapFormat': item.label}) ));
   
   // create inputs
   textLabelId = "annot_text_label" + idSuffix;
   numLabelId = "annot_num_label" + idSuffix;
   noteId = "annot_note" + idSuffix;
   textLabel = jQuery('<input/>').attr({
         id: textLabelId,
         name: textLabelId,
         class: "annot-text-label " + this.formInputClass 
   });
   textLabel.val(item.textLabel);
   textLabel.change( function(event) {
         item.textLabel = jQuery(this).val();
   });
   
   numLabel = jQuery('<input/>').attr({
         id: numLabelId,
         name: numLabelId,
         class: "annot-num-label " + this.formInputClass 
   });
   numLabel.val(item.numLabel);
   numLabel.change( function(event) {
         item.numLabel = jQuery(this).val();
   });
   note = jQuery('<textarea/>').attr({
         id: noteId,
         name: noteId,
         class: "annot-note " + this.formTextareaClass
   });
   note.val(item.note);
   note.change( function(event) {
         item.note = jQuery(this).val();
   });
   
   // add inputs
   annotBlock.append(textLabel);
   annotBlock.append(numLabel);
   annotBlock.append(note);
   
   // add input labels
   textLabel.before(jQuery('<label/>').attr('for', textLabelId).html( this.t('Text Label')));   
   numLabel.before(jQuery('<label/>').attr('for', numLabelId).html( this.t('Numeric Label')));   
   note.before(jQuery('<label/>').attr('for', noteId).addClass('note-label').html( this.t('Note')));   
   
   // add format selector
   if ( this.allowFormatting ) {
      var formatSelector = jQuery('<select>').attr({
            id: 'format_selector' + idSuffix,
            name: 'format_selector' + idSuffix,
            class: "format-selector " + this.formSelectClass
      });
      if (!item.formats) { item.formats = this.parentageFormats; }
      for ( var format in item.formats ) {
         formatSelector.append(jQuery('<option>').attr('value', format).html(item.formats[format]));
         if ( format == item.selectedFormat ) {
            formatSelector.children('option:last-child').attr('selected','selected');
         }
      }
      formatSelector.change( function(event) {
            item.selectedFormat = jQuery(this).val();
      });
      
      annotBlock.children( 'p:first-child').after(formatSelector).after(jQuery('<label/>').html(this.t('Select Format ')));
      annotBlock.children( 'select').after("<div class='clear'>");
      
   }
   
   // Add the annotation to the results
   this.annotResult.append( annotBlock );
};

KmapSelector.prototype.removeItem = function (kmapId)  {
   // remove from selected values
   delete this.selectedValues[kmapId];
   // remove from hidden input
   var values = jQuery(this.hiddenInput).val().split(',');
   var idx = values.indexOf(kmapId);
   values.splice(idx,1);
   jQuery('#'+this.hiddenInputId).val(values.join(','));
   // remove annotations
   if ( this.allowAnnotations ) {
      var annotBlock = "#kmap_annot_block_" + this.targetDivId + "_" + kmapId;
      jQuery(annotBlock).remove();
   }
   
};

KmapSelector.prototype.initStylesheet = function (){
   jQuery("head").append("<link>");
   var css = jQuery("head").children(":last");
   css.attr({
         rel:  "stylesheet",
         type: "text/css",
         href: this.scriptBasePath + "css/kmap-selector.css"
   });
};

KmapSelector.prototype.initScripts = function (){
   jQuery("head").append("<script>");
   var css = jQuery("head").children(":last");
   css.attr({
         type: "text/javascript",
         src: this.scriptBasePath + "customSelect.jquery.js" // http://www.adamcoulombe.info/lab/jquery/select-box/
   });
};

/**
* buildJsTree recurses through a kmap tree and transforms it into
* the data structure preferred by jsTree selector widget
* @todo pre-check already selected values
* @param parent, this is in the format expected by jstree
* @ param current, this is in kmap-server's json format and is to be converted to jstree format 
**/
KmapSelector.prototype.buildJsTree = function (parent, current) {
   var nextParent = { data: current.header, attr: {id: 'kmap_' + current.id}, };
   parent.children.push(nextParent);
   
   if (current.features) {
			//console.info({'parent': parent, 'current': current});
      nextParent['children'] = [];
      // Sort feature children by header
      var children = [];
      for(var n in current.features) {
      	children.push({'key':current.features[n].header, 'obj': current.features[n]});
      }
      children.sort(this.featureSort);

      if ( !jQuery.isArray(children) && children.id) { // when there is only one child, 'children' is an object not an array
         children = [children]; // the top-level categories are like this. not sure why
      }
      for (var idx in children) {
         var nextCurrent = children[idx].obj;
         this.buildJsTree(nextParent, nextCurrent);
      }
   }
   else {
      //console.log(current.title, 'has NO categories')
   }
};

/*=========
UTILITIES
=========*/
KmapSelector.prototype.isNumber = function (n) {
   return !isNaN(parseFloat(n)) && isFinite(n);
};

KmapSelector.prototype.empty = function (mixed_var) {
   var key;
   if (mixed_var === "" ||
      mixed_var === 0 ||
   mixed_var === "0" ||
   mixed_var === null ||
   mixed_var === false ||
   typeof mixed_var === 'undefined')
   {
      return true;
   }
   if (typeof mixed_var == 'object')
   {
      for (key in mixed_var)
      {
         return false;
      }
      return true;
   }
   return false;
};

KmapSelector.prototype.featureSort = function (x, y) {
	if (x.key < y.key) return -1;
	if (x.key > y.key) return 1;
	return 0;
};
