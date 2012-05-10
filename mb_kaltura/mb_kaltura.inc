<?php

module_load_include('php', 'kaltura', 'kaltura_client/KalturaClient');

/**
* Render pbcore v1.1 xml document from a media node
* @todo use EntityFieldQuery OR entity_load to fetch field collections
**/
function _render_kaltura_xml($node = NULL) {
   //field type names are safe to hardcode since they're defined in modules
   $cck_fields = _get_cck_field_data($node);
   
   //Build up a SimpleXML Doc
   $root = new SimpleXMLElement('<metadata></metadata>');
   
   foreach ($node['field_pbcore_identifier'] as $fld) {
      $fields = array( 
         'identifier' => $fld['identifier_value'] ,
         'identifierSource' => $fld['identifier_source']);
      add_whole_container('pbcoreIdentifier', $fields, $root);
   }
   
   foreach ($node['field_pbcore_title'] as $fld) {
      $fields = array( 
         'title' => $fld['title_value'] ,
         'titleType' => $fld['title_type'],
         'titleLanguage' => $fld['title_language']);
      if ($fld['title_value']) {
         add_whole_container('pbcoreTitle', $fields, $root);
      }
   }
   
   $kmap_taxo_terms = $node->taxonomy[KMAPS_VOCAB_VID];
   $node->field_kmap_annotation = is_array($node->field_kmap_annotation) ? $node->field_kmap_annotation : array();
   foreach ($node->field_kmap_annotation as $annot){
      $kmap_id = get_kmap_id_from_tid($annot['term_id']); 
      $subject = render_kmap_parentage($kmap_id, $links=FALSE, KMAP_PARENTAGE_FULL); 
      $annotations = '';
      //dd($annot,'annot');
      if ( ! is_numeric($kmap_id ) ) {
         continue;
      }
      if (! empty( $annot['text_label'] ) ) {
         $annotations .= $annot['text_label'];
      }
      if (! empty( $annot['numeric_label'] ) ) {
         $delimiter = empty( $annot['text_label']) ? '' : '|';
         $annotations .= $delimiter . $annot['numeric_label'];
      }
      $annotations = ! empty($annotations) ? sprintf(' [annotations:%s]',$annotations) : '';
      
      $subject = $subject . $annotations;
      $kmap_url = external_kmap_page_link($kmap_id);
      $fields = array( 
         'subject' => $subject,
         'subjectAuthorityUsed' => $kmap_url);
      if ($subject) {
         add_whole_container('pbcoreSubject', $fields, $root);
      }
   }
   foreach ($node['field_pbcore_description'] as $fld) {
      $fields = array( 
         'description' => $fld['description_value'] ,
         'descriptionType' => $fld['description_type'],
         'descriptionLanguage' => $fld['description_language']);
      add_whole_container('pbcoreDescription', $fields, $root);
   }
   
   foreach ($node['field_pbcore_genre'] as $fld) {
      $fields = array( 
         'genre' => $fld['genre_value'] ,
         'genreAuthorityUsed' => $fld['genre_source']);
      add_whole_container('pbcoreGenre', $fields, $root);
   }
   
   foreach($node['field_pbcore_relation'] as $fld){
      $fields = array( 
         'relationType' => $fld['relation_type'],
         'relationIdentifier' => $fld['related_to']);
      add_whole_container('pbcoreRelation', $fields, $root);
   }
   
   foreach($node['field_pbcore_coverage'] as $fld){
      $fields = array( 
         'coverage' => $fld['coverage'] ,
         'coverageType' => $fld['coverage_type']);
      add_whole_container('pbcoreCoverage', $fields, $root);
   }
   
   foreach($node['field_pbcore_creator'] as $fld){
      $fields = array( 
         'creator' => $fld['creator'] ,
         'creatorRole' => $fld['creator_role']);
      add_whole_container('pbcoreCreator', $fields, $root);
   }
   
   foreach($node['field_pbcore_contributor'] as $fld){
      $fields = array( 
         'contributor' => $fld['contributor'] ,
         'contributorRole' => $fld['contributor_role']);
      add_whole_container('pbcoreContributor', $fields, $root);
   }
   
   foreach($node['field_pbcore_publisher'] as $fld){
      $fields = array( 
         'publisher' => $fld['publisher'] ,
         'publisherRole' => $fld['publisher_role']);
      add_whole_container('pbcorePublisher', $fields, $root);
   }
   
   foreach($node['field_pbcore_rights_summary'] as $fld){
      $fields = array( 
         'rightsSummary' => $fld['rights_summary_value']);
      add_whole_container('pbcoreRightsSummary', $fields, $root);
   }
   
   //TODO: un-hardocde the name of instantiation noderef field
   foreach ($node->field_instantiation_noderef as $delta => $noderef){
      
      if ( ! is_numeric($noderef['nid'] ) ) {
         continue;
      }
      $node = node_load($noderef['nid']);
      $instantiation = _get_cck_instantiation_field_data($node);
      $inst_field = $instantiation['pbcore_instantiation'][0];
      $date_created = strtotime($inst_field['date_created']);
      $date_issued = strtotime($inst_field['date_issued']);
      $fields = array( 
         'dateCreated' => $date_created,
         'dateIssued' => $date_issued,
         'formatPhysical' => $inst_field['physical_format'],
         'formatDigital' => $inst_field['digital_format'],
         'formatLocation' => $inst_field['location'],
         'formatMediaType' => $inst_field['media_type'],
         'formatGenerations' => $inst_field['generations'],
         'formatStandard' => $inst_field['format_standard'],
         'formatEncoding' => $inst_field['encoding_scheme'],
         'formatFileSize' => $inst_field['file_size'],
         'formatDataRate' => $inst_field['data_rate'],
         'formatBitDepth' => $inst_field['bit_depth'],
         'formatSamplingRate' => $inst_field['sampling_rate'],
         'formatFrameSize' => $inst_field['frame_size'],
         'formatAspectRatio' => $inst_field['aspect_ratio'],
         'formatFrameRate' => $inst_field['frame_rate'],
         'formatColors' => $inst_field['colors'],
         'formatTracks' => $inst_field['track_data'],
         'formatChannelConfiguration' => $inst_field['channel_conf'],
         'Language' => $inst_field['language'],
         'alternativeModes' => $inst_field['alternate_modes'],
         'formatDuration' => $inst_field['duration'],
         'formatTimeStart' => $inst_field['start_time'],
         );
      
      $instant_container = add_whole_container('pbcoreInstantiation', $fields, $root);
      
      foreach ( $instantiation['pbcore_date_available'] as $fld) {
         
         $start_date = strtotime($fld['start_date']);
         $end_date = strtotime($fld['end_date']);
         
         $fields = array( 
            'dateAvailableStart' => $start_date,
            'dateAvailableEnd' => $end_date);
         add_whole_container('pbcoreDateAvailable', $fields, $instant_container);
      }
      
      foreach ( $instantiation['pbcore_format_id']  as $fld ) {
         $fields = array( 
            'formatIdentifier' => $fld['format_id_value'] ,
            'formatIdentifierSource' => $fld['format_id_source']);
         add_whole_container('pbcoreFormatID', $fields, $instant_container); 
      }
      
      foreach ( $instantiation['pbcore_annotation']  as $fld) {
         $fields = array( 
            'annotation' => $fld['annotation_value']);
         add_whole_container('pbcoreAnnotation', $fields, $instant_container); 
      } 
   }
   
   foreach($node['field_pbcore_extension'] as $fld){
      $fields = array( 
         'extension' => $fld['extension_value'],
         'extensionAuthorityUsed' => $fld['extension_source']);
      add_whole_container('pbcoreExtension', $fields, $root);
   }
   
   $doc = new DOMDocument('1.0');
   $doc->formatOutput = true;
   $domnode = dom_import_simplexml($root);
   $domnode = $doc->importNode($domnode, true);
   $domnode = $doc->appendChild($domnode);
   $document = $doc->saveXML(); 
   return $document;
   // If not using DOM return $root->asXML();
}

/**
* add_whole_container
*
* This function returns a pbcore container as long as at least one field is not empty
* The two-step container addition converts special characters like & < > to entities
**/
function add_whole_container($container_name, $container_fields, &$parent) {
   $container = NULL;
   $mash_values = trim( implode( array_values( $container_fields ) ) );
   if ( ! empty(  $mash_values ) ) {
      $container = $parent->addChild($container_name);
      foreach ( $container_fields as $name => $value) {
         if ( ! empty( $value ) ) {
            $container->addChild($name);
            $container->{$name} = $value; //convert special characters
         }
      }
   }
   return $container;
}

function _get_cck_field_data ( $node ) {
   $cck_fields = array(
      'pbcore_creator' => array(),
      'pbcore_contributor' => array(),
      'pbcore_publisher' => array(),
      'pbcore_rights_summary' => array(),
      'pbcore_description' => array(),
      'pbcore_genre' => array(),
      'pbcore_relation' => array(),
      'pbcore_coverage' => array(),
      'pbcore_extension' => array(),
      'pbcore_title' => array(),
      'pbcore_subject' => array(),//this field doesnt exist
      'pbcore_identifier' => array(),
      );
   
   //copy the field value from the field name to the field type
   foreach (get_object_vars($node) as $key => $field_value) {
      if( strstr($key, "field_") ) {
         $field = content_fields($key);
         if ( in_array($field[$type], $cck_fields )) {
            $cck_fields[$field['type']] = $field_value;
         }
      }
   }
   return $cck_fields;
}


function _get_cck_instantiation_field_data($node) {
   $cck_instantiation_fields = array(
      'pbcore_annotation' => array(),
      'pbcore_format_id' => array(),
      'pbcore_date_available' => array(),
      'pbcore_instantiation' => array(),
      );
   foreach (get_object_vars($node) as $key => $field_value) {
      if( strstr($key, "field_") ) {
         $field = content_fields($key);
         if ( in_array($field[$type], $cck_instantiation_fields )) {
            $cck_instantiation_fields[$field['type']] = $field_value;
         }
      }
   }
   return $cck_instantiation_fields;
}

function _get_entry_id_from_node($node) {
   $node =  (object)$node;
   $media_field_name = 'field_' . $node->type; //video, audio, image
   $entry_id = $node->{$media_field_name}['und'][0]['entryid'];
   return $entry_id;
}

function _get_media_from_entry_id($entry_id) {
   try {
      $client=KalturaHelpers::getKalturaClient($isAdmin=true);
      $result = $client->media->get($entry_id);
      return $result;
   } 
   catch ( Exception $e ) {
      $msg = t("Had trouble getting remote Kaltura entry: @entry_id", array('@entry_id' => $entry_id));
      _report_kaltura_exception( $e, $msg);
   }
}

function _kaltura_to_pbcore_format_names($flavor_format_name) {
   $format_name_map =array(
      0 => 'Film',
      'mpeg video' =>  'MPEG video',
      3 =>  'NTSC video interlaced',
      4 =>  'NTSC video progressive',
      5 =>  'ATSC video interlaced',
      6 =>  'ATSC video progressive',
      7 =>  'PAL video',
      8 =>  'SECAM video',
      9 =>  'QuickTime',
      10 =>  'RealSystems',
      11 =>  'Windows Media',
      'flash video' =>  'Flash Video',
      13 =>  'Linear PCM Audio',
      14 =>  'Dolby Digital AC3 Audio',
      'mpeg audio' =>  'MPEG Audio',
      16 =>  'DTA Audio',
      17 =>  'SDDS Audio');   
   return $format_name_map[$flavor_format_name];
}

function _kaltura_to_pbcore_framerates($flavor_framerate_value) {
   $framerate_map =array(
      '25' => '25 fps',
      '24' => '24 fps',
      '23.976' => '23_976 fps',
      '15' => '15 fps',
      '12' => '12 fps',
      '10' => '10 fps',
      '7' => '7 fps',
      '5' => '5 fps',
      '2' => '2 fps',
      '1' => '1 fps',
      '9999a' => '60 fields per sec',
      '9999b' => '59_94 fields per sec',
      '9999c' => '30 fps 60 fields per sec',
      '9999d' => '29_97 fps 59_94 fields per sec',
      '9999e'=> '33 rpm',
      '9999f'=> '45 rpm',
      '9999g' => '78 rpm',
      '9999h' => '1 and 7_8 ips',
      '9999i'  => '3 and 3_4 ips',
      '9999j' => '7 and 1_2 ips',
      '9999k'=> '15 ips',
      '9999l'=> '30 ips',
      '9999m'=> 'other');
   return $framerate_map[$flavor_framerate_value];
}

function _kaltura_to_pbcore_framesize($width, $height) {
   $aspect_map = array (
      array(352, 240,   "352x240 MPEG_1 NTSC" ),
      array(352, 288,   "352x288 MPEG_1 PAL" ),
      array(640, 480,   "640x480" ),
      array(704, 480,   "704x480" ),
      array(720, 480,   "720x480 MPEG_2 NTSC and DV" ),
      array(720, 576,   "720x576 MPEG_2 PAL" ),
      array(720, 486,   "720x486 D1" ),
      array(1280, 720,  "1280x720" ),
      array(1920, 1080, "1920x1080"),
      );
   foreach ( $aspect_map as $row ) {
      if ( $width == $row[0] && $height = $row[1] ) {
         return $row[2];
      }
   }
}

function _fetch_remote_pbcore( $entry_id ) {
   $client=KalturaHelpers::getKalturaClient($isAdmin=true);
   $filter = new KalturaMetadataFilter();
   $filter->objectIdEqual = $entry_id;
   try {
      $results = $client->metadata->listAction($filter, $pager);
      return $results;
   }
   catch (Exception $e) {
      $msg = t("Had trouble listing metadata records for Kaltura entry: @entry_id", array('@entry_id' => $entry_id));
      _report_kaltura_exception( $e, $msg);
   }
}

/**
* Fetch remote pbcore xml and apply it to the node's field collections
* @todo is in import process add tags; add PBC Identifier for partner data
* @todo re-use this code for import process or vice versa
**/
function _apply_remote_pbcore(&$node) {
   $entry_id = _get_entry_id_from_node($node);
   $results = _fetch_remote_pbcore($entry_id);
   //TODO Handle exceptional cases where there are too many metadata docs
   $metadata = $results->objects[0];
   
   if ( empty( $metadata) ) {
      return NULL;
   }
   $xml = new SimpleXMLElement($metadata->xml);
   $pbcore = $pbcore_instantiations = array();
   
   //Field Collections
   foreach ($xml->pbcoreIdentifier as $element) {
      
      $pbcore['field_pbcore_identifier'][] = array(
         'identifier_value' => (string)$element->identifier,
         'identifier_source' => (string)$element->identifierSource,
         );
   }
   
   foreach ($xml->pbcoreTitle as $element) {
      $pbcore['pbcore_title'][] = array(
         'title_value' => (string)$element->title,
         'title_type' => (string)$element->titleType,
         'title_language' => (string)$element->titleLanguage,
         );
   }
   foreach ($xml->pbcoreSubject as $element) {
      $pbcore['field_pbcore_subject'][] = array(
         'subject_value' => (string)$element->subject,
         'subject_source' => (string)$element->subjectSource,
         );
   }
   foreach ($xml->pbcoreDescription as $element) {
      $pbcore['field_pbcore_description'][] = array(
         'description_value' => (string)$element->description,
         'description_type' => (string)$element->descriptionType,
         'description_language' => (string)$element->descriptionLanguage,
         );
   }
   foreach ($xml->pbcoreGenre as $element) {
      $pbcore['field_pbcore_genre'][] = array(
         'genre_value' => (string)$element->genre,
         'genre_source' => (string)$element->genreAuthorityUsed,
         );
   }
   foreach ($xml->pbcoreRelation as $element) {
      $pbcore['field_pbcore_relation'][] = array(
         'relation_type' => (string)$element->relationType,
         'related_to' => (string)$element->relationIdentifier,
         );
   }
   foreach ($xml->pbcoreCoverage as $element) {
      $pbcore['field_pbcore_coverage'][] = array(
         'coverage' => (string)$element->coverage,
         'coverage_type' => (string)$element->coverageType,
         );
   }
   foreach ($xml->pbcoreCreator as $element) {
      $pbcore['field_pbcore_creator'][] = array(
         'creator' => (string)$element->creator,
         'creator_role' => (string)$element->creatorRole,
         );
   }
   foreach ($xml->pbcoreContributor as $element) {
      $pbcore['field_pbcore_contributor'][] = array(
         'contributor' => (string)$element->contributor,
         'contributor_role' => (string)$element->contributorRole,
         );
   }
   foreach ($xml->pbcorePublisher as $element) {
      $pbcore['field_pbcore_publisher'][] = array(
         'publisher' => (string)$element->publisher,
         'publisher_role' => (string)$element->publisherRole,
         );
   }
   foreach ($xml->pbcoreRightsSummary as $element) {
      $pbcore['field_pbcore_rights_summary'][] = array(
         'rights_summary_value' => (string)$element->rightsSummary,
         );
   }
   
   foreach ($xml->pbcoreExtension as $element) {
      $pbcore['field_pbcore_extension'][] = array(
         'extension_value' => (string)$element->extension,
         'extension_source' => (string)$element->extensionAuthorityUsed,
         );
   }                   
   
   //dd($xml->pbcoreSubject, 'any subjects?');
   //Subject maps to kmap annotation field
   foreach ($xml->pbcoreSubject as $element) {
      $external_kmap_path = (string)$element->subjectAuthorityUsed;
      // We need to get the taxonomy term id that stores the last external kmap id 
      // from a path like this: http://shanti.virginia.edu/kmaps/categories/353/children/4482
      $pattern='/(\d+)$/';
      preg_match($pattern, $external_kmap_path, $matches);
      $kmap_id = $matches[0];
      //dd($external_kmap_path,'$external_kmap_path');
      //dd($kmap_id,'$kmap_id');
      if (is_numeric($kmap_id)) {
         $sql = "SELECT term_id
         FROM {kmap_taxonomy}
         WHERE kmap_id = %d";
         $tid = db_result(db_query($sql, $kmap_id));
         //dd($tid,'$tid');
         $annot_pattern='/\[annotations:(.*)\]$/';
         preg_match($annot_pattern, trim($element->subject), $matches);
         //dd($element->subject,'$element->subject');
         //dd($matches,'$matches');
         
         $match = $matches[1];
         //TODO: add validation to kmap_annotation fields to exclude the pipe '|'
         $annots = $match ? explode('|', $match) : array();
         //dd($annots,'annots');
         $num_label = $text_label = '';
         foreach ($annots as $annot) {
            if ( is_numeric( $annot ) ) {
               $num_label = $annot;
            }
            else if ( ! empty($annot) ) {
               $text_label = $annot;
            }
         }
         $kmap_annotations[] = array(
            'term_id' => $tid,
            'text_label' => $text_label,
            'numeric_label' => $num_label,
            );
      }
   }
   //dd($kmap_annotations, 'kmap_annotations');
   
   $pbcore['field_kmap_annotation'] = $kmap_annotations;
   
   foreach ($xml->pbcoreInstantiations as $instantiation_element) {
      $date_format='Y-m-d H:i:s';
      $date_created = (string)$instantiation_element->dateCreated ? date($date_format, (string)$instantiation_element->dateCreated) : '';
      $date_issued = (string)$instantiation_element->dateIssued ? date($date_format, (string)$instantiation_element->dateIssued) : ''; 
      $new_instantiation = array();
      $new_instantiation['date_created'] = $date_created;
      $new_instantiation['date_issued'] = $date_issued;
      $new_instantiation['physical_format'] = (string)$instantiation_element->formatPhysical;
      $new_instantiation['digital_format'] = (string)$instantiation_element->formatDigital;
      $new_instantiation['location'] = (string)$instantiation_element->formatLocation;
      $new_instantiation['media_type'] = (string)$instantiation_element->formatMediaType;
      $new_instantiation['generations'] = (string)$instantiation_element->formatGenerations;
      $new_instantiation['format_standard'] = (string)$instantiation_element->formatStandard;
      $new_instantiation['encoding_scheme'] = (string)$instantiation_element->formatEncoding;
      $new_instantiation['file_size'] = (string)$instantiation_element->formatFileSize;
      $new_instantiation['duration'] = (string)$instantiation_element->formatDuration;
      $new_instantiation['data_rate'] = (string)$instantiation_element->formatDataRate;
      $new_instantiation['bit_depth'] = (string)$instantiation_element->formatBitDepth;
      $new_instantiation['sampling_rate'] = (string)$instantiation_element->formatSamplingRate;
      $new_instantiation['frame_size'] = (string)$instantiation_element->formatFrameSize;
      $new_instantiation['aspect_ratio'] = (string)$instantiation_element->formatAspectRatio;
      $new_instantiation['frame_rate'] = (string)$instantiation_element->formatFrameRate;
      $new_instantiation['colors'] = (string)$instantiation_element->formatColors;
      $new_instantiation['track_data'] = (string)$instantiation_element->formatTracks;
      $new_instantiation['channel_conf'] = (string)$instantiation_element->formatChannelConfiguration;
      $new_instantiation['language'] = (string)$instantiation_element->language;
      $new_instantiation['alternate_modes'] = (string)$instantiation_element->alternativeModes;
      
      foreach ( $xml->pbcoreInstantiations->pbcoreDateAvailable as $date_available) {
         $new_instantiation['field_pbcore_date_available']['start_date'] = date($date_format, (string)$date_available->dateAvailableStart);
         $new_instantiation['field_pbcore_date_available']['end_date'] = date($date_format, (string)$date_available->dateAvailableEnd);
      }
      foreach ( $xml->pbcoreInstantiations->pbcoreFormatID as $format_id) {
         $new_instantiation['field_pbcore_format_id']['pbcore_format_id'] = (string)$format_id->formatIdentifier;
         $new_instantiation['field_pbcore_format_id']['pbcore_format_id_source'] = (string)$format_id->formatIdentifierSource;
      }
      foreach ( $xml->pbcoreInstantiations->pbcoreAnnotation as $annotation) {
         $new_instantiation['field_pbcore_annotation']['pbcore_annotation'] = (string)$annotation->annotation;
      }
      $pbcore_instantiations[] = $new_instantiation;
   }
   $pbcore['instantiations'] = $pbcore_instantiations;
   
   return $pbcore;
}



/*
===============
SUBMIT HANDLERS
===============
*/

function check_delete_from_kaltura(&$form, &$form_state) {
   if ( $form_state['values']['delete_from_kaltura'] == 1 ) {
      module_load_include('inc', 'mb_kaltura', 'mb_kaltura');
      $nid = $form_state['values']['nid'];
      $node = node_load($nid);
      $client=KalturaHelpers::getKalturaClient($isAdmin=true);
      $objectId= _get_entry_id_from_node($node);
      $objectId = str_replace(",","",$objectId);
      $client->media->delete($objectId);
      $msg = t("Deleted entry_id, @entryid from Kaltura server", array('@entryid' => $objectId));
      drupal_set_message( $msg ); 
   }
}

function _test_pbcore_export_xml() {
   
   $test_node = node_load(5039); //Brushy Run
   $document = _render_kaltura_xml($test_node);
   
   if ( 0 ) {
      header("Content-type: text/xml"); 
      print $document;
      die;
   }
   else {
      
      return '';
   }
}

/*
=========
UTILITIES
=========
*/

/**
* Convert a media node to pbcore xml and send it to kaltura server
**/
function _save_kaltura_metadata($node) {
   $client=KalturaHelpers::getKalturaClient($isAdmin=true);
   $xmlData = _render_kaltura_xml($node);
   //dd($xmlData);
   $objectId= _get_entry_id_from_node($node);
   if ( empty($objectId) ) {
      watchdog(WATCHDOG_ERROR, "Could not determine Entry Id for node $node->nid. Metadata <b>was not</b> saved to the Kaltura server.");
   }
   
   /// List metadata for entry_id
   $results = _fetch_remote_pbcore($objectId);
   
   // ADD metadata for entry_id to Kaltura
   if ( sizeof($results->objects) == 0 ) { 
      try {
         $results=$client->metadata->add(METADATA_PROFILE_ID, METADATA_OBJECT_TYPE, $objectId, $xmlData);
         //drupal_set_message(t('Added a new PBCore record on Kaltura server.'));
      }
      catch (Exception $e) {
         $msg = t("Had trouble adding metadata record to Kaltura entry: @entry_id", array('@entry_id' => $entry_id));
         _report_kaltura_exception( $e, $msg);
      }
   } 
   // UPDATE metadata for entry_id to Kaltura
   else if ( sizeof($results->objects) == 1 ) {
      $obj=$results->objects[0];
      $metadataId = $obj->id; //TODO Do I need to reset this here???
      try {
         $results =  $client->metadata->update($metadataId, $xmlData);
         drupal_set_message(t('Updated the PBCore record on Kaltura server.'));
      }
      catch (Exception $e) {
         $msg = t("Had trouble updating metadata record for Kaltura entry: @entry_id", array('@entry_id' => $entry_id));
         _report_kaltura_exception( $e, $msg);
      }
   }   
   // DO NOTHING to metadata for entry_id to Kaltura
   else if (sizeof($results->objects) > 1 ) {
      drupal_set_message(t('Did not expect more than one metadata object on the Kaltura site. <b>No updates were made</b>'),'warning' );
   } 
}

/** 
* autopopulate_pbcore_identifier
*
* If there is no pbc identifier value matching the nid or entry id, add one
**/
function autopopulate_pbcore_identifier(&$node ) {
   
   $entry_id = _get_entry_id_from_node($node);
   $nid_identifier_exists = $kaltura_identifier_exists = FALSE;
   
   if (isset($node->{$identifier_field_name})  ) {
      foreach ( $node->field_pbcore_identifier as $identifier ) {
         $nid_identifier_exists = $identifier['identifier_value'] == $node->nid ? true : FALSE || $nid_identifier_exists; 
         $kaltura_identifier_exists = $identifier['identifier_value'] == $entry_id ? true : FALSE || $kaltura_identifier_exists; 
      }
      
      if ( ! $nid_identifier_exists ) {
         $new_identifier = array( 'identifier_value' => $node->nid,
            'identifier_source' => variable_get('site_name', "Default site name"),
            '_weight' => -1);
         array_unshift( $node->{$identifier_field_name}, $new_identifier );
         //drupal_set_message(t("Added a pbcore identifier element for Drupal node id: $node->nid."));
      }
      
      if ( ! $kaltura_identifier_exists ) {
         $new_identifier = array( 'identifier_value' => $entry_id,
            'identifier_source' => 'Kaltura.com' ,
            '_weight' => -1 );
         array_unshift( $node->{$identifier_field_name}, $new_identifier );
         //drupal_set_message(t('Added a pbcore identifier element for Kaltura entry id.'));
      }
   }
}

/** 
* autopopulate_pbcore_title
*
* If there are no pbc titles at all, add one
**/
function autopopulate_pbcore_title(&$node) {
   //Use the Kaltura media object title on the first save
   $title ='';
   $media_field = $node->type == 'video' ? 'field_kaltura_video' : 'field_kaltura_audio';
   $entry_id = $node->{$media_field}[0]['value'];
   if (isset($node->{$title_field_name}) ) {
      if ( sizeof($node->{$title_field_name}) == 1 && empty($node->field_pbcore_title[0]['title_value'])) {
         $node->{$title_field_name}[] = array('title_value' => $node->title);
      }
   }
}

/** 
* autopopulate_pbcore_instantiations
*
* Kaltura Flavors ( pbcoreInstantiations / encodings / compressions ) are not available immediately
* Add/Update an instantiation only if it is the original uploaded file. Adding all flavors as instantiations just gets too crazy.
* 
* SAMPLE FLAVOR RESULT
* 
* id (String, 10 characters ) 0_6971bern
* entryId (String, 10 characters ) 0_d6swuhhd
* partnerId (Integer) 381832
* status (Integer) 2
* flavorParamsId (Integer) 0
* version (String, 1 characters ) 1
* width (Integer) 0
* height (Integer) 0
* bitrate (Integer) 128
* frameRate (Float) 0
* size (Integer) 780
* isOriginal (Boolean) true
* tags (String, 0 characters )
* isWeb (Boolean) FALSE
* fileExt (String, 3 characters ) mp3
* containerFormat (String, 10 characters ) mpeg audio
* videoCodecId (NULL)
* createdAt (Integer) 1295362542
* updatedAt (Integer) 1295362577
* deletedAt (NULL)
* description (String, 0 characters )
* 
* @TODO: un-hardocde the name of instantiation noderef field
* @TODO: un-hardocde the name of format_id field
*
**/
function _populate_pbcore_instantiation(&$node) {
   // Get Kaltura Entry Id
   $client=KalturaHelpers::getKalturaClient($isAdmin=true);
   $objectId= _get_entry_id_from_node($node);
   // Get Flavors
   try {
      $flavors=$client->flavorAsset->getByEntryId($objectId);
   }
   catch (Exception $e) {
      $msg = t("Had trouble retrieving flavors for Kaltura entry: @entry_id", array('@entry_id' => $entry_id));
      _report_kaltura_exception( $e, $msg);
   }
   if (! is_array($flavors) ) {
      return;
   }
   
   // Add instantiations for the source flavor 
   foreach ( $flavors as $flavor ) {
      if ( ! ($flavor->isOriginal) ) {
         continue;
      }
      
      /*   // EITHER match existing instantiation node by kaltura flavor id
      foreach ($node->field_pbcore_instantiation as $delta => $instantiation_eref) {
      if ( empty( $instantiation_eref['und'][0]['value'] ) ) {
      unset( $node->field_pbcore_instantiation[$delta] );
      continue;
      }
      $instantiation = entity_load( $instantiation_eref['und'][$delta]['value']);
      dd($instantiation, "instantiation");
      
      if (empty($instantiation->field_pbcore_format_id['und'])) {
      continue;
      }
      foreach ( $instantiation->field_pbcore_format_id['und'] as $delta => $format_id_eref) {
      $format_id = entity_load( $format_id_eref['und'][$delta]['value']);
      if ( $format_id['format_id_value'] == $flavor->id ) {
      $instantiation_found = TRUE;
      break 2; //stop searching;
      }
      }
      }
      // OR create a new instantiation node
      if ( !$instantiation_found ) {
      $instantiation = array();
      $instantiation['field_instantiation'] = array();
      $instantiation['field_format_id'] = array();
      $was_new=true;
      } */
      
      //create the instantiation field collection
      $date_format='Y-m-d H:i:s';
      $date_created = date($date_format, $flavor->createdAt);
      $frame_size = $flavor->width . 'x' . $flavor->height;
      $inst_fc_values = array();
      $inst_fc_values['field_name'] = 'field_pbcore_instantiation';
      $inst_fc_values['is_new'] = 1;
      $inst_fc_values['field_date_created'][$node->language][]['value']  = $date_created;
      $inst_fc_values['field_frame_size'][$node->language][]['value']  = $frame_size;
      $inst_fc_values['field_data_rate'][$node->language][]['value']  = $flavor->bitrate . " (kbps)";
      $inst_fc_values['field_frame_rate'][$node->language][]['value']  = _kaltura_to_pbcore_framerates($flavor->frameRate);
      $inst_fc_values['field_file_size'][$node->language][]['value']  = $flavor->size . " (KB)";
      $inst_fc_values['field_format_standard'][$node->language][]['value']  = _kaltura_to_pbcore_format_names( $flavor->containerFormat );
      $inst_fc_values['field_encoding_scheme'][$node->language][]['value']  = $flavor->videoCodecId;
      try { 
         $inst_fc_values['field_location'][$node->language][]['value']  = $client->flavorAsset->getDownloadUrl($flavor->id);
      }
      catch (Exception $e) {
         $msg = t("Had trouble retrieving the download URL for: @flavor_id", array('@flavor_id' => $flavor->id));
         _report_kaltura_exception( $e, $msg);
      }
      $inst_fc = new FieldCollectionItemEntity($inst_fc_values);
      $inst_fc->setHostEntity('node', $node);
      $inst_fc->save();
      
      // Save a format id with the instantiation
      $formatid_fc_values = array();
      $formatid_fc_values['field_name'] = 'field_pbcore_format_id';
      $formatid_fc_values['is_new'] = 1;
      $formatid_fc_values['field_format_id'][$node->language][]['value'] = $flavor->id;
      $formatid_fc_values['field_format_id_source'][$node->language][]['value'] = 'Kaltura.com';
      $formatid_fc = new FieldCollectionItemEntity($formatid_fc_values);
      $formatid_fc->setHostEntity('field_collection_item', $inst_fc);
      $formatid_fc->save();
   } 
   unset($instantiation);                                            
}

/*
======
IMPORT
======
*/

function mb_kaltura_import_form($form_id, $form_state) {
   /*    IMPORT FORM FILTERS (not working)
   if ( !empty($form_state['input'])) {
   $limit = $form_state['input']['pager_limit'];
   $partner_data  = $form_state['input']['partner_data'];
   $collection  = $form_state['input']['collection'];
   $author  = $form_state['input']['author'];
   $remote_entries = get_remote_entries($_GET['order'], $_GET['sort'], $limit, $partner_data);
   }
   else {
   $remote_entries = get_remote_entries();
   } */
   
   $remote_entries = get_importable_entries();
   
   $form=array();
   if ( count( $remote_entries ) ) {
      /* $form['filters'] = array(
      '#type' => 'fieldset',
      '#collapsible' => true,
      '#collapsed' => false,
      '#title' => t('Filter Kaltura Items'),
      );
      $form['filters']['partner_data'] = array(
      '#type' => 'textfield',
      '#title' => 'Partner Data',
      '#description' => t('Filter importable items by the partner data. Partner data is used in the Kaltura CSV bulk import file.'),
      '#default_value' => $partner_data,
      );     
      $form['filters']['pager_limit'] = array(
      '#type' => 'select',
      '#title' => 'Results',
      '#options' => array('10' => 10,'25' => 25,'50' => 50,'100' => 100,'250' => 250,'500' => 500),
      '#default_value' => $limit,
      );     
      $form['filters']['filter'] = array(
      '#type' => 'submit',
      '#value' => 'Filter Importable Items',
      '#ajax' => array(
      'callback' => 'ajax_filter_import_form',
      'wrapper' => 'checkboxes-div',
      'method' => 'replace',
      'effect' => 'fade',
      ),
      ); */
      $form['admin_data'] = array(
         '#type' => 'fieldset',
         '#collapsible' => true,
         '#title' => t('Metadata for imported items'),
         );
      $form['admin_data']['collection'] = array(
         '#type' => 'textfield',
         '#title' => 'Collection',
         '#description' => t('Begin typing the name of your collection and then choose from the list that appears.'),
         '#required' => TRUE,
         '#autocomplete_path' => 'mb_kaltura/autocomplete/collection',
         '#default_value' => isset($collection) ? $collection : '',
         );
      $form['admin_data']['author'] = array(
         '#type' => 'textfield',
         '#title' => 'Author',
         '#description' => t('Begin typing the name of the user and then choose from the list that appears.'),
         '#required' => TRUE,
         '#autocomplete_path' => 'mb_kaltura/autocomplete/user',
         '#default_value' => isset($author) ? $author : '',
         );
      $form['select_all'] = array(  
         '#type' => 'checkboxes',  
         '#description' => t('These items exist on Kaltura servers but do not yet exist in Mediabase. '),
         '#options' => array(0 => "Select All"),  
         '#attributes' => array('style' => 'display : none'),  
         );
      
      $entry_ids=array();
      foreach( $remote_entries as $entry ) {
         if (isset($_GET['filter']) && strpos($entry->partnerData,$_GET['filter']) === FALSE) {
            continue;
         }
         $entry_ids[$entry->id]=$entry->id;
         $type='';
         if ( $entry->mediaType == KalturaMediaType::VIDEO) {
            $type='Video';
         } else if ( $entry->mediaType == KalturaMediaType::AUDIO) {
            $type='Audio';
         } else if ( $entry->mediaType == KalturaMediaType::IMAGE) {
            $type='Image';
         }
         $form["thumbnail"]['thumb_' . $entry->id] = array (
            '#type' => 'hidden',
            '#prefix' => "<img src='" . $entry->thumbnailUrl . "'/>"
            );
         $form["title"]['title_' . $entry->id] = array (
            '#type' => 'textfield',
            '#maxlength' => 255, 
            
            '#default_value' => $entry->name,
            );
         $form["type"]['type_' . $entry->id] = array (
            '#markup' => $type,
            );
         $form["partner_data"]['partner_data_' . $entry->id] = array (
            '#markup' => $entry->partnerData,
            );
         $form["createdAt"]['created_' . $entry->id] = array (
            '#type' => 'hidden',
            '#value' => $entry->createdAt,
            '#prefix' => date('M jS, Y g:i a', $entry->createdAt),
            );
         $form["updatedAt"]['updated_' . $entry->id] = array (
            '#type' => 'hidden',
            '#value' => $entry->updatedAt,
            '#prefix' => date('M jS, Y g:i a', $entry->updatedAt),
            );
      }
      $form['entry_ids'] = array(
         '#type' => 'checkboxes',
         '#options' => $entry_ids,
         '#prefix' => '<div id="checkboxes-div">',
         '#suffix' => '</div>',
         );
      $form['import_selected'] = array (
         '#type' => 'submit',
         '#value' => t('Import Selected')
         );
      
      //add a submit handler
      $form['#submit'][]='_import_entries_page';
      
      $form['header'] = array(
         '#type' => 'value', 
         '#value' => array( 
            array('data' => t('Import')), 
            array('data' => t('Thumbnail'),'field' => 'thumbnail'),
            array('data' => t('Title'), 'field' => 'title'),
            array('data' => t('Type'), 'field' => 'type'),
            array('data' => t('Partner Data'), 'field' => 'partner_data'),
            array('data' => t('Created'),'field' => 'createdAt', 'sort' => 'desc'),
            array('data' => t('Updated'), 'field' => 'updatedAt'),
            )
         );
   } else {
      $form['#prefix'] = t("There are no items to import on the Kaltura server.");
   }
   return $form;
}

/* function ajax_filter_import_form($form, $form_state) {
return $form['entry_ids'];
} */

function theme_mb_kaltura_import_form(&$form) {
   $form = array_pop($form); // Why is this necessary in D7??
   $output = '';
   $output .= drupal_render($form['filters']);
   $output .= drupal_render($form['admin_data']);
   $output .= drupal_render($form['import_selected']);
   $output .= drupal_render($form['select_all']);
   foreach (element_children($form['entry_ids']) as $key) {
      $row = array();
      $row[] = drupal_render($form['entry_ids'][$key]);
      $row[] = drupal_render($form['thumbnail']['thumb_' . $key]);
      $row[] = drupal_render($form['title']['title_' . $key]);
      $row[] = drupal_render($form['type']['type_' . $key]);
      $row[] = drupal_render($form['partner_data']['partner_data_' . $key]);
      $row[] = drupal_render($form['createdAt']['created_' . $key]);
      $row[] = drupal_render($form['updatedAt']['updated_' . $key]);
      $rows[] = $row;
   }
   $table_data = array (
      'header' => $form['header']['#value'],
      'rows' => $rows
      );
   $output .= theme('table',  $table_data);
   $output .= drupal_render($form['import_selected']);
   $output .= drupal_render_children($form); // Process any other fields and display them
   return $output;
}

/**
* This submit handler overrides the callback for 
* /admin/settings/kaltura/entries/import set in kaltura module
*/
function _import_entries_page($form, &$form_state) {
   if ($form_state['clicked_button']['#parents'][0] == 'filter') {
      drupal_goto(array_pop(drupal_get_destination()));
      return;
   }
   module_load_include('   inc', 'kaltura', 'includes/kaltura.admin');
   $replacement = "$2";
   $pattern = '/(.*\[nid:)(\d+)(.)/';
   $collection_nid =  preg_replace($pattern, $replacement, $form_state['values']['collection']);
   $pattern = '/(.*\[uid:)(\d+)(.)/';
   $author_uid =  preg_replace($pattern, $replacement, $form_state['values']['author']);
   $operations = array();
   foreach ( $form_state['values']['entry_ids'] as $key ) {
      if ( $key) {
         $title = $form_state['values']['title_' . $key];
         $operations[] = array('create_node_mediabase', array($key, $title, $collection_nid, $author_uid));
      }
   }
   $batch = array(
      'operations' => $operations,
      'file' => drupal_get_path('module', 'mb_kaltura') . '/mb_kaltura.inc',
      'title' => t('Batch import kaltura entries'),
      'init_message' => t('Kaltura import batch is starting.'),
      'progress_message' => t('Processed @current out of @total.'),
      'error_message' => t('Kaltura import batch has encountered an error.'),
      );
   
   batch_set($batch);
   batch_process();
}

/**
* Create and save a mediabase node from a kaltura entry
* @todo Add pbcore title one time
* @todo Add pbcore instantiation one time
* @todo test tags
**/
function create_node_mediabase($entry_id, $title = NULL, $collection_nid = NULL, $author_uid = NULL) {
   if ( is_numeric($author_uid) ) {
      $user = user_load($author_uid);
   }
   if ( empty( $user) ) {
      global $user;
   }
   $entry = _get_media_from_entry_id($entry_id);
   
   // use kaltura module api to add entry to node_kaltura
   module_load_include('inc','kaltura','includes/kaltura.admin');
   kaltura_import_entry($entry); 
   
   //create media node
   $type='MISSING_TYPE';
   if ( $entry->mediaType == KalturaMediaType::VIDEO) {
      $type='video';
   } else if ( $entry->mediaType == KalturaMediaType::AUDIO) {
      $type='audio';
   }
   $node = array();
   $node['type'] = $type;
   $node['title'] = $title;
   $node['language'] = 'und';
   $node['is_new'] = true;
   $node['uid'] = $user->uid;
   $node['name'] = $user->name;
   $node['promote'] = 0;
   $node['comment'] = 0;
   $node['status'] = 1;
   $node['date'] = format_date(time(), 'custom', 'Y-m-d H:i:s O');
   $media_field_name="field_$type";
   $node[$media_field_name]['und'][0] = array(
      'entryid' => $entry_id,
      'mediatype' => $entry->mediaType
      );
   
   $group = og_get_group('node', $collection_nid);
   $gid = $group->gid;
   $node['group_audience']['und'][0]['gid'] = $gid;
   $node['mb_kaltura_import'] = true; //Set this flag to prevent title getting overwritten in mediabase.module
   
   $node = (object)$node;
   add_tags($node, $entry);
   node_save( $node);
   
   add_partner_data_identifier($node, $entry);
   
   /*     // Create and Reference instantiation field_collections
   $pbcore_data = _apply_remote_pbcore($node); //do before presave/autopopulation
   // dd($pbcore_data, "pbcore_data");
   
   if ($pbcore_data) {
   
   $instantiations = $pbcore_data['instantiations']; //instantiations not yet noderef'd
   unset( $pbcore_data['instantiations'] );
   //turn instantiations into noderefs
   $inst_noderefs = array();
   if ( is_array($instantiations) ) {
   foreach ( $instantiations as $instantiation ) {
   DELETED THIS FUNCTION $inst_node = save_instantiation( $instantiation );
   $inst_noderefs['field_instantiation_noderef'][] = array ( 'nid' => $inst_node->nid );
   }
   }
   
   $node = array_merge($node, $pbcore_data, $inst_noderefs);
   //dd($pbcore_data,'pbcore_data');     
   //dd($inst_noderefs,'inst_noderefs');      
   } 
   */
   
   /* SET A PBCORE IDENTIFIER BASED ON PARTNER DATA */
   
   
   drupal_set_message( t("Imported: $node->title ($entry->id)."));
   return $node;
}

/**
* Add kaltura tags to tags Vocab
* @todo TEST THIS IN AN ACTUAL IMPORT
**/
function add_tags(&$node, $entry) {
   $tags = explode(',', str_replace(';', ',', $entry->tags));
   if(count($tags) == 1 && empty($tags[0])) {
      return;
   }
   foreach($tags as $tag) {
      $query = new EntityFieldQuery;
      $entities = $query
      ->entityCondition('entity_type', 'taxonomy_term')
      ->propertyCondition('name', $tag)
      ->propertyCondition('vid', 1)
      ->execute();
      if ( empty($entities) ) {
         $term = new stdClass();
         $term->name = $tag;
         $term->vid = 1; 
         taxonomy_term_save($term); 
      } else {
         $term = array_shift( $entities['taxonomy_term'] );
      }
      $node->field_tags[$node->language][]['tid'] = $term->tid;
   }
}

function add_partner_data_identifier(&$node, $entry) {
   // parse the prefix patterns in admin/config/mediabase e.g. thl|thlib.org
   $labels = array();
   $lines = preg_split( '/\r\n|\r|\n/', variable_get('mediabase_partner_data_prefixes') );
   foreach ($lines as $line) {
      $row = explode('|',$line);
      $labels[$row[0]] = $row[1];
   }
   $prefix_and_data = preg_split( '/-|:/', $entry->partnerData );
   $prefix = array_shift($prefix_and_data);
   $data = array_shift($prefix_and_data);
   $label = empty($labels[$prefix]) ? $prefix : $labels[$prefix];
   if ($data) {    // create the pbcore_identifier field collection
      $fc_values = array();
      $fc_values['field_name'] = 'field_pbcore_identifier';
      $fc_values['is_new'] = 1;
      $fc_values['field_identifier'][$node->language][]['value'] = $data;
      $fc_values['field_identifier_source'][$node->language][]['value'] = $label;
      $fc = new FieldCollectionItemEntity($fc_values);
      $fc->setHostEntity('node', $node);
      $fc->save();                                                             
   }
}

function get_local_entries() {
   $fields = field_info_fields();
   $local_entries = array();
   foreach  ( $fields as $field ) {
      if ($field['type'] == 'field_kaltura_entryid') {
         $table = 'field_data_' . $field['field_name'];
         $column = $field['field_name'] . '_entryid';
         $result = db_query("SELECT entity_id, $column FROM {$table}");
         foreach ($result as $record) {
            $local_entries[$record->entity_id] = $record->{$column}; 
         }
      }
   }
   return $local_entries;
}

/**
* Get remote entries for use on the page: Import Kaltura Items
**/
function get_importable_entries($order = NULL, $sort = NULL, $limit = 500) {
   $limit = $limit <= 500 ? $limit : 500;
   $sort_order_map = array(
      'Title' => array(
         'asc' => KalturaMediaEntryOrderBy::NAME_ASC,
         'desc' => KalturaMediaEntryOrderBy::NAME_DESC,
         ),
      'Type' => array(
         'asc' => KalturaMediaEntryOrderBy::MEDIA_TYPE_ASC,
         'desc' => KalturaMediaEntryOrderBy::MEDIA_TYPE_DESC,
         ),
      'Created' => array(
         'asc' => KalturaMediaEntryOrderBy::CREATED_AT_ASC,
         'desc' => KalturaMediaEntryOrderBy::CREATED_AT_DESC,
         ),
      'Updated' => array(
         'asc' => KalturaMediaEntryOrderBy::UPDATED_AT_ASC,
         'desc' => KalturaMediaEntryOrderBy::UPDATED_AT_DESC,
         ),
      );
   
   //Set Order By 
   if (isset($order) && isset($sort)) {
      $order_by = $sort_order_map[$order][$sort];
   }
   else {
      $order_by = KalturaMediaEntryOrderBy::CREATED_AT_DESC;
   }
   
   // $session_user = KalturaHelpers::getSessionUser();
   $kaltura_client = KalturaHelpers::getKalturaClient($isAdmin=true); // this is an admin task and should be able to import all entries in the account
   $filter = new KalturaMediaEntryFilter();
   $filter->orderBy = $order_by;
   $pager_filter = new KalturaFilterPager();
   $pager_filter->pageSize =  $limit;
   try {
      $count = $kaltura_client->media->count($filter);
      $pages = ceil($count/$limit);
      $objects = array();
      for ($i = 1; $i <= $pages; $i +=1) { //loop through pages b/c api limits page size to 500
         $pager_filter->pageIndex =  $i;
         $result = $kaltura_client->media->listAction($filter, $pager_filter);
         $objects = array_merge($objects,$result->objects);
      }
   }
   catch ( Exception $e ) {
      $msg = t("Had trouble listing remote entries from Kaltura.");
      _report_kaltura_exception( $e, $msg);
   }
   // Unset entries that already exist locally
   $local_entries = get_local_entries();
   foreach  ( $objects as $key => $entry) {
      if ( in_array($entry->id, $local_entries) ) {
         unset($objects[$key]);
      }
   }
   return $objects;
}



/*
==============
MENU CALLBACKS
==============
*/

function mb_kaltura_autocomplete_collection( $string ) {
   $matches = array();
   if ($string) {
      $result = db_query_range( "SELECT nid, title
         FROM {node} 
         WHERE LOWER(title) 
         LIKE LOWER(:term)
         AND type = 'collection'", 0,20, array(':term' => "%$string%"));
      foreach ( $result as $row ) {
         $value=sprintf('%s [nid:%d]', $row->title, $row->nid); 
         $matches[$value] = check_plain($row->title);
      }
   }
   print drupal_json_encode($matches);
   exit();
}

function mb_kaltura_autocomplete_user( $string ) {
   $matches = array();
   if ($string) {
      //TODO Join with User; Was joining before but 
      $sql = "SELECT u.uid, name, realname
      FROM {users} u, {realname} r 
      WHERE u.uid = r.uid
      AND ( 
      LOWER(realname) LIKE LOWER(:term)
      OR LOWER(name) LIKE LOWER(:term)
      )";
      $result = db_query_range( $sql, 0, 20, array(':term' => "%$string%"));
      
      foreach ( $result as $row ) {
         $name = empty($row->realname) ? $row->name : $row->realname;
         $value=sprintf('%s [uid:%d]', $name, $row->uid); 
         $matches[$value] = check_plain($name);
      }
   }
   print drupal_json_encode($matches);
   exit();
}

function mb_kaltura_link($type, $object, $teaser = FALSE) {
   if ($type == 'node' && in_array($object->type, array('video','audio'))) {
      $links[] = array(
         'attributes' => array('class' => 'view-pbcore-link'),
         'href' => "xml/pbcore/$object->nid",
         'title' => t('View xml metadata'),);
      return $links;
   }
}

function xml_pbcore($nid) {
   $node = node_load($nid);
   $document = _render_kaltura_xml($node);
   header("Content-type: text/xml"); 
   print $document;
}

/**
* when saving a new media item, sometimes the node_kaltura 
* table row details (like thumbnail_url) don't get written.
* Kaltura should be doing this but it isn't so we do it ourselves.
* @todo post this as an issue on d.o
**/
function _write_to_node_kaltura($node) {
   $entry_id = $node->{"field_$node->type"}['und'][0]['entryid'];
   $kaltura_client = KalturaHelpers::getKalturaClient($isAdmin = true);
   $session_user = KalturaHelpers::getSessionUser();
   $entry_details = _get_media_from_entry_id($entry_id);
   
   // check if a row already exists for this entry id
   module_load_include('inc','kaltura','includes/kaltura.admin');
   $entry = kaltura_kmc_obj_to_drupal_array($entry_details);
   $query = db_select('node_kaltura', 'k')
   ->fields('k', array('kaltura_entryid'))
   ->condition('kaltura_entryid', $entry['kaltura_entryid'], '=')
   ->execute()
   ->fetchCol();

   if (empty($query)) {
      $entry['kaltura_created_date'] = REQUEST_TIME; //we have no way when the entry was created on the KMC so the create date is when we received the notifcation
      drupal_write_record('node_kaltura', $entry);
   }
   else {
      drupal_write_record('node_kaltura', $entry, 'kaltura_entryid');
   }
}

/**
* report all kaltura exceptions to watchdog with stack trace and messages
**/
function _report_kaltura_exception($e, $msg) {
   watchdog('mb_kaltura', t('Kaltura Exception: @message, backtrace: <pre>@trace</pre>'), array('@message' => $e->getMessage(), '@trace' => $e->getTrace()));
   $msg .= sprintf( "%s: %s %s <br/> %s %s", get_class($e), $e->getMessage(), $e->getCode(), $e->getFile(), $e->getLine());
   switch ( $e->getCode() ) {
   case 'ENTRY_ID_NOT_FOUND' :
      drupal_set_message( t('Entry not found on Kaltura server: @message', array('@message' => $e->getMessage())));
      break ;
      default :
      drupal_set_message( $msg, "error" ); 
   }
}
/**
* simple keepalive callback to allow browser to ping the drupal and keep session alive during long kaltura uploads 
* which communicate with kaltura but not drupal .
**/
function mb_upload_keepalive() {
   return 'alive';
}
