<?php
/**
 * @file
 * collection_team.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function collection_team_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'collection';
  $context->description = 'Collection and Team Home pages';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'collection' => 'collection',
        'team' => 'team',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'collection/*' => 'collection/*',
        'team/*' => 'team/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-collection_media-block' => array(
          'module' => 'views',
          'delta' => 'collection_media-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'mb_structure-collection_detail' => array(
          'module' => 'mb_structure',
          'delta' => 'collection_detail',
          'region' => 'sidebar_second',
          'weight' => '-26',
        ),
        'views-collection_team_list-block_1' => array(
          'module' => 'views',
          'delta' => 'collection_team_list-block_1',
          'region' => 'sidebar_second',
          'weight' => '-25',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collection and Team Home pages');
  $export['collection'] = $context;

  return $export;
}
