/**
* A class for configuring a Location selector
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
* LocationSelector class constructor
* @todo Throw Exceptions in the Constructor to prevent breakage and confusion
**/
function LocationSelector(options) {
   var scripts, i;
   // L10n translation function (e.g. function (str) { return my_l10n_translation(str))
   // Initialize l10n first so we can use it in the constructor
   this.l10nTranslateFunction = typeof (options.l10nTranslateFunction) !== "undefined" ? options.l10nTranslateFunction : null;
   this.initLocalization();

   // Form Elements
   this.placeDictionaryInput = null;
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

   // Form element names, classes and labels
   this.targetDivId = typeof (options.targetDivId) !== "undefined" ? options.targetDivId : null;
   this.hiddenInputId = typeof (options.hiddenInputId) !== "undefined" ? options.hiddenInputId : null;
   this.selectorTitle = typeof (options.selectorTitle) !== "undefined" ? options.selectorTitle : this.t('Search Categories');
   this.placeDictionaryLabel = typeof (options.placeDictionaryLabel) !== "undefined" ? options.placeDictionaryLabel : this.t('Search Place Dictionary');
   this.formInputClass = typeof (options.formInputClass) !== "undefined" ? options.formInputClass : '';

   // Location service options
   this.placeDictionaryServerUri = typeof (options.placeDictionaryServerUri) !== "undefined" ? options.placeDictionaryServerUri : 'http://places.kmaps.virginia.org/';
   this.placeDictionaryNameService = typeof (options.placeDictionaryNameService) !== "undefined" ? this.placeDictionaryServerUri + options.placeDictionaryNameService :  'features/by_name/{term}.json';
   this.placeDictionaryFidService = typeof (options.placeDictionaryFidService) !== "undefined" ? this.placeDictionaryServerUri + options.placeDictionaryFidService :  'features/by_fid/{id}.json';

   // Show Location Services
   this.showPlaceDictionary = typeof (options.showPlaceDictionary) !== "undefined" ? options.showPlaceDictionary : true;
   this.showGeonames = typeof (options.showBranchFilter) !== "undefined" ? options.showGeonames : false;
   this.showMap = typeof (options.showTreeSelector) !== "undefined" ? options.showMap : false;

   // Set the base path of the script
   scripts = jQuery("head script");
   for (i = 0; i < scripts.length; i += 1) {
      if (scripts[i].src && 'location-selector.js' === scripts[i].src.split('?')[0].split('/').pop()) {
         this.scriptBasePath = scripts[i].src.split('?')[0].split('/').slice(0, -1).join('/') + '/';
      }
   }
}

/**
*  initialize this widget
**/
LocationSelector.prototype.init = function () {
   if (!(this.showPlaceDictionary || this.showGeonames)) {
      return;
   }
   this.initStylesheet();
   this.initWidgetMarkup();
   this.initItems();

   // Geonames
   // Map
};

/**
* add the form markup
**/
LocationSelector.prototype.initWidgetMarkup = function () {
   var formInputClass = this.formInputClass;
   var acSource = this.placeDictionaryNameService;
   var locSelector = this;
   
   // top-level container
   var target="#"+this.targetDivId;
   jQuery(target).addClass('location-selector')
   this.placeDictionaryInput = jQuery("<input/>").attr({
         id: "autocomplete_" + this.targetDivId,
         class: formInputClass,
         type: 'text',
         size: 60,
   });
   jQuery(target).before(jQuery('<label/>').text(this.selectorTitle))
   
   // results display
   this.selectionResult = jQuery("<div/>").attr('id', "results_" + this.targetDivId).attr('class', 'results');
   
   // hidden results
   this.hiddenInput = document.getElementById(this.hiddenInputId);
   
   if (this.showPlaceDictionary) {
      
      // autocomplete container
      var pdTarget = jQuery('<div class="autocomplete-input"/>');
      
      // autocomplete label
      jQuery(pdTarget).html(jQuery("<label>").html(this.t(this.placeDictionaryLabel)));
      
      // add autocomplete input to autocomplete container
      jQuery(pdTarget).append(this.placeDictionaryInput);
      
      // autocomplete search button
      var searchbtn = jQuery("<button/>").attr({
            value: 'Search',
            title: this.t('Search the Place Dictionary'),
            type: 'submit',
            class: 'btn btn-primary form-submit btn-sm btn-icon',
      }).click( function(event) {
      	 event.preventDefault();
         // add the autocomplete config to the input
         var acInput = jQuery( this ).siblings( '.' + formInputClass );
         if ( ! acInput.val() ) {
            jQuery('<p/>').html(locSelector.t('Please enter a search term and try your search again')).dialog({
                  modal: true,
                  width: 540,
                  height: 200,
                  buttons: {
                     Ok: function() {
                        jQuery( this ).dialog( "close" );
                     }
                  }
            });
            return;
         }
         
         //console.log('Querying the place dictionary:', acSource.replace('{term}', acInput.val())); // Leave this in
         
         acInput.autocomplete( {
               source: function( request, response ) {
                  jQuery.ajax({
                        url: acSource.replace('{term}', acInput.val()),                                                   
                        dataType: "jsonp",
                        success: function( data ) {
                           var results = [];
                           //console.log("Place data for '" + acInput.val() + "'", data) // Leave this in
                           
                           if( data.features.length > 0) {
                             var results = jQuery.map( data.features, function( selection ) {
                                    var ftype = '';
                                    if (jQuery.isArray( selection.feature_types ) && selection.feature_types.length > 0 ) {
                                       ftype = " — " + selection.feature_types[0].title;
                                    } else if (selection.feature_types && selection.feature_types.title) {
                                       ftype = " — " + selection.feature_types.title;
                                    }
                                    return {
                                       label: selection.header + ftype,
                                       // value: item.header + " [fid:" + item.fid + "]"
                                       value: selection.id,
                                       id: "fid:" + selection.id,
                                       placeDictLabel: selection.header,
                                    };
                              });
                           } else { 
                              acInput.removeClass('throbber');
                              acInput.autocomplete('destroy');
                              jQuery('<p/>').html(locSelector.t('No results found. Please try another search.')).dialog({
                                    modal: true,
                                    width: 540,
                                    height: 200,
                                    buttons: {
                                       Ok: function() {
                                          jQuery( this ).dialog( "close" );
                                       }
                                    }
                              });
                           }
                           response( results );
                        }
                  });
               },
               minLength: 1,
                select: function (event, ui) {
                   locSelector.addItem(ui.item);
                   ui.item.value=''; // We have to clear this value otherwise it will be written to the visible input field 
                   jQuery(event.target).autocomplete('destroy')
                },
               open: function (event, ui) { 
                  jQuery(event.target).removeClass('throbber');
                  //jQuery(this).removeClass("ui-corner-all").addClass("ui-corner-top"); 
               },
               close: function (event, ui) { 
                 // jQuery(this).removeClass("ui-corner-top").addClass("ui-corner-all"); 
                  // jQuery(this).autocomplete('destroy')
               }
         });
         acInput.autocomplete('search');
         acInput.addClass('throbber');
      });
      
      jQuery(pdTarget).append(searchbtn.append('<span class="icon shanticon-magnify"></span>'));
      /*
       * <button class="btn btn-primary form-submit btn-delete btn-sm btn-icon ajax-processed" title="Remove this field value" 
       * 					type="submit" value="Remove"><span class="icon shanticon-trash"></span> <span></span></button>
       */
      // autocomplete cancel button
      var delbtn = jQuery("<button/>").attr({
            value: 'Remove',
            type: 'submit',
            class: 'btn btn-primary form-submit btn-remove btn-sm btn-icon',
            title: this.t('Cancel')
      }).click( function(event) {
      	 event.preventDefault();
         var acInput = jQuery( this ).siblings( '.' + formInputClass );
         acInput.removeClass('throbber');
         acInput.autocomplete('destroy');
      });
      delbtn.append('<span class="icon shanticon-close2b"></span>');
      jQuery(pdTarget).append(delbtn);   
      // add selection and display divs to to top-level container
      jQuery(target).append(pdTarget);
      jQuery(target).append(this.selectionResult);
   }
};


/**
* populate the widget
**/
LocationSelector.prototype.initItems = function () {
   // Add the existing values
   if (typeof (this.selectedValues) == 'object') {
      for (var locId in this.selectedValues) {
         var item = this.selectedValues[locId];
         item.placeDictLabel = item.label;
         this.displayItem(item);
         var origVal = jQuery(this.hiddenInput).val();          // Add locId to the hidden input
         var values = this.empty(origVal) ? [] : jQuery(this.hiddenInput).val().split(',');
         if (values.indexOf(locId) == -1) {
            values.push(locId);
            jQuery(this.hiddenInput).val(values.join(','));
         }
      }
   }
};

/**
* Create the t() function for a pluggable approach to l10n translation of strings
* Usage: this.t('A string needing translation');
* Note the default function is a passthrough that does no translation
**/
LocationSelector.prototype.initLocalization = function () {
   //setup the 't()' function for translations
   if (typeof (this.l10nTranslateFunction) == 'function') {
      this.t = this.l10nTranslateFunction;
   } else {
      // Default pass through, i.e. no l10n translation configured
      this.t = function (string) { return string; };
   }
};

/** 
* Add an item to selected values
**/
LocationSelector.prototype.addItem = function (item){
   if (this.selectedValues[item.id]) {
      return;
   }
   this.displayItem(item);

   // Add locationId to the hidden input
   var origVal = jQuery(this.hiddenInput).val();
   var values = typeof (origVal) == 'undefined' || origVal == '' ? [] : jQuery(this.hiddenInput).val().split(',');
   values.push(item.id);
   jQuery(this.hiddenInput).val(values.join(','));

   // Add location_id to selected values
   this.selectedValues[item.id] = item;
};

LocationSelector.prototype.displayItem = function (item){
   var locSelector = this;
   
   // Location container span
   var spanId = "item_" + item.id;
   var spanSel = "#" + this.targetDivId + " span[id='" + spanId + "']";
   var itemSpan = jQuery('<span>').addClass('location-selector-item').attr('id',spanId);
   jQuery(this.selectionResult).append(itemSpan);
     
   // Remove link
   var removeLink = jQuery('<a>').attr('href', '#').attr('title', this.t('Remove ' + item.placeDictLabel));
   jQuery(spanSel).html(removeLink);
   jQuery(spanSel+" a").click( function (event){
         var spanId = jQuery(this).parent().attr('id'); // get the span parent of the link
         var locId = spanId.split('_').pop();
         locSelector.removeItem(locId); //remove loc ids from form input
         jQuery(this).parent().remove(); //remove the display span 
         event.preventDefault();
   } );
   jQuery(spanSel+" a").append(jQuery('<span>').attr('class', 'icon shanticon-close2b'));
   
   // Location label
   jQuery(spanSel+" a").after(item.placeDictLabel);
};

LocationSelector.prototype.removeItem = function (locationId)  {
   // remove from selected values
   delete this.selectedValues[locationId];
   // remove from hidden input
   var values = jQuery(this.hiddenInput).val().split(',');
   var idx = values.indexOf(locationId);
   values.splice(idx,1);
   jQuery('#'+this.hiddenInputId).val(values.join(','));
};

LocationSelector.prototype.initStylesheet = function (){
   jQuery("head").append("<link>");
   var css = jQuery("head").children(":last");
   css.attr({
         rel:  "stylesheet",
         type: "text/css",
         href: this.scriptBasePath + "location-selector.css"
   });
};


/*=========
  UTILITIES
  =========*/
LocationSelector.prototype.isNumber = function (n) {
   return !isNaN(parseFloat(n)) && isFinite(n);
};

LocationSelector.prototype.empty = function (mixed_var) {
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
