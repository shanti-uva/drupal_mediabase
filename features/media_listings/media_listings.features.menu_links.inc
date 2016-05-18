<?php
/**
 * @file
 * media_listings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function media_listings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_my-collections:mycontent/collections.
  $menu_links['user-menu_my-collections:mycontent/collections'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'mycontent/collections',
    'router_path' => 'mycontent/collections',
    'link_title' => 'My Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_my-collections:mycontent/collections',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_my-content:mycontent/media',
  );
  // Exported menu link: user-menu_my-content:mycontent/media.
  $menu_links['user-menu_my-content:mycontent/media'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'mycontent/media',
    'router_path' => 'mycontent/media',
    'link_title' => 'My Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_my-content:mycontent/media',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_my-media:mycontent/media.
  $menu_links['user-menu_my-media:mycontent/media'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'mycontent/media',
    'router_path' => 'mycontent/media',
    'link_title' => 'My Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_my-media:mycontent/media',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_my-content:mycontent/media',
  );
  // Exported menu link: user-menu_my-memberships:mycontent/memberships.
  $menu_links['user-menu_my-memberships:mycontent/memberships'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'mycontent/memberships',
    'router_path' => 'mycontent/memberships',
    'link_title' => 'My Memberships',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_my-memberships:mycontent/memberships',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_my-content:mycontent/media',
  );
  // Exported menu link: user-menu_my-workflow:mycontent/workflow.
  $menu_links['user-menu_my-workflow:mycontent/workflow'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'mycontent/workflow',
    'router_path' => 'mycontent/workflow',
    'link_title' => 'My Workflow',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_my-workflow:mycontent/workflow',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_my-content:mycontent/media',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('My Collections');
  t('My Content');
  t('My Media');
  t('My Memberships');
  t('My Workflow');

  return $menu_links;
}
