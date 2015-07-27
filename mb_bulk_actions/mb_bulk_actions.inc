<?php 

/**
 * Migrate data from old kmap field to new field that uses shanti kmap field module
 */
function mb_bulk_switch_kmap_data(&$node, $oldfield, $newfield, $domain) {
	$flang = field_language('node', $node, $newfield);
	$terms = field_get_items('node', $node, $oldfield);
	if ($domain == 'subjects') {
		module_load_include('inc', 'kmaps_taxonomy', 'includes/kmap');
		foreach($terms as $n => $term) {
		   $kmi = Kmap::createKmapByTid($term['tid']);
		   $tree = $kmi->get_kmap_lineage();
		   $kmarray = mb_bulk_process_kmap_tree($tree);
		   $node->{$newfield}[$flang][] = $kmarray;
		}
	} else if ($domain == 'places') {
		
		module_load_include('inc', 'mb_location', 'mb_location');
		foreach ($terms as $loc) {
			$t = taxonomy_term_load($loc['tid']);
			$pid = $t->place_dictionary_id['und'][0]['value'];
			$tree = fetch_place_dict_details($pid);
			$kmarray = mb_bulk_process_place_tree($tree);
		  $node->{$newfield}[$flang][] = $kmarray;
		}
	}
}

/**
 * Create the array necessary for shanti kmap subject field data
 */
function mb_bulk_process_kmap_tree($tree) {
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
		'domain' => 'subjects',
		'path' => $path,
	);
}


/**
 * Create the array necessary for shanti kmap place field data
 */
function mb_bulk_process_place_tree($tree) {
	$tree = array_reverse($tree);
	$raw = $path = '';
	foreach($tree as $kmid => $name) {
		$raw .= "<{$kmid}> ";
		$path .= '{{' . $name . '}}';
	}
	$lastind = array_pop(array_keys($tree));
	$raw .= "<{$lastind}>";
	return array(
		'raw' => $raw,
		'id' => $lastind,
		'header' => $tree[$lastind],
		'domain' => 'places',
		'path' => $path,
	);
}
