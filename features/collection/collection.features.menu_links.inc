<?php
/**
 * @file
 * collection.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function collection_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:collections
  $menu_links['main-menu:collections'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'collections',
    'router_path' => 'collections',
    'link_title' => 'Collections',
    'options' => array(
      'purl' => 'disabled',
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Collections');


  return $menu_links;
}
