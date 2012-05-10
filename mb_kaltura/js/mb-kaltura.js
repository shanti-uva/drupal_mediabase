/**
* See: http://www.kaltura.org/common-configuration-saas
**/

Drupal.behaviors.mediabase = {
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
         //console.log('iFrameId', iFrameId)
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
   }
}
      

