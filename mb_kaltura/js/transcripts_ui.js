(function ($) {

    Drupal.behaviors.scrollingTranscript = {
        attach: function (context, settings) {
            $('[data-transcripts-role=transcript]', context)
                .once('scrolling-transcript')
                .each(function () {
			var $scroller = ScrollingTranscript.getUI($(this));
			kWidget.addReadyCallback(function(playerId) {
                                var $iframe = $('.kaltura-embed iframe').first().contents();
				$scroller.setVideo($('video,audio', $iframe).attr('preload', 'metadata')[0]);
			});
                });
        }
    }

})(jQuery);

