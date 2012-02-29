<?php
/**
 * @file
 * mediabase_config.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function mediabase_config_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'core_search';
  $searcher->label = 'Core Search';
  $searcher->description = 'Core Search';
  $searcher->search_path = 'search/descriptions';
  $searcher->page_title = 'Descriptions';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => '-bundle:sentence',
    ),
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_search_box' => TRUE,
    'apachesolr_search_per_page' => '10',
    'apachesolr_search_browse' => 'results',
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_allow_user_input' => 0,
  );
  $export['core_search'] = $searcher;

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'transcripts';
  $searcher->label = 'Transcripts';
  $searcher->description = '';
  $searcher->search_path = 'search/transcripts';
  $searcher->page_title = 'Transcripts';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:sentence',
    ),
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_per_page' => '10',
    'apachesolr_search_browse' => 'results',
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_allow_user_input' => 0,
  );
  $export['transcripts'] = $searcher;

  return $export;
}
