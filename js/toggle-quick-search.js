Drupal.behaviors.kmap_taxonomy={attach:function(context){
   
   var transcriptSearch = jQuery('#block-transcripts-transcript-search');
   var siteSearch = jQuery('#block-search-form');
   siteSearch.addClass('active');
   addToggleToSearchForm( transcriptSearch);
   addToggleToSearchForm( siteSearch);
   
   function addToggleToSearchForm( searchForm ) {
      var toggleBlock = jQuery('<p class="search-toggle-box"/>');
      searchForm.find('form').append(toggleBlock);
      
      toggleBlock.append( jQuery('<input/>').attr({
            type: 'radio',
            name: 'search-type',
            value: 'site',
            checked: true
      }).change( function (event) {
         console.log('site change')
         toggleSearchForm(this);
      }
      ));
      toggleBlock.append( jQuery('<span/>').text(Drupal.t('Site Search')));
      toggleBlock.append( jQuery('<br/>'));
      
      toggleBlock.append( jQuery('<input/>').attr({
            type: 'radio',
            name: 'search-type',
            value: 'transcript',
      }).change( function (event) {
         console.log('transcript change')
         toggleSearchForm(this);
      }
      ));
      
      toggleBlock.append( jQuery('<span/>').text(Drupal.t('Transcript Search')));
      
   }
   
   function toggleSearchForm(input) {
      console.log('toggling')
      
      var transcriptSearch = jQuery('#block-transcripts-transcript-search');
      var siteSearch = jQuery('#block-search-form');
      
      console.log('input.value', input.value)
      var termValue = jQuery(input).parents('form').find('input[type=text]').val()
      console.log('termValue', termValue)
      
      if (input.value == 'transcript' ) {
         transcriptSearch.addClass('active');
         transcriptSearch.find('input[value=transcript]').attr('checked',true)
         siteSearch.removeClass('active');
         siteSearch.find('input[value=site]').attr('checked',true)
         transcriptSearch.find('input[type=text]').val( termValue )
         
      } else {
         siteSearch.addClass('active');
         transcriptSearch.removeClass('active');
         siteSearch.find('input[type=text]').val( termValue )
      }
   }
   
}};
