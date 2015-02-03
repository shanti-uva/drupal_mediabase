<?php
/**
 * @file
 * homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
}
