<?php
/**
 * @file
 * mediabase_config.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function mediabase_config_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr::fts_duration';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = '';
  $facet->facet = 'fts_duration';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '3',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => 1,
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'numeric_range',
  );
  $export['apachesolr@solr::fts_duration'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr:block:fts_duration';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = 'block';
  $facet->facet = 'fts_duration';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_slider',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'filtered_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['apachesolr@solr:block:fts_duration'] = $facet;

  return $export;
}
