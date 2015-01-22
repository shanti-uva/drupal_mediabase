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
				setTimeout(function() {
					$('.block-facetapi').each(function() { 
							var hgt = $(this).parent().height(); 
							$(this).height(hgt); 
							$(this).children('.content').height(hgt); 
					});
				}, 1000);
		 }
	 	}
	};
	
	// Called by ajax_command_invoke in mb_solr.module from mb_solr_facets_ajax() function
	$.fn.updateFacetTree = function(data) {
		var fsel = Drupal.settings.mediabase.facets;
		var ifsfids = []; //fsel.split(":").pop();
		var fcts = fsel.split("::");
		for(var n in fcts) {
			pts = fcts[n].split(":");
			if (pts[0] == "im_field_subcollection") {
				ifsfids.push(parseInt(pts[1]));
			}
		}
		
		for(var fname in Drupal.settings.mediabase.facetcounts) {
			var flabel = fname.split('_').pop();
			if(flabel == 'characteristic') {flabel = 'subject';}
			var tree = $('.facet-' + flabel + ' .content').fancytree('getTree');
			if(typeof(tree) != 'undefined' && typeof(tree.widget) != "undefined") {
				tree.clearFilter();
				var fcounts = Drupal.settings.mediabase.facetcounts[fname];
				var root = tree.getRootNode();
				var res = root.visit(function(node) { 
					node.setSelected(false);
					node.data.count = fcounts[node.data.fid];
					return true;
				});
				if(ifsfids.length > 0) {
				  var ct = tree.filterNodes(function(node) { 
						var showit = fcounts.hasOwnProperty(node.data.fid);
						if(ifsfids.indexOf(node.data.fid) > -1) {
							node.setSelected(true);
						}
						return showit;
					});
				} else {
					var ct = tree.filterNodes(function(node) { 
						var parents = node.getParentList();
						var showit = (parents.length > 1) ? false : true;
						return showit;
					});
				}
			// Unable to find a tree
			} else {
				console.info("No tree found to filter: " + flabel);
			}
		}
		
		Drupal.settings.mediabase.facetcounts = []; // reset facet counts so they don't get merged between calls
	};
	
} (jQuery));