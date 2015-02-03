<?php
/**
 * @file
 * homepage.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function homepage_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'homepage';
  $searcher->label = 'Homepage';
  $searcher->description = '';
  $searcher->search_path = 'homepage';
  $searcher->page_title = 'Audio-Video';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:(video OR audio)',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 60,
    'apachesolr_search_spellcheck' => 0,
    'apachesolr_search_search_box' => 0,
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'results',
  );
  $export['homepage'] = $searcher;

  return $export;
}
