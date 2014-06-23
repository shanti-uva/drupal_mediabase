<?php
module_load_include('inc','kaltura','includes/kaltura.admin');
$sql = "SELECT field_video_entryid, entity_id FROM field_data_field_video";
$video = db_query($sql)->fetchAllKeyed();
$sql = "SELECT field_audio_entryid, entity_id FROM field_data_field_audio";
$audio = db_query($sql)->fetchAllKeyed();
$media = array_merge($video, $audio);

$count=0;
foreach ($media as $entry_id => $nid) {
  
   $count++;
   $sql = "SELECT kaltura_tags FROM node_kaltura where kaltura_entryid = :entry_id";
   $tag_string = trim(db_query($sql, array(':entry_id' => $entry_id))->fetchField());
   
   if (empty($tag_string)) {
      continue;
   }
   echo $tag_string;
   $node=node_load($nid);
   add_tags($node,$tag_string);
   node_save($node);
   echo PHP_EOL .  ($count) . "/" . count($media)  ;
}

function add_tags(&$node, $tag_string) {
   //parse tag string
   
   $tags = explode(',', str_replace(";",',',$tag_string));
   if(count($tags) == 1 && empty($tags[0])) {
      return;
   }
   // save taxo term
   foreach($tags as $tag) {
      $tag=trim($tag);
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


