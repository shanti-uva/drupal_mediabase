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
						Drupal.behaviors.shantiSarvakaGalleryInit.attach($("#related.mlt"));
					});
				}
		 }
		 /* Old Code for loading Tree in Sidebar/search flyout
		 makeTree();
		 
		 function makeTree() { 
		 	return;
				var div = jQuery('.facetapi-mb-solr-facet-tree').parent();
				// remove drupal divs around children lists
				jQuery(div).find('div.item-list ul').each(function(i) {
					jQuery(this).unwrap();
				});
				var openels = [];
				
				// Deal with Active Facets and Set Open Elements
				if(jQuery('a.facetapi-active').length > 0) { 
				// Put text inside active a tags for jstree
					jQuery('a.facetapi-active').each(function(i) {
						var $this = jQuery(this);
						var label = $this.parent().contents().eq(1).text();
						$this.append(label);
						$this.attr('title', $this.find('span.element-invisible').text());
						var id = 'startopen' + i;
						$this.parent('li').attr('id', id);
						openels.push('#' + id);
					});
				} else {
					// set open element
					jQuery(div).find('ul:eq(0) > li:eq(0)').attr('id', 'startopen1').find('ul:eq(0) > li:eq(0)').attr('id', 'startopen2');
					openels = [ '#startopen1', '#startopen2' ];
				}
				
				// Create the JSTree and Bind to the jstree onload event
				div.bind("loaded.jstree", function (event, data) {
							// Deal with Long Facet Labels
							setTimeout( function() {
								var out = [];
								jQuery('.jstree li a').each(function(i) {
										$this = jQuery(this);
										out.push({'name': $this.text(),'test': $this.context.clientWidth, 'width:': $this.width(),  'outerWidth': $this.outerWidth(), 'innerWidth': $this.innerWidth(), 'el': $this});
										if($this.outerWidth() > 300) {
											var mytext = $this.text();
											var pts = mytext.split(')Apply'); // Remove the Apply ... hidden text
											// Add a <br/> into string to wrap it at first space before index 45
											mytext = pts[0] + ')';
											var ind = mytext.lastIndexOf(' ', 45);
											mytext = jQuery('<div>' + jQuery.trim(mytext.slice(0, ind)) + ' <br/> ' + jQuery.trim(mytext.slice(ind)) + '</div>');
											$this.text('').prepend(mytext.html());
										}
								});
							}, 500);
					// bind events to the tree being loaded
					}).jstree({
						// the `plugins` array allows you to configure the active plugins on this instance
					"plugins" : ["themes","html_data"],
					// each plugin you have included can have its own config object
					"core" : { "initially_open" : openels }, 
					// it makes sense to configure a plugin only if overriding the defaults
					"themes" : { "theme" : "classic", "icons" : false }
				});
		  }*/
	 	}
	};
} (jQuery));