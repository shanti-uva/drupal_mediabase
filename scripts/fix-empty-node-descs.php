<?php
$sql = "SELECT entity_id FROM field_data_field_description
   WHERE field_description_value = ''";
$etids = db_query($sql)->fetchCol();
var_dump($etids);
entity_delete_multiple('field_collection_item',$etids);


SELECT length(field_description_value) AS len, field_description_value FROM field_data_field_description
   order by len ASC 
