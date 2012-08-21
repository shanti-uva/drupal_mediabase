<?php

define('ROOT_GID', 1);

$query = new EntityFieldQuery();
$result = $query
   ->entityCondition('entity_type', 'node')
   ->propertyCondition('type', array('video', 'audio'))
   ->fieldCondition('group_audience', 'gid', ROOT_GID, '=', 0)
   ->execute();
   
   $bad_nodes = array();
   foreach ($result['node'] as $nid => $dummy) {
      $node = node_load($nid);
      echo  "$node->nid - $node->title" . PHP_EOL;
      //var_dump($node->field_characteristic);
      if ( !empty($node->field_characteristic['und'])) {
         $parents = array();
         foreach(   $node->field_characteristic['und'] as $idx => $tid_arr) {
            $tid = $tid_arr['tid'];
            $parent = array_pop(taxonomy_get_parents($tid));
            $parents[] = $parent->tid;
            echo "parents: $parent->tid " ;//. implode(",",  array_keys($parents)) . PHP_EOL;
            echo "tid: " . $tid . PHP_EOL;
         }
         if ( ! in_array(5, $parents) && ! in_array(6, $parents) ) {
            $bad_nodes[] = $node;
         }
         
      } else { // no kmaps at all
            $bad_nodes[$node->nid] = $node;
      }
   }
   
   foreach  ($bad_nodes as $node){
            echo  "BAD NODE $node->nid - $node->title" . PHP_EOL;
   }


