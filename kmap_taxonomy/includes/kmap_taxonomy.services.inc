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
   $root_service = variable_get('kmap_server', 'http://tmb.thlib.org') . '/categories.xml';
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
   $kmap_server =  variable_get('kmap_server', 'http://tmb.thlib.org');
   if (empty($kmap_id)) {
      $list_path = "/categories/list.json";
   }
   else {
      $list_path = "/categories/$kmap_id/list.json";
   }

   $uri = trim($kmap_server . $list_path);
   $response = drupal_http_request($uri);
   
   drupal_add_http_header('content-type', 'application/javascript');
   $callback = $_GET['callback'];
   print "$callback($response->data)";
}

function kmaps_all($kmap_id = NULL) {
   $kmap_server =  variable_get('kmap_server', 'http://tmb.thlib.org');
   if (empty($kmap_id)) {
      $all_path = "/categories/all.json";
   }              
   else {         
      $all_path = "/categories/$kmap_id/all.json";
   }
   $uri = trim($kmap_server . $all_path);
   $response = drupal_http_request($uri);

   drupal_add_http_header('content-type', 'application/javascript');
   $callback = $_GET['callback'];
   print "$callback($response->data)";
}

function kmaps_categories($kmap_id) {
   $kmap_server =  variable_get('kmap_server', 'http://tmb.thlib.org');
   if (empty($kmap_id)) {
      $categories_path = "/categories.json";
   }
   else {
      $categories_path = "/categories/$kmap_id/children.json";
   }
   
   $uri = trim($kmap_server . $categories_path);
   $response = drupal_http_request($uri);

   drupal_add_http_header('content-type', 'application/javascript');
   $callback = $_GET['callback'];
   print "$callback($response->data)";
}


