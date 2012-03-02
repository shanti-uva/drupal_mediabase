<?php
module_load_include('inc','kaltura','includes/kaltura.admin');
$sql = "SELECT kaltura_entryid FROM node_kaltura where kaltura_entryid <> ''
AND kaltura_thumbnail_url IS NULL";
$entry_ids = db_query($sql)->fetchCol();
$count=0;
foreach ($entry_ids as $entry_id) {
    $kaltura_client = KalturaHelpers::getKalturaClient($isAdmin = TRUE);
    $session_user = KalturaHelpers::getSessionUser();
    $entry_details = $kaltura_client->media->get($entry_id);
   kaltura_update_entry($entry_details);
   echo PHP_EOL .  ($count += 1) . "/" . count($entry_ids) . "    " . $entry_id ;
}

function kaltura_update_entry($entry_details) {
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

