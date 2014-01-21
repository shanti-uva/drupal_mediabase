<?php 

function _is_mb_collection($filter) {
  $path = "collection/$filter";
  $n = drupal_lookup_path("source", $path);
  if($n) {
    return TRUE;
  } 
  return FALSE;
}
