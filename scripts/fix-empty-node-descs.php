<?php
$sql = "SELECT entity_id FROM field_data_field_description
   WHERE field_description_value = ''";
$etids = db_query($sql)->fetchCol();
entity_delete_multiple('field_collection_item',$etids);


