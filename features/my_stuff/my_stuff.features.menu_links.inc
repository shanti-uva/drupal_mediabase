<?php
/**
 * @file
 * my_stuff.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function my_stuff_menu_default_menu_links() {
  $menu_links = array();

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
      'purl' => 'disabled',
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:my-stuff/collections
  $menu_links['main-menu:my-stuff/collections'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-stuff/collections',
    'router_path' => 'my-stuff/collections',
    'link_title' => 'My Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'my-stuff',
  );
  // Exported menu link: main-menu:my-stuff/memberships
  $menu_links['main-menu:my-stuff/memberships'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-stuff/memberships',
    'router_path' => 'my-stuff/memberships',
    'link_title' => 'My Memberships',
    'options' => array(),
    'module' => 'system',
    'hidden' => '-1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'my-stuff',
  );
  // Exported menu link: main-menu:my-stuff/workflow
  $menu_links['main-menu:my-stuff/workflow'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-stuff/workflow',
    'router_path' => 'my-stuff/workflow',
    'link_title' => 'My Workflow',
    'options' => array(),
    'module' => 'system',
    'hidden' => '-1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'my-stuff',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Collections');
  t('My Memberships');
  t('My Stuff');
  t('My Workflow');


  return $menu_links;
}
