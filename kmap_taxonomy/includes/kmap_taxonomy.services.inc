<?php

/* 
*  SERVICES
*  Waiting for jsonp implementation in kmaps itself to deprecate these services
*/

/**
* Get root-level Kmaps categories from the live server
* TODO: Use the shanti server for all kmaps interactions
**/

/**
 * Changes made:
 *      1. kmap_server changed from  http://subjects.thlib.org to http://subjects.kmaps.virginia.edu (need also to change setting)
 *      2. paths below commented out and saved below new paths
 *      3. old code commented out and save below new code.
 *      
 */

function cmpChildNames($a, $b)
{
    return strcmp($a->header, $b->header);
}
 
function fetch_root_categories() {
   $root_service = variable_get('kmap_server', 'http://subjects.kmaps.virginia.edu') . '/features.xml';   //  was '/categories.xml'
   $options = &drupal_static(__FUNCTION__);
   if (! isset ($options) ) {
      $strXml = file_get_contents($root_service);
      $xml = simplexml_load_string($strXml);
      $options=array();
      if ($xml) {
         $kmaps=$xml->children();  
         foreach ($kmaps as $kmap) {
            $kmap_id = (string)$kmap['id'];
            $kmap_name = (string)$kmap['header'];
            $options[$kmap_id] = $kmap_name;
          /*
            $kmap_id = (string)$kmap->id;
            $kmap_name = (string)$kmap->title;
            $options[$kmap_id] = $kmap_name;
          */
         }
      }
   }
   return $options;
}

function kmaps_list($kmap_id = NULL) {
   $kmap_server =  variable_get('kmap_server', 'http://subjects.kmaps.virginia.edu');
   if (empty($kmap_id)) {
      $list_path = "/features/list.json";
      // $list_path = "/categories/list.json";
   }
   else {
      $list_path = "/features/$kmap_id/list.json";
      //$list_path = "/categories/$kmap_id/list.json";
   }

   $uri = trim($kmap_server . $list_path);
   $response = drupal_http_request($uri);
   
   drupal_add_http_header('content-type', 'application/javascript');
   $callback = $_GET['callback'];
   print "$callback($response->data)";
}

function kmaps_all($kmap_id = NULL) {
   $kmap_server =  variable_get('kmap_server', 'http://subjects.kmaps.virginia.edu');
   if (empty($kmap_id)) {
      $all_path = "/features/all.json";
      //$all_path = "/categories/all.json";
   }              
   else {
      $all_path = "/features/$kmap_id/all.json";         
      //$all_path = "/categories/$kmap_id/all.json";
   }
   $uri = trim($kmap_server . $all_path);
   $response = drupal_http_request($uri);
   
   // Sort Children list by Header
   $json = json_decode($response->data);
   if (isset($json->features)) { 
	   $features = $json->features;
	   usort($features, "cmpChildNames");
	   $json->features = $features;
	   $data = json_encode($json);
	   
	   drupal_add_http_header('content-type', 'application/javascript');
	   $callback = $_GET['callback'];
	   print "$callback($data)";
   } else {
   	  print '';
   }
}

function kmaps_categories($kmap_id = NULL) {
   $kmap_server =  variable_get('kmap_server', 'http://subjects.kmaps.virginia.edu');
   if (empty($kmap_id)) {
      $categories_path = "/features.json";
      //$categories_path = "/categories.json";
   }
   else {
      $categories_path = "/features/$kmap_id/children.json";
      //$categories_path = "/categories/$kmap_id/children.json";
   }
   $uri = trim($kmap_server . $categories_path);
   $response = drupal_http_request($uri);

   // Sort Children list by Header
   $json = json_decode($response->data);
   $features = $json->features;
   usort($features, "cmpChildNames");
   $json->features = $features;
   $data = json_encode($json);
   
   // Output JSONP
   $callback = $_GET['callback'];
   drupal_add_http_header('content-type', 'application/javascript');
   print "$callback($data)";
}



