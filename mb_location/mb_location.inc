<?php

/* CLASSES */
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
         throw new Exception(' Could not create a valid mb_location: no location id was provided');
      }
      if ( empty($this->location_type)  ) {
         throw new Exception(' Could not create a valid mb_location: no location id was provided');
      }
      if ( empty($this->location_vid) ) {
         throw new Exception(' Could not create a valid mb_location: no vocab id was provided');
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
            $json = file_get_contents("http://places.thlib.org/features/by_fid/$this->location_id.json");
            $place_data = json_decode($json);
            $term->name = array_shift($place_data->features->feature->name);
         }
         $term->place_dictionary_id['und'][0]['value'] = $this->location_id;
         break;
      }
      taxonomy_term_save($term); 
      return $term;
   }
}

/* FUNCTIONS */
function _mb_location_format_item( $item, $view_path ) {
   $location_vid = variable_get('mb_location_vid', NULL);
   $query = new EntityFieldQuery();
   $query->entityCondition('entity_type', 'taxonomy_term')
   ->propertyCondition('tid', $item['tid'])
   ->propertyCondition('vid', $location_vid);
   $result = $query->execute();
   $entities = entity_load('taxonomy_term', array_keys($result['taxonomy_term']));
   $term = array_shift($entities);
   $output = '';
   
   //place dictionary
   if ( !empty($term->place_dictionary_id['und'])) {
      $place_dict_id = $term->place_dictionary_id['und'][0]['value'];
      $delim = ! empty ( $output ) ? $separator : '';
      $hierarchy = fetch_place_dict_details($place_dict_id);
      $links = array();
      foreach ($hierarchy as $place_id => $place_name) {
         $path = str_replace('%place_id', $place_id, $view_path );
         $links[] = l($place_name, $path);
      }
      $rendered_place = implode(", ", $links);
      $output .= ! empty ( $rendered_place ) ? $delim . $rendered_place : '';
   }
   return $output;
}

function fetch_place_dict_details( $feature_id, $children = array() ) {
   $uri = sprintf('http://places.thlib.org/features/by_fid/%d.json', $feature_id);
   $json = file_get_contents($uri);
   $data = json_decode($json);
   $name = $data->features->feature->name[0];
   $children[$feature_id] = $name;
   if ( isset($data->features->feature->parent_relation->feature) ) {
      $parent_fid = $data->features->feature->parent_relation->feature->fid;
      return fetch_place_dict_details($parent_fid, $children);
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
* the location detail page menu callback
**/
function location_detail_page($place_id) {
   $output = '';
   $place_service = 'http://places.thlib.org/features/by_fid/%place_id.json';
   $place_remote_link = 'http://places.thlib.org/features/%place_id';
   $uri = str_replace('%place_id', $place_id, $place_service );
   $json = file_get_contents($uri);
   $data = json_decode($json);
   $place = $data->features->feature;
   
   drupal_set_title(t('@place Detail Page', array('@place' => $place->header)));
   // wrappers
   $div_wrapper = "<div>%s</div>";
   $h2_wrapper = "<h2>%s</h2>";
   $label_wrapper = "<span class='label'><strong>%s</strong></span>: ";
   $grid_wrapper =  "<div class='grid-9'>%s</div>";
   // description
   $desc = sprintf($label_wrapper,t('Description'));
   $output .= sprintf($div_wrapper, $desc . $place->desc->title);
   // names
   $names = sprintf($label_wrapper,t('Names'));
   $output .= sprintf($div_wrapper, $names . implode(', ',$place->name));
   // feature type
   $ftypes = array();
   foreach ( $place->feature_type as $ftype) {
      $ftypes[] = $ftype->title;
   }
   $ftype_label = sprintf($label_wrapper,t('Feature Type'));
   $output .= sprintf($div_wrapper, $ftype_label . implode(', ',$ftypes));
   // map 
   $map_link = l(t('See interactive map of @place', array('@place' =>  $place->header)), $place->interactive_map_url, array('attributes' => array('target' => '_blank')));
   $output .= sprintf($div_wrapper, $map_link);
   // remote link
   $link = str_replace('%place_id',$place_id, $place_remote_link);
   $remote_link = l(t('See @place in the UVa place dictionary', array('@place' =>  $place->header)), $link, array('attributes' => array('target' => '_blank')));
   $output .= sprintf($div_wrapper, $remote_link);
   // wrap all output so far in a grid wrapper
   $output = sprintf($grid_wrapper, $output);
   // add the media in a view
   if ( module_exists('audio_video') ) {
      $output .= audio_video_render_place_view($place_id);
   }
   
   return $output;
}
