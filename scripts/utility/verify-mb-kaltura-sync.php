<?php

// This script verifies that every kaltura entry id in the mediabase exists on the server, 
// (i.e. has not been deleted via the KMC or API.

$sql = "SELECT count(*) FROM field_data_field_video WHERE field_video_entryid IS NULL OR field_video_entryid = ''";
echo PHP_EOL,"Empty Videos: ", $empty_video_count = db_query($sql)->fetchField();

$sql = "SELECT count(field_video_entryid) from field_data_field_video WHERE field_video_entryid NOT IN (SELECT kaltura_entryid FROM node_kaltura)";
echo PHP_EOL,"Bad Videos: ", $bad_video_count = db_query($sql)->fetchField();

$sql = "SELECT count(*) FROM field_data_field_audio WHERE field_audio_entryid IS NULL OR field_audio_entryid = ''";
echo PHP_EOL,"Empty Audios: ", $empty_audio_count = db_query($sql)->fetchField();

$sql = "SELECT count(field_audio_entryid) from field_data_field_audio WHERE field_audio_entryid NOT IN (SELECT kaltura_entryid FROM node_kaltura)";
echo PHP_EOL,"Bad Audios: ",$bad_audio_count = db_query($sql)->fetchField();

$sql = "SELECT kaltura_entryid FROM node_kaltura";
$entry_ids = db_query($sql)->fetchCol();
$count=0;
foreach ($entry_ids as $entry_id) {
   echo  PHP_EOL, ++$count, " of ", count($entry_ids), " ", $entry_id;
    $kaltura_client = KalturaHelpers::getKalturaClient($isAdmin);
    $session_user = KalturaHelpers::getSessionUser();
    $entry_details = $kaltura_client->media->get($entry_id);
    echo " check: ", $entry_details->createdAt;
    //dd($entry_details, "entry_details");
    //if ($count++ > 5) break;
}

