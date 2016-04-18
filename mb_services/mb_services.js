(function ($) {
    Drupal.behaviors.mb_services = {
        attach: function (context, settings) {
          if(context == document ) {
		    		$(document).ready(function() {
		    			var base = 'http://audio-video.shanti.virginia.edu/';
		    			var myhost = window.location.host;
		    			if(myhost.indexOf('-dev') > -1) { base = 'http://audio-video.drupal-dev.shanti.virginia.edu/';}
		    			if(myhost.indexOf('-test') > -1) { base = 'http://audio-video.drupal-test.shanti.virginia.edu/';}
			    		// Ajax Service Call for More Like This Related videos
							var data = $("div#related").data();
							if(data != null && typeof(data.nid) != "undefined") { 
								var nid = data.nid;
								var ct = (typeof(data.count) != "undefined") ? "/" + data.count : "";
								var url = base + "services/mlt/" + nid + ct;
								$("#related.mlt").load(url, function() { 
									$("#related.mlt .dev-query").remove();
									$("#related.mlt .shanti-gallery").addClass("clearfix");
									Drupal.attachBehaviors("#related.mlt");
								});
							}
		    		});
		    	}
       }
    };
})(jQuery);