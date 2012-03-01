<?php
/**
 * @file
 * mediabase_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mediabase_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:collections
  $menu_links['main-menu:collections'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'collections',
    'router_path' => 'collections',
    'link_title' => 'Collections',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
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
  t('Collections');
  t('Home');
  t('Members');
  t('My Stuff');


  return $menu_links;
}
