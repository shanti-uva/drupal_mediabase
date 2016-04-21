<?php 

/**
 * Update an image from the old collection or team to the new collection or subcollection style.
 */
function mb_bulk_update_image(&$node) {
     if (!empty($node->field_images)) {
         // move image info from old field to new
         $imginfo = array();
         $imginfo = array_merge($imginfo,$node->field_images);
         $node->field_general_featured_image = $imginfo;
         // Update the image file if it doesn't have type=image (because media has been installed)
         // TODO: Should this be done with all images?
         $fid = $node->field_general_featured_image['und'][0]['fid'];
         $file = file_load($fid);
         if ($file && (empty($file->type) || $file->type == "undefined")) {
             $file->type = 'image';
             file_save($file);
         }
     }
}

/**
 * Migrate data from old kmap field to new field that uses shanti kmap field module
 * 
 * New Kmap data needs to be added to node by adding the field kmap data in the following format:
 *  array('field_subject' => array('F652' => array('id' => 652, 'header' => 'Ü-Tsang group', 'path' => '{{dd}}{{dd}}', 'domain'=>'subjects')))
 * Can't use existing Kmaps data because
 */
function mb_bulk_switch_kmap_data(&$node, $oldfield, $newfield, $domain) {
	$flang = field_language('node', $node, $newfield);
	$terms = field_get_items('node', $node, $oldfield);
	if ($terms && $domain == 'subjects') {
		module_load_include('inc', 'kmaps_taxonomy', 'includes/kmap');
		foreach($terms as $n => $term) {
			// Check if term has already been transferred
			if (!kmap_term_transferred($term['tid'], $newfield, $node)) {
			  $kmi = Kmap::createKmapByTid($term['tid']);
			  $node->{$newfield}[$flang][] = mb_bulk_process_kmap_data($kmi->get_kmap_id(), $domain);
			}
		}
	} else if ($terms && $domain == 'places') {
		module_load_include('inc', 'mb_location', 'mb_location');
		foreach ($terms as $loc) {
			if (!kmap_term_transferred($loc['tid'], $newfield, $node)) {
				$t = taxonomy_term_load($loc['tid']);
				if (isset($t->place_dictionary_id['und'][0]['value'])) {
					$pid = $t->place_dictionary_id['und'][0]['value'];
				  $node->{$newfield}[$flang][] = mb_bulk_process_kmap_data($pid, $domain);
				}
			}
		}
	}
}

/**
 * Create the array necessary for shanti kmap subject field data used by both subjects and places
 * Uses functions from shanti_kmap_fields to look up and update $raw and $path values
 */
function mb_bulk_process_kmap_data($kid, $domain) {
	// Get Term header
	$server = "http://{$domain}.kmaps.virginia.edu";
	$kma = new KMapsAPI($domain, $server); // from shanti_kmaps_fields
	$kma->setKMapID($kid);
	$kmdata = $kma->execute();
	$pts = explode('|', $kmdata[$kid]);
	$header = trim($pts[0]);
	
	// Get the ancestors and put in RAW
	$kmapids = _shanti_kmaps_fields_get_related_kmap_terms($domain,$kid);
	$raw_string = '<'.implode('> <',$kmapids).'>'; // CREATE RAW FUNCTION
	$raw_string = preg_replace('/(subjects|places)-/','',$raw_string); // Kludge 
	
	// return array defining kmap field value
	return array(
    'raw'     => $raw_string,
    'id'      => $kid,
    'header'  => $header,
    'path'    => _shanti_kmaps_fields_get_kmap_path($domain,$kid), 
    'domain'  => $domain,
  );
}


/**
 * Create the array necessary for shanti kmap place field data
 
function mb_bulk_process_place_tree($tree) {
	$tree = array_reverse($tree, TRUE); // TRUE == Preserve numeric keys, very important
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
*/

/**
 * Check if term already transferred
 */
function kmap_term_transferred($tid, $newfn, $node) {
	$newfield = field_get_items('node', $node, $newfn);
	$term = taxonomy_term_load($tid);
	if ($newfield && $term) {
		$kmid = '';
		if (isset($term->kmap_id['und'][0]['value'])) {
			$kmid = $term->kmap_id['und'][0]['value'];
		} else if (isset($term->place_dictionary_id['und'][0]['value'])) {
			$kmid = $term->place_dictionary_id['und'][0]['value'];
		}
		foreach($newfield as $n2 => $item2) {
		   if ($item2['id'] == $kmid) {
		      return TRUE;
		   }
		}
	}
	return FALSE;
}
