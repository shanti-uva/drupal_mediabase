<?php

/* 
*  SERVICES
*  Waiting for jsonp implementation in kmaps itself to deprecate these services
*/

/**
* Get root-level Kmaps categories from the live server
* TODO: Use the shanti server for all kmaps interactions
**/
function fetch_root_categories() {
   $root_service = 'http://tmb.thlib.org/categories.xml';
   $options = &drupal_static(__FUNCTION__);
   if (! isset ($options) ) {
      $strXml = file_get_contents($root_service);
      $xml = simplexml_load_string($strXml);
      $options=array();
      if ($xml) {
         $kmaps=$xml->children();  
         foreach ($kmaps as $kmap) {
            $kmap_id = (string)$kmap->id;
            $kmap_name = (string)$kmap->title;
            $options[$kmap_id] = $kmap_name;
         }
      }
   }
   return $options;
}

function kmaps_list($kmap_id = NULL) {
   if (empty($kmap_id)) {
      $list_url = "http://tmb.thlib.org/categories/list.json";
   }
   else {
      $list_url = "http://tmb.thlib.org/categories/$kmap_id/list.json";
   }
   $response = drupal_http_request($list_url);
   drupal_add_http_header('content-type', 'application/javascript');
   $callback = $_GET['callback'];
   print "$callback($response->data)";
}

function kmaps_all($kmap_id = NULL) {
   if (empty($kmap_id)) {
      $all_url = "http://tmb.thlib.org/categories/all.json";
   }
   else {
      $all_url = "http://tmb.thlib.org/categories/$kmap_id/all.json";
   }
   $response = drupal_http_request($all_url);
   drupal_add_http_header('content-type', 'application/javascript');
   $callback = $_GET['callback'];
   print "$callback($response->data)";
}

function kmaps_categories($kmap_id) {
   if (empty($kmap_id)) {
      $categories_url = "http://tmb.thlib.org/categories.json";
   }
   else {
      $categories_url = "http://tmb.thlib.org/categories/$kmap_id/children.json";
   }
   $response = drupal_http_request($categories_url);
   drupal_add_http_header('content-type', 'application/javascript');
   $callback = $_GET['callback'];
   print "$callback($response->data)";
}

