Drupal.behaviors.kmap_taxonomy={attach:function(context){
   kmap_taxo_selectors = [];
   for (var key in Drupal.settings.kmap_taxonomy) {
      var settings = Drupal.settings.kmap_taxonomy[key];
      var kmap_selector_options = {

         // REQUIRED
         name: settings.name,
         targetDivId: settings.target_div,
         hiddenInputId: settings.hidden_input,
         
         // OPTIONAL
         prepopulateValues: settings.prepopulate_values,
         formInputClass: 'form-text',
         // labels
         selectorTitle: settings.selector_title,
         autocompleteLabel: 'Search',
         branchFilterLabel: 'Filter',
         treeSelectorLabel: 'Select one or more categories',
         // kmapServerUri: 'http://tmb.thlib.org/',
          // these service paths are for the kmaps server proxy built into the kmaps_taxonomy module
         kmapServerUri: Drupal.settings.basePath, //This should end in a '/'
         listService:  'kmaps/list',
         listServiceBranch:  'kmaps/list/{id}',
         treeService:  'kmaps/all',
         treeServiceBranch:  'kmaps/all/{id}', 
         categoryService:  'kmaps/categories',
         categoryServiceBranch:  'kmaps/categories/{id}', 
         // toggle widgets
         showAutocomplete: settings.show_autocomplete,
         showBranchFilter: settings.show_branch_filter,
         showTreeSelector: settings.show_tree_selector,
         allowAnnotations: settings.allow_annotations,
         allowFormatting: settings.allow_formatting,
         // parentage formats
         parentageFormats:   {
            first_last: Drupal.t('First and last'),
            last: Drupal.t('Last'),
            last_plus_parent: Drupal.t('Last plus parent'),
            full: Drupal.t('Full'),
         },
         // root branch
         rootKmapId: settings.root_kmap_id,
         // localization
         l10nTranslateFunction: Drupal.t
      };
      
      // Test if the widget markup is already on the page; 
      // e.g. In Drupal, CTools ajax methods re-apply behoaviors which results in these init methods getting called again
      // The results class is added to the results div by the init method so if it's already present, then we don't need to re-init
      if( jQuery("#" + kmap_selector_options.targetDivId + " .results").length > 0 ) { 
         //console.log('selector is already initalized');
         continue;
      }

      var selector = new KmapSelector(kmap_selector_options);
      selector.init();
      kmap_taxo_selectors.push(selector);
   }
}};
