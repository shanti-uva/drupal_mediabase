<?php
/**
 * @file
 * collection.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function collection_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'collection';
  $context->description = 'Collection';
  $context->tag = 'collection';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'collection' => 'collection',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-collection_content-block_1' => array(
          'module' => 'views',
          'delta' => 'collection_content-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'mb_structure-collection_detail' => array(
          'module' => 'mb_structure',
          'delta' => 'collection_detail',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'breadcrumb' => 'collections',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collection');
  t('collection');
  $export['collection'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'collections';
  $context->description = 'Collection Listing';
  $context->tag = 'collection';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'collections:page' => 'collections:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mb_structure-lets_get_started' => array(
          'module' => 'mb_structure',
          'delta' => 'lets_get_started',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collection Listing');
  t('collection');
  $export['collections'] = $context;

  return $export;
}
