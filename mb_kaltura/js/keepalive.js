Drupal.behaviors.mb_kaltura_keepalive = {
   attach: function(context) {
      // Credit for recursiness: http://www.erichynds.com/javascript/a-recursive-settimeout-pattern/
      (function keepalive(){
            minutes = 1
            setTimeout(function(){
                  jQuery.ajax({
                        url: Drupal.settings.basePath + 'mb_kaltura/upload-keepalive',
                        success: function( response ){
                           // log the response to the console for debugging dropped sessions
                           console.log(response)
                           keepalive(); // recurse
                        },
                        error: function(){
                           console.log('arguments', arguments)
                           
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
