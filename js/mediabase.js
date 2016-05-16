(function ($) {
	Drupal.behaviors.mediabaseImages={
		attach: function(context){
		
		   fixAudioImages();
		   replaceBrokenImages(); 
		   
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
		}
	};
	
	Drupal.behaviors.mediabaseSearch={
        attach: function(context){
           
            // Code to add transcript and description radiobuttons to search form
           var transcriptSearch = jQuery('#block-transcripts-transcript-search');
           var siteSearch = jQuery('#block-search-form');
           siteSearch.addClass('active');
           addToggleToSearchForm( transcriptSearch);
           addToggleToSearchForm( siteSearch);
           
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
           
           
        }
    };
    
    Drupal.behaviors.mediabaseViews={
        attach: function(context){
             
           fixVBOCheckBoxes();
           if ($('body').hasClass('page-mycontent-workflow')) { 
               cleanupWorkflowSelects(context);  
           }
           
           function fixVBOCheckBoxes() {
                // vbo click anywhere in the row to enable messes up the ICheck function so disabling on view-my-content forms
                $('.view-my-content .views-table tbody tr').unbind('click');
               }
           
           // Arrange the 19 selects on the workflow page into organized divs for formatting
            function cleanupWorkflowSelects() {
                // Remove all the select widgets into groups
                var grp3 = $('#views-exposed-form-my-workflow-workflow-all .views-exposed-widget').detach();
                var genfilters = grp3.splice(-3, 3);
                var grp1 = grp3.splice(0,9);
                var grp2 = grp3.splice(0,5);
                if ($('#grp1').length > 0) {
                    $('#grp1').find(".panel-body").eq(0).append(grp1);
                    $('#grp2').find(".panel-body").eq(0).append(grp2);
                    $('#grp3').find(".panel-body").eq(0).append(grp3);
                    $('#grp3').parent().after(genfilters);
                    return;
                }
                // Set up Accordion code
                var formrow = $('#views-exposed-form-my-workflow-workflow-all .views-exposed-widgets.clear-block.row');
                var accordionGrp = $('<div class="panel-group" id="workflow-accordion" role="tablist" aria-multiselectable="true"></div>');
                formrow.append(accordionGrp);
                // Add bootstrap accordion to each row with their group of selects
                // Row 1: Media Workflow
              var row1 = $( '<div class="panel panel-default">' +
                        '<div class="panel-heading" role="tab" id="headingOne">' +
                          '<h6>' +
                            '<a class="accordion-toggle" data-toggle="collapse" data-parent="#workflow-accordion" href="#grp1" aria-expanded="true" aria-controls="grp1">' +
                              '<span class="glyphicon glyphicon-minus"></span>Media Workfow' +
                            '</a>' +
                          '</h6>' +
                        '</div>' +
                        '<div id="grp1" class="panel-collapse collapse in" role="tabpanel" aria-labelledby="headingOne">' +
                          '<div class="panel-body"></div></div></div>');
                          
                row1.find(".panel-body").eq(0).append(grp1);
                accordionGrp.append(row1);
                // Row 2: Catalog Record Workflow
                var row2 = $('<div class="panel panel-default">' +
                        '<div class="panel-heading" role="tab" id="headingTwo">' +
                          '<h6>' +
                            '<a class="accordion-toggle collapsed" data-toggle="collapse" data-parent="#workflow-accordion" href="#grp2" aria-expanded="false" aria-controls="grp2">' +
                              '<span class="glyphicon glyphicon-plus"></span>Catalog Record Workfow' +
                            '</a>' +
                          '</h6>' +
                        '</div>' +
                        '<div id="grp2" class="panel-collapse collapse" role="tabpanel" aria-labelledby="headingTwo">' +
                          '<div class="panel-body"></div></div></div>');
                row2.find(".panel-body").eq(0).append(grp2);
                accordionGrp.append(row2);
                // Row 3: Transcript Workflow
                var row3 = $('<div class="panel panel-default">' +
                        '<div class="panel-heading" role="tab" id="headingThree">' +
                          '<h6>' +
                            '<a class="accordion-toggle collapsed" data-toggle="collapse" data-parent="#workflow-accordion" href="#grp3" aria-expanded="false" aria-controls="grp3">' +
                              '<span class="glyphicon glyphicon-plus"></span>Transcript Workfow' +
                            '</a>' +
                          '</h6>' +
                        '</div>' +
                        '<div id="grp3" class="panel-collapse collapse" role="tabpanel" aria-labelledby="headingThree">' +
                          '<div class="panel-body"></div></div></div>');
                row3.find(".panel-body").eq(0).append(grp3);
                accordionGrp.append(row3);
                accordionGrp.after(genfilters);
            }
        }
    };
    
     Drupal.behaviors.mediabaseForms={
        attach: function(context){
            // Disable submit forms once something is submitted
           $('#video-node-form, #audio-node-form').submit(function()  { $('#edit-submit').prop('disabled',true);});
        }
     };

} (jQuery));