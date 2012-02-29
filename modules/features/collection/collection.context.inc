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
  $context->tag = '';
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
  $export['collection'] = $context;

  return $export;
}
