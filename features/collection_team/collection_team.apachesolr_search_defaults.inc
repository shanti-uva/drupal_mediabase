<?php
/**
 * @file
 * collection_team.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function collection_team_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'collection_home';
  $searcher->label = 'Collection Home';
  $searcher->description = '';
  $searcher->search_path = 'collection/%';
  $searcher->page_title = 'Collection Home';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => 'im_collection_gid:%',
      1 => 'bundle:(audio OR video)',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 25,
    'apachesolr_search_spellcheck' => 0,
    'apachesolr_search_search_box' => 0,
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'results',
  );
  $export['collection_home'] = $searcher;

  return $export;
}
