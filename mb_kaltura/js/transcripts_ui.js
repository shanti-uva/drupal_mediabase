(function ($) {

    Drupal.behaviors.scrollingTranscript = {
        attach: function (context, settings) {
            $('[data-transcripts-role=transcript]', context)
                .once('scrolling-transcript')
                .each(function () {
			var scroller = ScrollingTranscript.getUI($(this));
			scroller.setContainer($(this).parents('.transcript-container'));
			kWidget.addReadyCallback(function(playerId) {
				//if using HTML 5 video API
                                //var $iframe = $('.kaltura-embed iframe').first().contents();
				//scroller.setVideo($('video,audio', $iframe).attr('preload', 'metadata')[0]);

				//if using Kaltura API abstraction
				var kaltura = {
					playing: false,

		                	setVideo: function(element) {
              			  	    	var that = this;
                			    	player = element;
					    	player.kBind('playerPlayed', function() {
							playing = true;
							that.checkNow(player.evaluate('{video.player.currentTime}'));
						});
                			        player.kBind('playerPaused', function() {
                			                playing = false;
                			        });
						player.kBind('playerUpdatePlayhead', function(now, id) {
							if (playing && that.one != null && now > that.one.attr('data-end')) {
								player.sendNotification('doPause');
								now = player.evaluate('{video.player.currentTime}');
								that.lastNow = now;
							}
							if (playing || Math.abs(that.lastNow - now) > .2) {
								that.checkScroll(now);
							}
						});
					},

                			playFrom: function(seconds) {
             					if (player != null) {
							//play before seek, not sure why
							player.sendNotification('doPlay');
                				        player.sendNotification('doSeek', seconds);
              					}
                			},
				};
				$.extend(scroller, kaltura);
				scroller.setVideo(document.getElementById(playerId));
			});
                });
        }
    }

})(jQuery);

