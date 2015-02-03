<?php
/**
 * @file
 * homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
}
