<?php
/**
 * @file
 * mediabase_config.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function mediabase_config_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'mediabase';
  $environment->url = 'http://localhost:8983/solr/mediabase';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_show_facets' => 0,
  );
  $export['solr'] = $environment;

  return $export;
}
