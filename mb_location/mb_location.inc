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
function _mb_location_format_item( $item ) {
   $location_vid = variable_get('mb_location_vid', NULL);
   $query = new EntityFieldQuery();
   $query->entityCondition('entity_type', 'taxonomy_term')
   ->propertyCondition('tid', $item['tid'])
   ->propertyCondition('vid', $location_vid);
   $result = $query->execute();
   $entities = entity_load('taxonomy_term', array_keys($result['taxonomy_term']));
   $term = array_shift($entities);
   $output = '';
   $separator = ' | ';
   /* //free
   $free = $term['feature_name'];
   $comma = empty($free) ? '' : ', ';
   if ( ! empty($term['country_code']))  {
   $countries = geonames_query('countryinfo', NULL, array('sortby' => 'countryname'));
      foreach ($countries->results as $country) {
         if ($country['isoalpha3'] == $term['country_code']) { 
            $country_name = $country['countryname'];
            break;
         }
      }                         
   }
   $free .= ! empty($country_name) ? $comma . $country_name : '';
   $output .= $free;
   
   //map
   $wkt = $term['wkt'];
   $delim = ! empty( $output ) ? $separator : '';
   $output .= ! empty( $wkt ) ? $delim . '' . t('Latitude/Longitude: ') . wkt_to_lat_long($wkt) . '' : '';
   
   //geonames
   $google = $term['google_places_id'];
   $delim = ! empty ( $output ) ? $separator : '';
   $output .= ! empty ( $google ) ? $delim . '(' . t('Google Places Id: ') . $google . ')' : '';
   $geoname_id = $term['geonames_feature_id'];
   if (! empty ( $geoname_id ) ) {
      $query = array('geonameid' => $geoname_id);
      $result = geonames_query('hierarchy', $query, $options);
      $results = is_array($result->results) ? array_reverse($result->results) : array();
      $reject_fcodes = array('AREA', 'CONT');
      foreach ( $results as $idx => $row ) {
         $comma = $idx > 0 ? ', ' : '';
         $hierarchy .= ! in_array($row['fcode'], $reject_fcodes) ? $comma . $row['name'] : ''; 
      }
      $delim = ! empty ( $output ) ? $separator : '';
      $output .= ! empty ( $hierarchy ) ? $delim . $hierarchy : '';
   } */
   
   //place dictionary
   if ( !empty($term->place_dictionary_id['und'])) {
      $place_dict_id = $term->place_dictionary_id['und'][0]['value'];
      $delim = ! empty ( $output ) ? $separator : '';
      $hierarchy = fetch_place_dict_details($place_dict_id);
      $rendered_place = implode(", ", $hierarchy);
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

