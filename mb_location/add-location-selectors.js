Drupal.behaviors.mb_location={attach:function(context){
   mb_loc_selectors = [];
   for (var key in Drupal.settings.mb_location) {
      var settings = Drupal.settings.mb_location[key];
      var loc_selector_options = {
         // REQUIRED
         targetDivId: settings.target_div,
         hiddenInputId: settings.hidden_input,
         // OPTIONAL
         prepopulateValues: settings.prepopulate_values,
         formInputClass: 'form-text',
         // labels
         selectorTitle: settings.selector_title,
         placeDictionaryLabel: 'Search Place Dictionary',
         branchFilterLabel: 'DELETEME',
         treeSelectorLabel: 'Select one or more places',
         // services
         placeDictionaryServerUri: Drupal.settings.basePath, //This should end in a '/'
         placeDictionaryFidService:  'location/id/{id}', //'features/by_fid/{id}.json',
         placeDictionaryNameService: 'location/name/{term}', //'features/by_name/{term}.json',

         // toggle widgets
         showPlaceDictionary: settings.show_place_dictionary,
         showGeonames: settings.show_geonames,
         showMap: settings.show_map,
         // localization
         l10nTranslateFunction: Drupal.t
      };
      
      // Test if the widget markup is already on the page somehow; 
      // e.g. In Drupal, CTools ajax methods re-apply behoaviors which results in these init methods getting called again
      // The results class is added to the results div by the init method so if it's already present, then we don't need to re-init
      if( jQuery("#" + loc_selector_options.targetDivId + " .results").length > 0 ) { 
         //console.log('selector is already initalized');
         continue;
      }

      var selector = new LocationSelector(loc_selector_options);
      selector.init();
      mb_loc_selectors.push(selector);
   }
}};
