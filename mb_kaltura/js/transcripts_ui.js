(function ($) {

    Drupal.behaviors.scrollingTranscript = {
        attach: function (context, settings) {
            $('[data-transcripts-role=transcript]', context)
                .once('scrolling-transcript')
                .each(function () {
                    var scroller = ScrollingTranscript.getUI($(this));
                    scroller.setContainer($(this).parents('.transcript-container'));
                    kWidget.addReadyCallback(function (playerId) {
                        //if using HTML 5 video API
                        //var $iframe = $('.kaltura-embed iframe').first().contents();
                        //scroller.setVideo($('video,audio', $iframe).attr('preload', 'metadata')[0]);

                        //if using Kaltura API abstraction
                        var kaltura = {
                            playingThrough: true,

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

                                    this.container.scrollTo($tcu);
                                    this.setOne($tcu);
                                }
                                else {
                                    init = true;
                                }

                                var playerPlaying = false;
                                var $playpause = $('[data-transcripts-role=transcript-controls][data-transcripts-id=' + this.trid + '] .playpause');
                                var that = this;

                                vid.kBind('playerPlayed', function () {
                                    playerPlaying = true;
                                    $('.fa', $playpause).removeClass('fa-play').addClass('fa-pause');

                                    if (that.playingThrough) {
                                        vid.kBind('playerUpdatePlayhead.playThrough', function (now, id) {
                                            that.checkScroll(now);
                                        });
                                    }
                                });
                                vid.kBind('playerPaused', function () {
                                    playerPlaying = false;
                                    $('.fa', $playpause).removeClass('fa-pause').addClass('fa-play');
                                    that.unbindPlayListener(true);
                                });
                                $playpause.click(function () {
                                    vid.sendNotification(playerPlaying ? 'doPause' : 'doPlay');
                                });

                                this.player = vid;
                            },

                            unbindPlayListener: function(newThrough) {
                                this.player.kUnbind(this.playingThrough ? '.playThrough' : '.playOne');
                                this.playingThrough = newThrough;
                            },

                            setOne: function ($tcu) {
                                this.one = $tcu;
                                this.playIndex = parseInt(this.one.attr('data-starts-index'));
                                this.startPlay($tcu); //scroll to sweet spot
                            },

                            playOne: function ($tcu) {
                                var vid = this.player;

                                var begin = parseFloat($tcu.attr('data-begin'));
                                var end = parseFloat($tcu.attr('data-end'));

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
                                this.setOne($tcu);
                                this.playingThrough = false;

                                vid.sendNotification('doPlay');
                            }
                        };
                        $.extend(scroller, kaltura);
                        scroller.setVideo(document.getElementById(playerId));
                    });
                });
        }
    }

})(jQuery);