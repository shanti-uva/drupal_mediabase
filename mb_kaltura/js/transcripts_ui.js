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
                            pauser: null,

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

                                var $playpause = $('[data-transcripts-role=transcript-controls][data-transcripts-id=' + this.trid + '] .playpause');
                                vid.kBind('playerPlayed', function () {
                                    playerPlaying = true;
                                    $('.fa', $playpause).removeClass('fa-play').addClass('fa-pause');
                                });
                                vid.kBind('playerPaused', function () {
                                    playerPlaying = false;
                                    $('.fa', $playpause).removeClass('fa-pause').addClass('fa-play');
                                    vid.kUnbind('.playOne');
                                });
                                $playpause.click(function () {
                                    vid.sendNotification(playerPlaying ? 'doPause' : 'doPlay');
                                });

                                this.player = vid;
                            },

                            setOne: function ($tcu) {
                                this.one = $tcu;
                                this.one.addClass('playing');
                                this.playIndex = parseInt(this.one.attr('data-starts-index'));
                            },

                            playOne: function ($tcu) {
                                var vid = this.player;

                                var begin = $tcu.attr('data-begin');
                                var end = $tcu.attr('data-end');

                                var seekStarted = false;
                                var seekEnded = false;
                                var pauseStarted = false;

                                vid.kUnbind('.playOne');

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

                                vid.sendNotification('doPlay');

                                this.endAll();
                                this.setOne($tcu);
                                //window.location.hash = 'tcu/' + $item.attr('data-tcuid');
                            },

                            playFrom: function (from) {
                                if (this.player != null) {
                                    //behaves poorly if seek precedes play
                                    this.started = false;
                                    this.player.sendNotification('doPlay');
                                    this.player.sendNotification('doSeek', from);
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

