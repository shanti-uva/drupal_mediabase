<?php

/**
 * Organic groups integration for Spaces.
 */
class mb_space_og extends space_og {
  var $group = NULL;

  /**
   * Constructor.
   */
  function __construct($type, $id = NULL) {
    parent::__construct($type, $id);
    // Extend spaces object with og entity.
    $this->og = og_get_group('node', $this->id);
    $this->menu_object = menu_get_object();
  }
  
  /**
  * Override of access_space().
  */
  function access_space($account = NULL) {
     global $user;
     $account = isset($account) ? $account : $user;
     //dpm($account, "account");
     $allow =  parent::access_space($account);
     $uva_allow = isset($this->menu_object->{OG_CONTENT_ACCESS_FIELD}) &&
     $this->menu_object->{OG_CONTENT_ACCESS_FIELD}[LANGUAGE_NONE][0]['value'] == OG_CONTENT_ACCESS_UVA &&
     in_array('authenticated user', $account->roles);
     return $allow || $uva_allow;
  }
}
