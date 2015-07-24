<?php 

/**
 * Migrate data from old kmap field to new field that uses shanti kmap field module
 */
function mb_bulk_switch_kmap_data(&$node, $oldfield, $newfield, $domain) {
	$flang = field_language('node', $node, $newfield);
	$terms = field_get_items('node', $node, $oldfield);
	if ($domain == 'subjects') {
		foreach($terms as $n => $term) {
		   $kmi = Kmap::createKmapByTid($term['tid']);
		   $tree = $kmi->get_kmap_lineage();
		   $kmarray = mb_bulk_process_kmap_tree($tree, $domain);
		   $node->{$newfield}[$flang][] = $kmarray;
		}
	} else {
		dpm($terms);
	}
}

/**
 * Create the array necessary for shanti kmap field data
 */
function mb_bulk_process_kmap_tree($tree, $domain) {
   $raw = $path = '';
    foreach($tree as $km) {
      $raw .= "<{$km['kmap_id']}> ";
      $path .= '{{' . $km['name'] . '}}';
    }
   $last = array_pop($tree);
   $raw .= "<{$last['kmap_id']}>";
   return array(
      'raw' => $raw,
      'id' => $last['kmap_id'],
      'header' => $last['name'],
      'domain' => $domain,
      'path' => $path,
   );
}