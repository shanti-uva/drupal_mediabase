(function ($) {
	
	//  ndg8f 2013-11-14
	Drupal.behaviors.mbSolr={ 
		attach: function(context) {
			if(context == document) { 
				// Ajax Service Call for More Like This Related videos
				var data = $('div#related').data();
				if(data != null && typeof(data.nid) != 'undefined') { 
					var nid = data.nid;
					var ct = (typeof(data.count) != "undefined") ? '/' + data.count : '';
					var url = Drupal.settings.basePath + 'services/mlt/' + nid + ct;
					$('#related.mlt').load(url, function() { 
						$("#related.mlt .dev-query").remove();
						$("#related.mlt .shanti-gallery").addClass('clearfix');
						Drupal.attachBehaviors('#related.mlt');
					});
				}
		 }
	 	}
	};
} (jQuery));