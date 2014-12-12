<?php
/**
 * @file
 * my_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function my_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_my-media:my-content
  $menu_links['user-menu_my-media:my-content'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-content',
    'router_path' => 'my-content',
    'link_title' => 'My Media',
    'options' => array(
      'identifier' => 'user-menu_my-media:my-content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Media');


  return $menu_links;
}
