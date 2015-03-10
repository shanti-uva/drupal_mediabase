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
      $allow_og =  parent::access_space($account);
      $allow_uva = $this->allow_uva($account);
      $allow_archive_admin = $this->allow_archive_admin($account);
      return $allow_og || $allow_uva || $allow_archive_admin;
   }
	
	
	function allow_uva($account = NULL) {
	   if ( $account
	      && isset($this->menu_object->{OG_CONTENT_ACCESS_FIELD}) 
	      && $this->menu_object->{OG_CONTENT_ACCESS_FIELD}[LANGUAGE_NONE][0]['value'] == OG_CONTENT_ACCESS_UVA 
	      && in_array('authenticated user', $account->roles)
	      )
	   {
	      return TRUE;
	   }
	}
	
	function allow_archive_admin($account = NULL) {
	   $grants = mb_access_node_grants($account, 'view');
	   if ( 
	      $account
	      && isset($this->menu_object->{OG_GROUP_AUDIENCE_FIELD})
	      )
	   {
	      return TRUE;
	   }
	}
}
