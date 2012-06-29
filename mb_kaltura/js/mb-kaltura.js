/**
* See: http://www.kaltura.org/common-configuration-saas
**/

Drupal.behaviors.mb_kaltura = {
   attach: function(context) {
      // Force HTML5 layers
      if (typeof mw !== 'undefined') {
         mw.setConfig('forceMobileHTML5', true );
         mw.setConfig('EmbedPlayer.EnableIframeApi', true) // If false, player will error out
         var iFrameId = jQuery("object[name='kaltura_player']").attr('id');
         useNativePlayer = false
         if (useNativePlayer) {
            mw.setConfig( 'EmbedPlayer.RewriteSelector', false ) ; // If false, render the native player
            iFrameId += '_ifp'
         }
      }
      
      // Add Select all Checkboxes for import form
      jQuery('#CheckboxAll').click( function() {
            jQuery('input[@type=checkbox]').each(function() {
                  this.checked = 'checked';
            });
      });
      jQuery('#edit-select-all-0').show();
      jQuery('#edit-select-all-0').change(   function () {
            if(jQuery(this).attr('checked') == true){  
               jQuery(jQuery(this).parents('form').get(0)).find(':checkbox').each(function(){  
                     if(!this.checked){  
                        this.checked = true;  
                     }  
               });  
            }  
            else {  
               jQuery(jQuery(this).parents('form').get(0)).find(':checkbox').each(function(){  
                     if(this.checked){  
                        this.checked = false;  
                     }  
               });  
            }
      });
      
      
      // Intercept the remove click and show a dialog
      // re-show Add Media button on remove media event
      if (jQuery(".kaltura_field_thumb .remove_media").data("events")) {
         
         var kalturaRemoveHandler = jQuery(".kaltura_field_thumb .remove_media").data("events").click.pop();
         jQuery(".kaltura_field_thumb .remove_media").unbind("click", kalturaRemoveHandler);
         jQuery(".kaltura_field_thumb .remove_media").bind("custom_event", kalturaRemoveHandler.handler);
         jQuery(".kaltura_field_thumb .remove_media").click( function(event) {
               var message = Drupal.t("Are you sure? This can only be undone by cancelling the entire edit form losing any changes you may have made.");
               jQuery('<div>' + message + '<div/>').dialog({
                     resizable: false,
                     height:240,
                     width:420,
                     modal: true,
                     buttons: {
                        "Remove Media": function() {
                           jQuery( this ).dialog( "close" );
                           jQuery("#edit-field-video-und-0-button a").removeClass('hidden');   
                           jQuery("#edit-field-audio-und-0-button a").removeClass('hidden');
                           jQuery(".kaltura_field_thumb .remove_media").trigger("custom_event");  // execute the original kaltura supplied event
                        },
                        Cancel: function() {
                           jQuery( this ).dialog( "close" );
                        }
                     }
               } );
         } );
      }      
      
      // Handle the contribution wizard close event
      jQuery("#modalContent .close").click( function() {
            // if a thumbnail image tag exists, then we have media,  hide the add button
            if ( jQuery(".kaltura_field_thumb img").length ) { 
               jQuery("#edit-field-video-und-0-button a").addClass('hidden');   
               jQuery("#edit-field-audio-und-0-button a").addClass('hidden');   
            } 
      }
      );
   }  
}


