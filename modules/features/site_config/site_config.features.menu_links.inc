<?php
/**
 * @file
 * site_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function site_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:members
  $menu_links['main-menu:members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'members',
    'router_path' => 'members',
    'link_title' => 'Members',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:my-stuff
  $menu_links['main-menu:my-stuff'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-stuff',
    'router_path' => 'my-stuff',
    'link_title' => 'My Stuff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Members');
  t('My Stuff');


  return $menu_links;
}
