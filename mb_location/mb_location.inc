<?php

/* CLASSES */
/**
 * Old MediabaseLocation Class used by chooser Widget in node edit form
 */
class MediabaseLocation
{
   // A parameterized factory method
   public function MediabaseLocation($location_id, $location_name = null)
   {
      $loc_struct = explode(':', $location_id);
      $this->location_type = $loc_struct[0];
      $this->location_id = $loc_struct[1];
      $this->location_name = $location_name;
      $this->location_vid = variable_get('mb_location_vid', null);
      if ( empty($this->location_id)  ) {
         throw new Exception(' Could not create a valid mb_location: no location id was provided 1');
      }
      if ( empty($this->location_type)  ) {
         throw new Exception(' Could not create a valid mb_location: no location id was provided 2');
      }
      if ( empty($this->location_vid) ) {
         throw new Exception(' Could not create a valid mb_location: no vocab id was provided 3');
      }
   }
   
   public function getTerm() {
      $query = new EntityFieldQuery();
      $query = $query
      ->entityCondition('entity_type', 'taxonomy_term')
      ->propertyCondition('vid', $this->location_vid);
      
      switch ( $this->location_type ) {
      case 'place-dictionary' :
      case 'fid' : // deliberate pass through
         $entities = $query
         ->fieldCondition('place_dictionary_id', 'value', $this->location_id, '=')
         ->execute();
         break;
      case 'tid' :
         $entities = $query
         ->propertyCondition('tid', $this->location_id)
         ->execute();
         break;
      }
      if ( empty($entities) ) {
         // import the from P. Dict. to taxonomy
         $term = $this->addTermToVocab();
      } else {
         $term = array_shift( $entities['taxonomy_term'] );
      }
      return $term;
   }
   
   private function addTermToVocab() {
      $term = new stdClass();
      $term->name = $this->location_name;
      $term->vid = $this->location_vid; 
      switch ( $this->location_type ) {
      case 'place-dictionary' :
      case 'fid' :
         if  (empty($this->name)) {
            $json = file_get_contents(variable_get('place_server', 'http://places.kmaps.virginia.edu') . "/features/$this->location_id.json");
            $place_data = json_decode($json);
            $term->name = $place_data->feature->names[0]->name;
         }
         $term->place_dictionary_id['und'][0]['value'] = $this->location_id;
         break;
      }
      taxonomy_term_save($term); 
      return $term;
   }
}
/**
 * New Kmap_place class on the model of the Kmap subject class (see kmap.inc in kmap_taxonomy/includes)
 * Used in VBO add place to multiple nodes
 * Created by ndg8f (Mar. 31, 2015)
 */
class Kmap_place {
	private $kmap_id = NULL;
	private $vid = NULL;
	private $term = NULL;
	private $lineage = NULL;
	private $name = NULL;
	   
   /**
   * Kmap constructor
   **/
   public function __construct($kmap_id) {
      $this->kmap_id = $kmap_id;
      $this->vid = variable_get('mb_location_vid', NULL);
			$this->setTerm();
			$this->name = $this->term->name;
   }
	 
	 private function setTerm() {
	 		$q = db_select('field_data_place_dictionary_id', 'fdpd')
				->fields('fdpd', array('entity_id'))
				->condition('entity_type','taxonomy_term')
				->condition('place_dictionary_id_value', $this->kmap_id)
				->execute();
			$res = $q->fetchAssoc();
			if($res) {
				$this->term = taxonomy_term_load($res['entity_id']);
			} else {
				$term = new stdClass();
				$term->vid = variable_get('mb_location_vid', NULL);
	   		$urlstr = variable_get('place_server', 'http://places.kmaps.virginia.edu') . '/features/%d.json';
	      $uri = sprintf($urlstr, $this->kmap_id);
			  $json = file_get_contents($uri);
			  $pdobj = json_decode($json);
				$term->name = $pdobj->feature->header;
				$term->place_dictionary_id[LANGUAGE_NONE][0]['value'] = $this->kmap_id;
				$isnew = taxonomy_term_save($term);
				//if($isnew == SAVED_NEW) {drupal_set_message("A new term has been created!");}
				$this->term = $term;
			}
	 }
	 
	 public function getTerm() {
	 		return $this->term;
	 }
	 
	 public function getName() {
	 		return $this->name;
	 }
}

/* FUNCTIONS */
function _mb_location_format_item( $item, $view_path ) {
	// Find term ID for location item
   $location_vid = variable_get('mb_location_vid', NULL);
   $query = new EntityFieldQuery();
   $query->entityCondition('entity_type', 'taxonomy_term')
   ->propertyCondition('tid', $item['tid'])
   ->propertyCondition('vid', $location_vid);
   $result = $query->execute();
   $entities = entity_load('taxonomy_term', array_keys($result['taxonomy_term']));
   $term = array_shift($entities);
   $output ="";
   $separator = ' > ';
   // If there is a term, look it up in place dictionary using terms place dict. id
   if ( !empty($term->place_dictionary_id['und'])) {
      $place_dict_id = $term->place_dictionary_id['und'][0]['value'];
   		$urlstr = variable_get('place_server', 'http://places.kmaps.virginia.edu') . '/features/%d.json';
      $uri = sprintf($urlstr, $place_dict_id);
		  $json = file_get_contents($uri);
		  $data = json_decode($json);
			$desc = (!empty($data->feature->summaries)) ? $data->feature->summaries[0]->content : '';
			if(empty($desc) && !empty($data->feature->captions)) { $desc = $data->feature->captions[0]->content; }
			if(empty($desc)) { $desc = t('<p>Currently no description available.</p>'); }
      $hierarchy = fetch_place_dict_details($place_dict_id);
      $parents = array();
      foreach ($hierarchy as $place_id => $place_name) {
         $path = str_replace('%place_id', $place_id, $view_path );
         array_unshift($parents, l($place_name, $path)); // . " ({$place_id})");
      }
			
			$place_url = variable_get('kmaps_site_places', 'http://badger.drupal-dev.shanti.virginia.edu/places');
			$path_format = variable_get('kmaps_site_path_format', '/%d/overview/nojs');
			$links = array(
				'Full Entry' => array('icon' => 'link-external', 'href' => $place_url . sprintf($path_format, $place_dict_id), 'external' => TRUE),
				'Related Audio-Video' => array('icon' => 'audio-video', 'href' => sprintf("list/places/%d", $place_dict_id)), //old url: "http://aardvark.drupal-dev.shanti.virginia.edu/places#id={$place_dict_id}&que=tab-audio-video"),
				//'Related Images' => array('icon' => 'photos', 'href' => variable_get('place_server', 'http://places.kmaps.virginia.edu') . '/features/' . $place_dict_id),
			);
			// Uses custom theme function "info_popover" defined in shanti_sarvaka theme
			// Once finalized that theme function needs to be duplicated in MB .module file to allow it to work with other themes.
			// In a way not dependent on Bootstrap
			$output = "<div class=\"popover\"><div class=\"name\">{$term->name}</div><div class=\"description\">$desc</div></div>";
			if(function_exists('shanti_sarvaka_info_popover')) {
			 	$output = theme('info_popover', array(
					 									'label' => $term->name, 
					 									'desc' => $desc, 
					 									'tree' => array(
					 											'label' => t('Places'), 
					 											'items' => $parents
														 ), 
														 'links' => $links)
												);
			}
   }
	 //$output .= '</div></div>';
   return $output;
}

function fetch_place_dict_details( $feature_id, $children = array() ) {
   $urlstr = variable_get('place_server', 'http://places.kmaps.virginia.edu') . '/features/%d.json';
   $uri = sprintf($urlstr, $feature_id);
   $json = file_get_contents($uri);
   $data = json_decode($json);
   if(isset($data->feature->names[0])) {
     $name = $data->feature->names[0]->name;
     // use pol.admin.hier as default = perspectives[0]
     $ancestors = array_reverse($data->feature->perspectives[0]->ancestors);
     foreach ($ancestors as $n => $ancestor) {
       $children[$ancestor->id] = $ancestor->header;
     }
   }
   return $children;
}

/**
* Convert WKT to a lat/long string
* if wkt is: GEOMETRYCOLLECTION(POINT(47.109375 58.077876267875))
* lat/log would be: 58.077876267875/47.109375  Yep, lat/long are reversed in wkt.
**/
function wkt_to_lat_long($wkt) {
   $pattern = '/.*POINT\((.*) (.*)\){2}/';
   $replacement = "$2/$1";
   $lat_long =  preg_replace($pattern, $replacement, $wkt);
   return $lat_long;
}

/**
 * _get_kmap_place
 */
function _get_kmap_place($place_id) {
	$place_server = variable_get('place_server', 'http://places.kmaps.virginia.edu');
	$place_service = $place_server . '/features/%place_id.json';
	$uri = str_replace('%place_id', $place_id, $place_service );
	$json = file_get_contents($uri);
	$data = json_decode($json);
	$place = $data->feature;
	return $place;
}

/**
* the location detail page menu callback
**/
function location_detail_page($place_id) {
   $output = '';
   $place_server = variable_get('place_server', 'http://places.kmaps.virginia.edu');
   $description_service = $place_server . '/features/%place_id/descriptions.json';
   $place_remote_link = $place_server . '/features/%place_id';
	 
   $place = _get_kmap_place($place_id);
   
   drupal_set_title(t('Resources for @place', array('@place' => $place->header)));
   // wrappers
   $div_wrapper = "<div>%s</div>";
   $h2_wrapper = "<h2>%s</h2>";
   $label_wrapper = "<span class='label'><strong>%s</strong></span>: ";
   $desc_wrapper = "<div class='pd-description'><span>%s</span><div>%s</div></div>";

   // names
   $pnames = array();
   foreach($place->names as $name) {
     array_push($pnames, $name->name);
   }
   $name_label = sprintf($label_wrapper,t('Place Name(s)'));
   $output .= sprintf($div_wrapper, $name_label . implode(', ', array_unique($pnames)));
   
   // feature types
   if ( isset( $place->feature_types ) ) {
      $ftypes = array();
      $feature_types = is_array($place->feature_types) ? $place->feature_types : array($place->feature_types);
      foreach ( $feature_types as $ftype) {
         $ftypes[] = $ftype->title;
      }
      $ftype_label = sprintf($label_wrapper,t('Feature Type(s)'));
      $output .= sprintf($div_wrapper, $ftype_label . implode(', ',$ftypes));
   }

   // description
   if ( isset( $place->description_count ) &&  $place->description_count > 0) {
      //$output .= sprintf($label_wrapper,t('Essays'));
      $output .= sprintf('<div><strong>%s</strong></div>', t('Essays'));

      $uri = str_replace('%place_id', $place_id, $description_service );
      $json = file_get_contents($uri);
      $data = json_decode($json);
      $descriptions =  is_array($data->descriptions->description) ? $data->descriptions->description : array($data->descriptions->description);
      foreach ( $descriptions as $description ) {
         $desc_title = !empty($description->title) ? $description->title : t('Description of @place', array('@place' => $place->header));
         /* $desc_label = sprintf($label_wrapper, $desc_title); */
         $auth = (isset($description->author->fullname)) ? '<p style="text-align: right; font-size: smaller;">(' . $description->author->fullname . ')</p>':'';
         $output .= sprintf($desc_wrapper, $desc_title, $description->content . $auth);
      }
      drupal_add_library('system', 'ui');
      drupal_add_library('system', 'ui.autocomplete');
      drupal_add_library('system', 'ui.position');
      drupal_add_library('system', 'ui.dialog');
      drupal_add_js(drupal_get_path('module', 'mb_location') .'/place-description-viewer.js', array('preprocess' => FALSE));
   }
   
   
   // kmap categories for place 
   if ( isset( $place->category_feature ) ) {
      $page_cats = array();
      $place_cats = is_array($place->category_feature) ? $place->category_feature : array ($place->category_feature);
      foreach ($place_cats as $cat) {
         $kmap_path = 'characteristic/%kmap_id/detail';
         $links[]  = l( $cat->root->title, str_replace('%kmap_id', $cat->root->id, $kmap_path)); 
         $links[]  = l( $cat->parent->title, str_replace('%kmap_id', $cat->parent->id, $kmap_path)); 
         $links[]  = l( $cat->category->title,  str_replace('%kmap_id', $cat->category->id, $kmap_path)); 
         $page_cats[] = implode(' > ', $links);
      }
      $kmaps = sprintf($label_wrapper,t('Characteristic(s)'));  
      $output .= sprintf($div_wrapper, $kmaps . implode(' <br/> ',$page_cats));
   }

   //external resources
   $output .= sprintf('<div><strong>%s</strong></div>', t('Shanti Place Dictionary Resources'));

   // map 
   $map_link = l(t('See interactive map of @place', array('@place' =>  $place->header)), $place->interactive_map_url, array('attributes' => array('target' => '_blank')));
   $output .= sprintf($div_wrapper, $map_link);
   
   // remote link
   $link = str_replace('%place_id',$place_id, $place_remote_link);
   $remote_link = l(t('See @place in the UVa place dictionary', array('@place' =>  $place->header)), $link, array('attributes' => array('target' => '_blank')));
   $output .= sprintf($div_wrapper, $remote_link);

   // wrap all output so far in a div
   $output = sprintf($div_wrapper, $output);
   
   // add a views view of the media for this location
   if ( module_exists('audio_video') ) {
      $output .= audio_video_render_place_view($place_id);
   }
   
   return $output;
}

// Services for fetching JSON from place kmaps app

function location_by_id($fid = NULL) {
  // general call is: features/{id}.json
  $place_server =  variable_get('place_server', 'http://places.kmaps.virginia.edu');
   if (empty($fid)) {
      $list_path = "/features/list.json";
   }
   else {
      $list_path = "/features/$fid.json";
   }

   $uri = trim($place_server . $list_path);
   $response = drupal_http_request($uri);
   
   drupal_add_http_header('content-type', 'application/javascript');
   $callback = $_GET['callback'];
   print "$callback($response->data)";
}

function location_by_name($fname = NULL) {
  // general call is features/by_name/{term}.json
  $place_server =  variable_get('place_server', 'http://places.kmaps.virginia.edu');
   if (empty($fname)) {
      $list_path = "/features/list.json";
   }
   else {
      $list_path = "/features/by_name/$fname.json";
   }

   $uri = trim($place_server . $list_path);
   $response = drupal_http_request($uri);
   
   drupal_add_http_header('content-type', 'application/javascript');
   $callback = $_GET['callback'];
   print "$callback($response->data)";
}