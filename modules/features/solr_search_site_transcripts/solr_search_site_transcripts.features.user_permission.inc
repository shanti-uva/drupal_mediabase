<?php
/**
 * @file
 * solr_search_site_transcripts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function solr_search_site_transcripts_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer bubtitles
  $permissions['administer bubtitles'] = array(
    'name' => 'administer bubtitles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bubtitles',
  );

  // Exported permission: administer facets
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(),
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer transcripts
  $permissions['administer transcripts'] = array(
    'name' => 'administer transcripts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'transcripts',
  );

  // Exported permission: move bubbles
  $permissions['move bubbles'] = array(
    'name' => 'move bubbles',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'bubtitles',
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

/*   // Exported permission: view profile default
  $permissions['view profile default'] = array(
    'name' => 'view profile default',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'transcripts',
  ); */

  return $permissions;
}
