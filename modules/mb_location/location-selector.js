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
   "use strict";
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
   this.placeDictionaryServerUri = typeof (options.placeDictionaryServerUri) !== "undefined" ? options.placeDictionaryServerUri : 'http://places.thlib.org/';
   this.placeDictionarySearchService = typeof (options.placeDictionarySearchService) !== "undefined" ? this.placeDictionaryServerUri + options.placeDictionarySearchService :  'features/by_name/{term}.json';

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
   "use strict";
   if (!(this.showPlaceDictionary || this.showGeonames)) {
      return;
   }
   this.initStylesheet();
   this.initWidgetMarkup();
   this.initItems();

   // Place Dictionary
   //this.initPlaceDictionary();
   // Geonames
   // Map
};

/**
* add the form markup
**/
LocationSelector.prototype.initWidgetMarkup = function () {
   var target="#"+this.targetDivId;
   jQuery(target).addClass('location-selector')
   this.placeDictionaryInput = jQuery("<input/>").attr({
         id: "autocomplete_" + this.targetDivId,
         class : this.formInputClass,
         type: 'text',
         size: 60,
   });
   this.selectionResult = jQuery("<div/>").attr('id', "results_" + this.targetDivId).attr('class', 'results');
   this.hiddenInput = document.getElementById(this.hiddenInputId);
   if (this.showPlaceDictionary) {
      var pdTarget = jQuery('<div class="autocomplete-input"/>');
      jQuery(target).append(pdTarget);
      // UNCOMMENT LABEL jQuery(pdTarget).html(jQuery("<label>").html(this.t(this.placeDictionaryLabel)));
   }
   jQuery(pdTarget).append(this.placeDictionaryInput);
   jQuery(target).append(this.selectionResult);
   jQuery(this.placeDictionaryInput).after(jQuery('<img/>').attr('src', this.scriptBasePath + '/throbber.gif'));
   jQuery(target).before(jQuery('<label/>').text(this.selectorTitle))
}


/**
* populate the widget
**/
LocationSelector.prototype.initItems = function () {
   if (typeof (this.selectedValues) == 'object') {
      for (var locId in this.selectedValues) {
         this.displayItem(this.selectedValues[locId]);
         // Add locId to the hidden input
         var origVal = jQuery(this.hiddenInput).val()
         var values = this.empty(origVal) ? [] : jQuery(this.hiddenInput).val().split(',');
         if (values.indexOf(locId) == -1) {
            values.push(locId);
            jQuery(this.hiddenInput).val(values.join(','));
         }

      }
   }
}

/**
* initialize the autocomplete input
* called in 'success' method of the $.ajax() call for the data
**/
LocationSelector.prototype.initPlaceDictionary = function () {

   this.placeDictionaryInput.autocomplete({
         source: this.placeDictionaryServerUri + this.placeDictionarySearchService,
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
* Method returns a class-bound version of the passed-in function;
* This will execute in the context of the originating object, 'this'.
* See: http://www.bennadel.com/blog/1517-Binding-Javascript-Method-References-To-Their-Parent-Classes.htm
* See: http://alternateidea.com/blog/articles/2007/7/18/javascript-scope-and-binding
**/
LocationSelector.prototype.bind = function (fnMethod){
   var objSelf = this;
   // Return a method that will call the given method in the context of 'this'.
   return function (){
      return fnMethod.apply(objSelf, arguments)
   }
}

/** 
* Add an item to selected values
**/
LocationSelector.prototype.addItem = function (item){

   if (this.selectedValues[item.id]) {
      return;
   }
   
   this.displayItem(item);

   // Add locationId to the hidden input
   var origVal = jQuery(this.hiddenInput).val()
   var values = typeof (origVal) == 'undefined' || origVal == '' ? [] : jQuery(this.hiddenInput).val().split(',');
   values.push(item.id);
   jQuery(this.hiddenInput).val(values.join(','));

   // Add location_id to selected values
   this.selectedValues[item.id] = item;
}

LocationSelector.prototype.displayItem = function (item){
   console.log('item', item)
   
   var removeFunc = this.bind(function (element){
         var spanId = jQuery(element).parent().attr('id') // get the span parent of the link
         console.log('spanId', spanId)
         var locId = spanId.split('_').pop();
         console.log('locId', locId)
         this.removeItem(locId); //remove the values
         jQuery(element).parent().remove(); //remove the display span
   });

   // Display the newly added location in the 'selectionResult' next to a remove link
   var spanId = "item_" + item.id;
   var spanSel = "span[id='" + spanId + "']";
   var itemSpan = jQuery('<span>').addClass('location-selector-item').attr('id',spanId);
   jQuery(this.selectionResult).append(itemSpan);
   var removeLink = jQuery('<a>').attr('href', '#').attr('title', this.t('Remove ' + item.label)).click(function (){
         removeFunc(this) ; // 'this' here is the a element not the location selector instance
   });
   jQuery(spanSel).html(removeLink);
   jQuery(spanSel+" a").append(jQuery('<img>').attr('src', this.scriptBasePath+'images/delete.png'));
   jQuery(spanSel+" a").after(item.label);
console.log('jQuery(spanSel)', jQuery(spanSel))
      console.log('spanSel', spanSel)
      
}

LocationSelector.prototype.removeItem = function (locationId)  {
   // remove from selected values
   delete this.selectedValues[locationId]
   // remove from hidden input
   var values = jQuery(this.hiddenInput).val().split(',')
   var idx = values.indexOf(locationId)
   values.splice(idx,1)
   jQuery('#'+this.hiddenInputId).val(values.join(','))
}

LocationSelector.prototype.initStylesheet = function (){
   jQuery("head").append("<link>");
   var css = jQuery("head").children(":last");
   css.attr({
         rel:  "stylesheet",
         type: "text/css",
         href: this.scriptBasePath + "location-selector.css"
   });
}


/*=========
  UTILITIES
  =========*/
LocationSelector.prototype.isNumber = function (n) {
   return !isNaN(parseFloat(n)) && isFinite(n);
}
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
}
