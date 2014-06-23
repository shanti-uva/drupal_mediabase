<?php
module_load_include('inc','kaltura','includes/kaltura.admin');
$sql = "SELECT nid FROM node where type in ('video','audio') order by created asc";
$nids = db_query($sql)->fetchCol();
$count=0;
foreach ($nids as $nid) {
   $node = node_load ($nid);
   $field = $node->field_pbcore_title; 
   if (!isset($field['und'])) {
   $fc_values = array();
   $fc_values['field_name'] = "field_pbcore_title";
   $fc_values['is_new'] = 1;
   $fc_values["field_title"][$node->language][]['value'] = $node->title;
   $fc_values["field_title_type"][$node->language][]['value'] = 'Clip';
   $fc_values["field_language"][$node->language][]['value'] = 'English';
   $fc = new FieldCollectionItemEntity($fc_values);
   $fc->setHostEntity('node', $node);
   $fc->save();         
   }
   echo PHP_EOL .  ($count += 1) . "/" . count($nids) . "    " . $entry_id ;
}
