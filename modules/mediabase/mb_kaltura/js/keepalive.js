Drupal.behaviors.mediabaseKeepalive = {
   attach: function(context) {
      // Credit for recursiness: http://www.erichynds.com/javascript/a-recursive-settimeout-pattern/
      (function keepalive(){
            minutes = 10
            setTimeout(function(){
                  jQuery.ajax({
                        url: Drupal.settings.basePath + 'upload-keepalive',
                        success: function( response ){
                           // do something with the response
                           
                           keepalive(); // recurse
                        },
                        error: function(){
                           // do some error handling.  you
                           // should probably adjust the timeout
                           // here.
                           
                           keepalive(); // recurse, if you'd like.
                        }
                  });
            }, 1000 * 60 * minutes);
      })();
   }
}
