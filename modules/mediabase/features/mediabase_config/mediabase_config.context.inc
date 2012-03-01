<?php
/**
 * @file
 * mediabase_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mediabase_config_context_default_contexts() {
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
      ),
    ),
    'breadcrumb' => 'collections',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collection');
  $export['collection'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Sitewide Context';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'current_search-standard' => array(
          'module' => 'current_search',
          'delta' => 'standard',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu' => array(
          'module' => 'facetapi',
          'delta' => 'GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'facetapi-vmcS027hiHs3sdrBCJCW0d3dlAQSzEb0' => array(
          'module' => 'facetapi',
          'delta' => 'vmcS027hiHs3sdrBCJCW0d3dlAQSzEb0',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide Context');
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global_minus_search_results';
  $context->description = 'All pages except for admin and search results';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~search/*' => '~search/*',
        '~transcripts/*' => '~transcripts/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-21',
        ),
        'transcripts-transcript_search' => array(
          'module' => 'transcripts',
          'delta' => 'transcript_search',
          'region' => 'sidebar_second',
          'weight' => '-20',
        ),
        'shib_auth-login_box' => array(
          'module' => 'shib_auth',
          'delta' => 'login_box',
          'region' => 'sidebar_second',
          'weight' => '-19',
        ),
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'sidebar_second',
          'weight' => '-18',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages except for admin and search results');
  $export['global_minus_search_results'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_results';
  $context->description = 'Search Results';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'apachesolr_search-sort' => array(
          'module' => 'apachesolr_search',
          'delta' => 'sort',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search Results');
  $export['search_results'] = $context;

  return $export;
}
