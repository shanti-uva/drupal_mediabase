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
   "use strict";
   var scripts, i;
   // L10n translation function (e.g. function (str) { return my_l10n_translation(str))
   // Initialize l10n first so we can use it in the constructor
   this.l10nTranslateFunction = typeof (options.l10nTranslateFunction) !== "undefined" ? options.l10nTranslateFunction : null;
   this.initLocalization();

   // Form Elements
   this.autocompleteInput = null;
   this.selectionResult = null;
   this.hiddenInput = null;
   this.branchFilter = null;
   this.treeSelector = null;

   // Values
   if (typeof (options.prepopulateValues) !== "undefined" && !this.empty(options.prepopulateValues)) {
      this.selectedValues = options.prepopulateValues;
   } else {
      this.selectedValues = {};
   }

   // Kmaps Data
   this.allData = {}; // A cache object (associatiive array) keyed to service path; @TODO use client-side caching for allData

   // Form element names, classes and labels
   this.targetDivId = typeof (options.targetDivId) !== "undefined" ? options.targetDivId : null;
   this.hiddenInputId = typeof (options.hiddenInputId) !== "undefined" ? options.hiddenInputId : null;
   this.selectorTitle = typeof (options.selectorTitle) !== "undefined" ? options.selectorTitle : this.t('Search Categories');
   this.autocompleteLabel = typeof (options.autocompleteLabel) !== "undefined" ? options.autocompleteLabel : this.t('Search Categories');
   this.branchFilterLabel = typeof (options.branchFilterLabel) !== "undefined" ? options.branchFilterLabel : this.t('Filter by Sub-category');
   this.treeSelectorLabel = typeof (options.treeSelectorLabel) !== "undefined" ? options.treeSelectorLabel : this.t('Select one or more categories');
   this.formInputClass = typeof (options.formInputClass) !== "undefined" ? options.formInputClass : '';

   // Kmaps service options
   this.kmapServerUri = typeof (options.kmapServerUri) !== "undefined" ? options.kmapServerUri : 'http://tmb.thlib.org/';
   this.listService = typeof (options.listService) !== "undefined" ? this.kmapServerUri + options.listService :  'categories/list.json';
   this.treeService = typeof (options.treeService) !== "undefined" ? this.kmapServerUri + options.treeService :  'categories/all.json';
   this.categoryService = typeof (options.categoryService) !== "undefined" ? this.kmapServerUri + options.categoryService :  'categories.json';
   this.listServiceBranch = typeof (options.listServiceBranch) !== "undefined" ? this.kmapServerUri + options.listServiceBranch :  'categories/{id}/list.json';
   this.treeServiceBranch = typeof (options.treeServiceBranch) !== "undefined" ? this.kmapServerUri + options.treeServiceBranch :  'categories/{id}/all.json';
   this.categoryServiceBranch = typeof (options.categoryServiceBranch) !== "undefined" ? this.kmapServerUri + options.categoryServiceBranch :  'categories/{id}/children.json';

   // Show Branch Filter and Tree Selector
   this.showAutocomplete = typeof (options.showAutocomplete) !== "undefined" ? options.showAutocomplete : true;
   this.showBranchFilter = typeof (options.showBranchFilter) !== "undefined" ? options.showBranchFilter : false;
   this.showTreeSelector = typeof (options.showTreeSelector) !== "undefined" ? options.showTreeSelector : false;
   this.rootKmapId = this.isNumber(options.rootKmapId)  ? options.rootKmapId : null;

   // Set the base path of the script
   scripts = jQuery("head script");
   for (i = 0; i < scripts.length; i += 1) {
      if (scripts[i].src && 'kmap-selector.js' === scripts[i].src.split('?')[0].split('/').pop()) {
         this.scriptBasePath = scripts[i].src.split('?')[0].split('/').slice(0, -1).join('/') + '/';
      }
   }

}

/**
*  initialize this widget
**/
KmapSelector.prototype.init = function () {
   "use strict";
   if (!(this.showAutocomplete || this.showTreeSelector)) {
      return;
   }
   this.initStylesheet();
   this.initWidgetMarkup();
   this.initItems();

   // Autocomplete
   if (this.showAutocomplete) {
      var rootService = this.rootKmapId ? this.listServiceBranch.replace('{id}', this.rootKmapId) : this.listService;
      if (typeof (this.allData[rootService] == 'undefined')) {
         var acCallback = this.bind(this.initAutocomplete);
         jQuery.ajax({
               url: this.listService,
               dataType: "jsonp",
               success: function (data) {
                  acCallback(rootService, data);
               }
         });
      } else {
         this.initAutocomplete(rootService);
      }
   }

   // Branch Filter
   if (this.showBranchFilter) {
      var rootService = this.rootKmapId ? this.categoryServiceBranch.replace('{id}', this.rootKmapId) : this.categoryService
      var bfCallback = this.bind(this.initBranchFilter);
      jQuery.ajax({
            url: rootService,
            dataType: "jsonp",
            success: function (data) {
               bfCallback(data);
            }
		});
   }

   // Tree Selector
   if (this.showTreeSelector) {
      var rootService = this.rootKmapId ? this.treeServiceBranch.replace('{id}', this.rootKmapId) : this.treeService
      jQuery.getScript(this.scriptBasePath + "lib/jstree/jquery.jstree.js")
      var tsCallback = this.bind(this.initTreeSelector);
      jQuery.ajax({
            url: rootService,
            dataType: "jsonp",
            success: function (data) {
               tsCallback(rootService, data);
            }
		});
   }
   //this.initAutocompleteFilter();
   //this.initTreeSelect();
};

/**
* add the form markup
**/
KmapSelector.prototype.initWidgetMarkup = function () {
   var target="#"+this.targetDivId;
   jQuery(target).addClass('kmap-selector')
   jQuery(target).prepend(jQuery('<div class="branch-filter"/>'))
   this.autocompleteInput = jQuery("<input/>").attr({
         id: "autocomplete_" + this.targetDivId,
         class : this.formInputClass,
         type: 'text',
         size: 60,
   });
   this.selectionResult = jQuery("<div/>").attr('id', "results_" + this.targetDivId).attr('class', 'results');
   jQuery(this.selectionResult).append("<br style='clear:left'/>");
   this.hiddenInput = document.getElementById(this.hiddenInputId) //jQuery("#" + this.hiddenInputId).get();
   if (this.showAutocomplete) {
      var acTarget = jQuery('<div class="autocomplete-input"/>');
      jQuery(target).append(acTarget);
      jQuery(acTarget).html(jQuery("<label>").html(this.t(this.autocompleteLabel)));
   }
   jQuery(acTarget).append(this.autocompleteInput);
   jQuery(target).append(this.selectionResult);
   jQuery(this.autocompleteInput).after(jQuery('<img/>').attr('src', this.scriptBasePath + '/lib/jstree/themes/default/throbber.gif'));
   jQuery(target).before(jQuery('<label/>').text(this.selectorTitle))
}


/**
* populate the widget
**/
KmapSelector.prototype.initItems = function () {
   if (typeof (this.selectedValues) == 'object') {
      for (var kmapId in this.selectedValues) {
         this.displayItem(this.selectedValues[kmapId]);
         // Add kmapId to the hidden input
         var origVal = jQuery(this.hiddenInput).val()
         var values = this.empty(origVal) ? [] : jQuery(this.hiddenInput).val().split(',');
         if (values.indexOf(kmapId) == -1) {
            values.push(kmapId);
            jQuery(this.hiddenInput).val(values.join(','));
         }

      }
   }
}

/**
* initialize the autocomplete input
* called in 'success' method of the $.ajax() call for the data
**/
KmapSelector.prototype.initAutocomplete = function (servicePath, data) {

   if (typeof (data) !== 'undefined') {
      var categories = []
      jQuery.map(data, function (item) {
            var row = {
               label: item.name,
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
         select: this.bind(function (event, ui) {
               this.addItem(ui.item);
         }),
         open: function () {
            jQuery(this).removeClass("ui-corner-all").addClass("ui-corner-top");
         },
         close: function () {
            jQuery(this).removeClass("ui-corner-top").addClass("ui-corner-all");
         }
   });

   // Remove the throbber if this is a re-init
   jQuery('#'+this.targetDivId+ ' .autocomplete-input img').remove();
}

/**
* initialize the branch filter
* called in 'success' method of the $.ajax() call for the data
**/
KmapSelector.prototype.initBranchFilter = function (data) {
   var categories = {}
   jQuery.map(data, function (item) {
         var row = {
            label: item.title,
            value: '',
            id: item.id
         };
         categories[row.id] = row;	
   });
   this.branchFilter = jQuery('<select>').attr('id', "branch_filter_"+this.targetDivId);
   jQuery("#"+this.targetDivId + " .branch-filter").append(this.branchFilter)
   jQuery("#"+this.targetDivId +" .branch-filter").prepend(jQuery('<label/>').text(this.branchFilterLabel))
   var rootVal = this.rootKmapId ? this.rootKmapId : '';
   var option = jQuery('<option/>').val(rootVal).text(this.t('Select a Category'));
   jQuery(this.branchFilter).append(option)

   for (var key in categories) {
      var item = categories[key]
      option = jQuery('<option/>').val(item.id).text(item.label);//
      jQuery(this.branchFilter).append(option)
   }

   // on CHANGE re-init the selectors
   jQuery(this.branchFilter).change(this.bind(function () {
         var root_kmap_id = this.branchFilter.val()
         var listService;
         var treeService;
         if (root_kmap_id !== '') {
            listService = this.listServiceBranch.replace('{id}', root_kmap_id)
            treeService = this.treeServiceBranch.replace('{id}', root_kmap_id)
         } else {
            listService = this.listService
            treeService = this.treeService
         }

         // re-init autocomplete
         if (this.showAutocomplete) {
            jQuery(this.autocompleteInput).after(jQuery('<img/>').attr('src', this.scriptBasePath + '/lib/jstree/themes/default/throbber.gif'));
            if (typeof (this.allData[listService] == 'undefined')) {
               var acCallback = this.bind(this.initAutocomplete);
               jQuery.ajax({
                     url: listService,
                     dataType: "jsonp",
                     success: function (data) {
                        acCallback(listService, data);
                     }
               });
            } else {
               this.initAutocomplete(listService);
            }
         }

         // re-init tree selector
         if (this.showTreeSelector) {
            jQuery('#'+this.targetDivId).find('.browse-link').html(jQuery('<img/>').attr('src', this.scriptBasePath + '/lib/jstree/themes/default/throbber.gif'));
            jQuery(this.treeSelector).remove(); // when doing a re-init, completely remove the old one
            if (typeof (this.allData[treeService] == 'undefined')) {
               var tsCallback = this.bind(this.initTreeSelector);
               jQuery.ajax({
                     url: treeService,
                     dataType: "jsonp",
                     success: function (data) {
                        tsCallback(treeService, data);
                     }
               });
            } else {
               this.initTreeSelector(treeService);
            }
         }
   })
     );

   // Re-init Tree Selector on filter change

}

/**
* Set up the tree selector after data has been loaded in init()
**/
KmapSelector.prototype.initTreeSelector = function (servicePath, data) {
   // Convert the data to jstree format if necessary
   if (typeof (data) !== 'undefined') {
      var onBranch = servicePath !== this.treeService
      var root = onBranch ? data.category.categories : data.categories // json from server looks different if we've selected a branch as root
      var jstree = {
         data: root.category.title ? root.category.title : 'kmaps_root',  //root category title
         attributes: {
            id: root.category.id ? root.category.id : null// root kmap id
         },
         children: [],
      }
      for (var category in root.category) {
         this.buildJsTree(jstree, root.category[category]);
      }
      this.allData[servicePath] = jstree;
   }

   // Set up the markup
   this.treeSelector = jQuery("<div/>").attr({
         id: "tree_selector_" + this.targetDivId,
         class: 'tree-selector',
         title: this.treeSelectorLabel // appears in the dialog
   });
   jQuery("#"+this.targetDivId + " .branch-filter").after(this.treeSelector)
   var browseLink = jQuery('<a href="#"/>').text(this.t('Browse Categories'))

   jQuery(this.treeSelector).bind("loaded.jstree", function (event, data) {
         jQuery('#'+this.targetDivId + ' .browse-link .throbber').remove()
   })
   var browseLinkDiv = jQuery('#'+this.targetDivId).find('.browse-link');
   if (browseLinkDiv.length == 0) {
      browseLinkDiv = jQuery('<div class="browse-link"/>')
      jQuery(this.treeSelector).before(browseLinkDiv);
   }
   jQuery(browseLinkDiv).html(browseLink)

   // Create the JsTree
   jQuery(this.treeSelector).jstree({
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
   jQuery(browseLink).click(this.bind(function () {
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
                  text: this.t('Add Selected Items'),
                  click: this.bind(function () {  // Add items to the selector when 'DONE' button is selected
                        var checked = jQuery(this.treeSelector).find('.jstree-checked')

                        for (var i = 0; i<checked.length; i++) {
                           var kmap_id = jQuery(checked[i]).children('input').attr('id').split('_')[1];
                           var label = jQuery(checked[i]).children('a').text();
                           item = {
                              id: kmap_id,
                              label: label
                           }
                           this.addItem(item)
                        }
                        jQuery(this.treeSelector).dialog("close");
                  })
               },
               {
                  text: this.t('Cancel'),
                  click: this.bind(function () {
                        jQuery(this.treeSelector).dialog("close");
                  })
               }
            ]
         }
         jQuery(this.treeSelector).dialog(dialogOptions)
   }))
}


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

/**
* Method returns a class-bound version of the passed-in function;
* This will execute in the context of the originating object, 'this'.
* See: http://www.bennadel.com/blog/1517-Binding-Javascript-Method-References-To-Their-Parent-Classes.htm
* See: http://alternateidea.com/blog/articles/2007/7/18/javascript-scope-and-binding
**/
KmapSelector.prototype.bind = function (fnMethod){
   var objSelf = this;
   // Return a method that will call the given method in the context of 'this'.
   return function (){
      return fnMethod.apply(objSelf, arguments)
   }
}

KmapSelector.prototype.addItem = function (item){

   if (this.selectedValues[item.id]) {
      return;
   }

   this.displayItem(item);

   // Add kmapId to the hidden input
   var origVal = jQuery(this.hiddenInput).val()
   var values = typeof (origVal) == 'undefined' || origVal == '' ? [] : jQuery(this.hiddenInput).val().split(',');
   values.push(item.id);
   jQuery(this.hiddenInput).val(values.join(','));

   // Add kmapId to selected values
   this.selectedValues[item.id] = item;
}

KmapSelector.prototype.displayItem = function (item){
   // delete item click handler
   var removeFunc = this.bind(function (element){
         var spanId = jQuery(element).parent().attr('id') // get the span parent of the link
         var kmapId = spanId.split('_').pop();
         this.removeItem(kmapId); //remove the values
         jQuery(element).parent().remove(); //remove the display span
   });

   // Display the newly added kmap in the 'selectionResult' next to a remove link
   var spanId = "item_" + item.id;
   var spanSel = "#" + spanId;
   var itemSpan = jQuery('<span>').addClass('kmap-selector-item').attr('id',spanId);
  var br = jQuery(this.selectionResult.children('br'))
  jQuery(br).before(itemSpan);
   var removeLink = jQuery('<a>').attr('href', '#').attr('title', this.t('Remove ' + item.label)).click(function (){
         removeFunc(this) ; // 'this' here is the a element not the kmap selector instance
   });
   jQuery(spanSel).html(removeLink);
   jQuery(spanSel+" a").append(jQuery('<img>').attr('src', this.scriptBasePath+'images/delete.png'));
   jQuery(spanSel+" a").after(item.label);
}

KmapSelector.prototype.removeItem = function (kmapId)  {
   // remove from selected values
   delete this.selectedValues[kmapId]
   // remove from hidden input
   var values = jQuery(this.hiddenInput).val().split(',')
   var idx = values.indexOf(kmapId)
   values.splice(idx,1)
   jQuery('#'+this.hiddenInputId).val(values.join(','))
}

KmapSelector.prototype.initStylesheet = function (){
   jQuery("head").append("<link>");
   var css = jQuery("head").children(":last");
   css.attr({
         rel:  "stylesheet",
         type: "text/css",
         href: this.scriptBasePath + "css/kmap-selector.css"
   });
}

/**
* buildJsTree recurses through a kmap tree and transforms it into
* the data structure preferred by jsTree selector widget
* @todo pre-check already selected values
**/
KmapSelector.prototype.buildJsTree = function (parent, current) {
   var nextParent = { data: current.title, attr: {id: 'kmap_' + current.id}, };
   parent.children.push(nextParent);

   if (current.categories) {
      nextParent['children'] = [];
      for (var category in current.categories.category) {
         this.buildJsTree(nextParent, current.categories.category[category]);
      }
   }
}

/*=========
  UTILITIES
  =========*/
KmapSelector.prototype.isNumber = function (n) {
   return !isNaN(parseFloat(n)) && isFinite(n);
}
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
}
