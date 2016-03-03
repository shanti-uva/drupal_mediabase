(function ($) {

    Drupal.behaviors.scrollingTranscript = {
        attach: function (context, settings) {
            $('[data-transcripts-role=transcript]', context)
                .addBack('[data-transcripts-role=transcript]')
                .once('scrolling-transcript')
                .each(function () {
                    var scroller = ScrollingTranscript.getUI($(this));
                    scroller.setContainer($(this).parents('.transcript-container'));
                    kWidget.addReadyCallback(function (playerId) {
                        //assuming HTML5 video API
			//var $iframe = $('.kaltura-embed iframe').first().contents();
                        //scroller.setVideo($('video,audio', $iframe).attr('preload', 'metadata')[0]);

                        //if using Kaltura API abstraction
                        var kaltura = {
                            playingThrough: true,
                            playerPlaying: false,

                            setVideo: function (vid) {
                                var init = false;

                                var jump = $.param.fragment();
                                if (jump != '') {
                                    var volume = vid.evaluate('{video.volume}');
                                    var $tcu = $('#' + jump.replace('tcu/', ''));

                                    vid.kBind('playerSeekEnd.init', function () {
                                        if (!init) {
                                            vid.sendNotification('changeVolume', volume);
                                            init = true;
                                        }
                                    });
                                    vid.kBind('mediaReady.init', function () {
                                        if (!init) {
                                            vid.sendNotification('changeVolume', 0);
                                            vid.sendNotification('doSeek', $tcu.attr('data-begin'));
                                        }
                                    });

                                    this.setOne($tcu);
                                    this.container.scrollTo($tcu);
                                }
                                else {
                                    var $first = this.starts[0].$item;
                                    this.container.scrollTo($first);
                                    this.sweetSpot = $first.position().top;
                                    init = true;
                                }

                                var that = this;

                                vid.kBind('playerPlayed', function () {
                                    that.playerPlaying = true;
                                    that.togglePlay('play');
                                    if (that.playingThrough) {
                                        vid.kBind('playerUpdatePlayhead.playThrough', function (now, id) {
                                            that.checkScroll(now);
                                        });
                                    }
                                });
                                vid.kBind('playerPaused', function () {
                                    that.playerPlaying = false;
                                    that.togglePlay('pause');
                                    that.unbindPlayListener(true);
                                });

                                this.player = vid;
                            },

                            playPause: function() {
                                this.player.sendNotification(this.playerPlaying ? 'doPause' : 'doPlay');
                            },

                            unbindPlayListener: function(newThrough) {
                                this.player.kUnbind(this.playingThrough ? '.playThrough' : '.playOne');
                                this.playingThrough = newThrough;
                            },

                            playOne: function ($tcu, noscroll, begin, end) {
                                var vid = this.player;
		
				//to support transcript editing where times could be modified
				if (begin === undefined) begin = parseFloat($tcu.attr('data-begin'));
                                if (end === undefined) end = parseFloat($tcu.attr('data-end'));

                                var seekStarted = false;
                                var seekEnded = false;
                                var pauseStarted = false;

                                this.unbindPlayListener(false);

                                vid.kBind('playerSeekEnd.playOne', function () {
                                    if (!seekEnded) {
                                        seekEnded = true;
                                    }
                                });

                                vid.kBind('playerUpdatePlayhead.playOne', function (now, id) {
                                    if (!seekStarted) {
                                        seekStarted = true;
                                        vid.sendNotification('doSeek', begin);
                                    }
                                    else if (!pauseStarted) {
                                        if (now > end) {
                                            pauseStarted = true;
                                            vid.sendNotification('doPause');
                                        }
                                    }
                                });

                                this.endAll();
                                if (this.resetSweet) {
                                    this.sweetSpot = $tcu.position().top;
                                }
                                this.setOne($tcu, noscroll);
                                this.playingThrough = false;

                                vid.sendNotification('doPlay');
                            },

			    setCurrentTime: function(seconds) {
				this.player.sendNotification('doSeek', seconds);
			    }
                        };
                        $.extend(scroller, kaltura);
                        scroller.setVideo(document.getElementById(playerId));

			Drupal.settings.scrollingTranscript[scroller.trid] = scroller;
                    });
                });
        }
    };

})(jQuery);
