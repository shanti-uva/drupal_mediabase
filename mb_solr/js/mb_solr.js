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
	
	// Called by ajax_command_invoke in mb_solr.module from mb_solr_facets_ajax() function
	$.fn.updateFacetTree = function(data) {
		var fsel = Drupal.settings.mediabase.facets;
		console.log(fsel + " - facet selected");
		for(var fname in Drupal.settings.mediabase.facetcounts) {
			var tree = jQuery('.facet-' + fname).fancytree('getTree');
			tree.clearFilter();
			var fcounts = Drupal.settings.mediabase.facetcounts[fname];
			var root = tree.getRootNode();
			root.visit(function(node) {
				if(fcounts.hasOwnProperty(node.data.fid)) {
					node.data.count = fcounts[node.data.fid];
					if(fsel.indexOf(':' + node.data.fid) > -1) { node.setSelected(); }
					node.setExpanded();
				}
		  });
		  var ct = tree.filterNodes(function(node) { 
				var showit = fcounts.hasOwnProperty(node.data.fid);
				return showit;
			});
		}
		
	};
	
} (jQuery));