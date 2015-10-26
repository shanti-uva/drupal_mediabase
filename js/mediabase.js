(function ($) {
	Drupal.behaviors.mediabase={
		attach: function(context){
		
		   fixAudioImages();
		   replaceBrokenImages(); 
		   /*if(window.location.pathname.indexOf("/collection/") > -1) {
		   	fixCollectionImages();
			 }*/
		   fixVBOCheckBoxes();
		   
			// Code to add transcript and description radiobuttons to search form
		   var transcriptSearch = jQuery('#block-transcripts-transcript-search');
		   var siteSearch = jQuery('#block-search-form');
		   siteSearch.addClass('active');
		   addToggleToSearchForm( transcriptSearch);
		   addToggleToSearchForm( siteSearch);
		   
			function fixAudioImages() {
				$('.shanti-thumbnail.audio img').each(function() { 
					$this = jQuery(this); 
					var src = $this.attr('src'); 
					if (src.indexOf('/width/') > -1) { 
						var pts = src.split("/width/"); 
						$this.attr('src', pts[0]+"/version/0"); 
					} 
				});
			}
		   
		   function fixVBOCheckBoxes() {
		   		// vbo click anywhere in the row to enable messes up the ICheck function so disabling on view-my-content forms
		   		$('.view-my-content .views-table tbody tr').unbind('click');
			   }
		   
		   function addToggleToSearchForm( searchForm ) {
		   	return; // This should be done in Drupal with the Form API and possibly a submit function. Disabling for now.
		      var toggleBlock = jQuery('<p class="search-toggle-box"/>');
		      searchForm.find('form').append(toggleBlock);
		      
		      // site search button
		      var radioId = 'site-radio-' + searchForm.attr('id');
		      toggleBlock.append( jQuery('<input/>').attr({
		            type: 'radio',
		            name: 'search-type',
		            value: 'site',
		            checked: true,
		            id: radioId,
		      }).change( function (event) {
		         toggleSearchForm(this);
		      }
		      ));
		      toggleBlock.append( jQuery('<label/>').text(Drupal.t('Site Search')).attr('for', radioId ));
		      toggleBlock.append( jQuery('<br/>'));
		      
		      // transcript search button
		      radioId = 'transcript-radio-' + searchForm.attr('id');
		      toggleBlock.append( jQuery('<input/>').attr({
		            type: 'radio',
		            name: 'search-type',
		            value: 'transcript',
		            id: radioId,
		      }).change( function (event) {
		         toggleSearchForm(this);
		      }
		      ));
		      toggleBlock.append( jQuery('<label/>').text(Drupal.t('Transcript Search')).attr('for', radioId ));
		      
		      // add the close link
		      toggleBlock.prepend( jQuery('<a title="close"><img/></a>').attr({
		            href: '#',
		            class: 'close-toggle-box',
		      }).css({
		            float: 'right',
		            width: '20px',
		      }).click(function(event) {
		         toggleBlock.removeClass('visible');
		         event.preventDefault();
		      }));
		      
		      // add the close button
		      var closeButtonPath = Drupal.settings.basePath +  Drupal.settings.mediabase.path + '/images/close.png';
		      jQuery('.close-toggle-box img').attr( {
		            src: closeButtonPath,
		      }).css('width', '20px');
		      
		      searchForm.find('input[type=text]').hover( function(event) {
		            toggleBlock.addClass('visible');
		      });
		   }
		   
		   function toggleSearchForm(input) {
		      var transcriptSearch = jQuery('#block-transcripts-transcript-search');
		      var siteSearch = jQuery('#block-search-form');
		      var termValue = jQuery(input).parents('form').find('input[type=text]').val();
		      if (input.value == 'transcript' ) {
		         transcriptSearch.addClass('active');
		         transcriptSearch.find('input[value=transcript]').attr('checked',true);
		         transcriptSearch.find('input[type=text]').val( termValue );
		         transcriptSearch.find('.search-toggle-box').addClass('visible');
		         siteSearch.removeClass('active');
		         siteSearch.find('input[value=site]').attr('checked',true);
		         siteSearch.find('.search-toggle-box').removeClass('visible');
		      } else {
		         siteSearch.addClass('active');
		         siteSearch.find('input[value=site]').attr('checked',true);
		         siteSearch.find('input[type=text]').val( termValue );
		         siteSearch.find('.search-toggle-box').addClass('visible');
		         transcriptSearch.removeClass('active');
		         transcriptSearch.find('input[value=transcript]').attr('checked',true);
		         transcriptSearch.find('.search-toggle-box').removeClass('visible');
		      }
		   }
		   
		   // On image error in thumbnail div, use the default blank thumbnail image
		   function replaceBrokenImages() {
		     jQuery('.kaltura-thumb img').error(function() {
		       var mysrc = jQuery(this).attr('src');
		       var url = window.location.protocol + "//" + window.location.host;
		       url += Drupal.settings.basePath + Drupal.settings.mediabase.path;
		       url += '/images/generic-video-thumb.jpg';
		       if(url != mysrc) { 
		         jQuery(this).attr('src', url);
		       }
		     });
		   }
		   
		   // Update the resolution of thumbnails on collection pages
		   /*
		   function fixCollectionImages() {
		   	console.log('here in commented out region');
		   		$('img').each(function() { 
		   			var img = $(this); 
		   			var src = img.attr('src'); 
		   			if(src.indexOf('kaltura.com') > -1) { 
		   					src = src + '/height/140'; 
		   					img.attr('src', src);
		   			}
		   		});
		   }
		   */
		   
		}
	};
	

} (jQuery));