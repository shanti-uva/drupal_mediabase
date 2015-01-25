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
			                        var jump = $.param.fragment();
			                        if (jump != '') {
							var volume = player.evaluate('{video.volume}');
							var $tcu = $('#' + jump.replace('tcu/', ''));
							player.kBind('playerSeekEnd', function() {
								player.sendNotification('changeVolume', volume);
								that.container.scrollTo($tcu);
								$tcu.addClass('playing');
							});
							player.kBind('mediaReady', function() {
								player.sendNotification('changeVolume', 0);
								player.sendNotification('doSeek', $tcu.attr('data-begin'));
							});
			                        }
					},

                			playFrom: function(seconds) {
             					if (player != null) {
							//pause first
							player.sendNotification('doPause');
							//behaves poorly if seek precedes play
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

