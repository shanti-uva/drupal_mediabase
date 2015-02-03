Drupal.behaviors.mb_location={attach:function(context){
   jQuery('.pd-description').each(function(index) {
         var title = jQuery(this).children('span');
         title.remove();
         var content = jQuery(this).children('div');
         content.attr('title',title.text());
         content.css('display','none');
         jQuery(this).append( jQuery('<a href="#"/>').html(title.text()).click( function(event) {
               var wHeight = jQuery(window).height();
               var wWidth = jQuery(window).width();
               var dialogOptions = {
                  height: wHeight * .8,
                  width: wWidth * .8,
                  modal: true,
                  draggable: true,
                  resizable: true,
                  position: [wWidth * .1, wHeight * .1   ]
               }
               content.dialog(dialogOptions);
               event.preventDefault();
         }));
   });
}};
