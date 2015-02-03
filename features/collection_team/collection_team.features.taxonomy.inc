<?php
/**
 * @file
 * collection_team.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function collection_team_taxonomy_default_vocabularies() {
  return array(
    'kmap_taxonomy' => array(
      'name' => 'Knowledge Map Taxonomy',
      'machine_name' => 'kmap_taxonomy',
      'description' => 'A taxonomy vocabulary for knowledge maps.',
      'hierarchy' => 0,
      'module' => 'kmap_taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
