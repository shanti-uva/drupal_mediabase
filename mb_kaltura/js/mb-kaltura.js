(function ($) {
    /**
    * See: http://www.kaltura.org/common-configuration-saas
    **/

Drupal.behaviors.mb_kaltura = {
   attach: function(context) {
      // Force HTML5 layers
      // DO NOT DELETE BELOW. IT IS COMMENTED OUT SO THAT THE CUSTOM PLAYER WILL SHOW PROPERLY
      // BUT WE WILL NEED IT IF WE EVER WANT TO GO BACK TO FORCING HTML5
   /*    if (typeof mw !== 'undefined') {
         mw.setConfig('forceMobileHTML5', true );
         mw.setConfig('EmbedPlayer.EnableIframeApi', true) // If false, player will error out
         var iFrameId = $("object[name='kaltura_player']").attr('id');
         useNativePlayer = false
         if (useNativePlayer) {
            mw.setConfig( 'EmbedPlayer.RewriteSelector', false ) ; // If false, render the native player
            iFrameId += '_ifp'
         }
      } */
      
      // Add Select all Checkboxes for import form
      $('#CheckboxAll').click( function() {
            $('input[@type=checkbox]').each(function() {
                  this.checked = 'checked';
            });
      });
      $('#edit-select-all-0').show();
      $('#edit-select-all-0').change(   function () {
            if($(this).attr('checked') == true){  
               $($(this).parents('form').get(0)).find(':checkbox').each(function(){  
                     if(!this.checked){  
                        this.checked = true;  
                     }  
               });  
            }  
            else {  
               $($(this).parents('form').get(0)).find(':checkbox').each(function(){  
                     if(this.checked){  
                        this.checked = false;  
                     }  
               });  
            }
      });
      
      
      // Intercept the remove click and show a dialog
      // re-show Add Media button on remove media event
      if ($(".kaltura_field_thumb .remove_media").data("events")) {
         
         var kalturaRemoveHandler = $(".kaltura_field_thumb .remove_media").data("events").click.pop();
         $(".kaltura_field_thumb .remove_media").unbind("click", kalturaRemoveHandler);
         $(".kaltura_field_thumb .remove_media").bind("custom_event", kalturaRemoveHandler.handler);
         $(".kaltura_field_thumb .remove_media").click( function(event) {
               var message = Drupal.t("Are you sure? This can only be undone by cancelling the entire edit form losing any changes you may have made.");
               $('<div>' + message + '<div/>').dialog({
                     resizable: false,
                     height:240,
                     width:420,
                     modal: true,
                     buttons: {
                        "Remove Media": function() {
                           $( this ).dialog( "close" );
                           $("#edit-field-video-und-0-button a").removeClass('hidden');   
                           $("#edit-field-audio-und-0-button a").removeClass('hidden');
                           $(".kaltura_field_thumb .remove_media").trigger("custom_event");  // execute the original kaltura supplied event
                        },
                        Cancel: function() {
                           $( this ).dialog( "close" );
                        }
                     }
               } );
         } );
      }      
      
      // Handle the contribution wizard close event
      $("#modalContent .close").click( function() {
            // if a thumbnail image tag exists, then we have media,  hide the add button
            if ( $(".kaltura_field_thumb img").length ) { 
               $("#edit-field-video-und-0-button a").addClass('hidden');   
               $("#edit-field-audio-und-0-button a").addClass('hidden');   
            } 
      }
      );
      
      // Use the better close button for media
      var closeButtonPath = Drupal.settings.basePath +  Drupal.settings.mediabase.path + '/images/close.png';
      $('input.remove_media').css({
            'background-image': "url('" + closeButtonPath + "')",
            'background-size': "15px",
      });
      
      // Hide submit button in upload form until file has been attached
      if ($('#kaltura-uploader-form').length > 0) {
          if ($('#kaltura-uploader-form .form-managed-file span.file').length == 0) {
              $('#kaltura-uploader-form .form-actions').hide();
          } else {
              $('#kaltura-uploader-form .form-actions').show();
          }
      }
      
      // Kaltura import select: When select is changed reload page with new rn param and pg param which defaults to page 1
      $('#mb-kaltura-import-form #kaltura-limit-select').change(function(e) {
          e.preventDefault();
          var ss = window.location.search;
          rn = $(this).val();
          ss = '?rn=' + rn;
          window.location.search = ss;
      });
      
      // When the kaltura import form page number is changed
      $('#mb-kaltura-import-form .pagediv input.pagenum').change(function(e) {
          e.preventDefault();
          var pn = $(this).val(),
                ss = window.location.search,
                rn= false;
          var pts = ss.replace('?', '').split('&');
          for (var n in pts) {
              var ppts = pts[n].split('=');
              if (ppts[0] == 'rn') { rn = ppts[1];}
          }
          ss = '?pg=' + pn;
          if (rn) { ss += '&rn=' + rn; }
          window.location.search = ss;
      });
      // When kaltura id search box is changed, initiate search for kid
      $('.form-item-id-search #edit-id-search').change(function(e) {
          e.preventDefault();
          var kid = $(this).val(),
                ss = window.location.search;
          ss = ss.split('&kid');
          window.location.search = ss[0] + '&kid=' + kid;
      });
      
      $('#mb-kaltura-import-form input[type=text]').keypress(function(event){
        var enterOkClass =  jQuery(this).attr('class');
        if (event.which == 13 && enterOkClass != 'enterSubmit') {
            event.preventDefault();
            $(this).change();
            return false;   
        }
    });
   }
};


} (jQuery));
