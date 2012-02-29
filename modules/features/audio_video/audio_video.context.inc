<?php
/**
 * @file
 * audio_video.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function audio_video_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Home Page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_media-block' => array(
          'module' => 'views',
          'delta' => 'recent_media-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'mb_structure-lets_get_started' => array(
          'module' => 'mb_structure',
          'delta' => 'lets_get_started',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home Page');
  $export['homepage'] = $context;

  return $export;
}
