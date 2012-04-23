<?php
/**
 * @file
 * audio_video.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function audio_video_field_default_fields() {
  $fields = array();

  // Exported field: 'field_collection_item-field_av_file-field_workflow_note'
  $fields['field_collection_item-field_av_file-field_workflow_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_workflow_note',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_av_file',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_workflow_note',
      'label' => 'A/V File Note',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_av_file-field_workflow_status'
  $fields['field_collection_item-field_av_file-field_workflow_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_workflow_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'unchecked' => 'unchecked',
          'verified' => 'verified',
          'needs work' => 'needs work',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_av_file',
      'default_value' => array(
        0 => array(
          'value' => 'unchecked',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_workflow_status',
      'label' => 'A/V File Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_catalog_record-field_workflow_note'
  $fields['field_collection_item-field_catalog_record-field_workflow_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_workflow_note',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_catalog_record',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_workflow_note',
      'label' => 'Catalog Record Note',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_catalog_record-field_workflow_status'
  $fields['field_collection_item-field_catalog_record-field_workflow_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_workflow_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'unchecked' => 'unchecked',
          'verified' => 'verified',
          'needs work' => 'needs work',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_catalog_record',
      'default_value' => array(
        0 => array(
          'value' => 'unchecked',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_workflow_status',
      'label' => 'Catalog Record Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_kmap_annotation-field_annot_format'
  $fields['field_collection_item-field_kmap_annotation-field_annot_format'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_annot_format',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'first_last' => 'First and last',
          'last' => 'Last',
          'last_plus_parent' => 'Last plus parent',
          'full' => 'Full',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_kmap_annotation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_annot_format',
      'label' => 'Format',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_kmap_annotation-field_annot_note'
  $fields['field_collection_item-field_kmap_annotation-field_annot_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_annot_note',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_kmap_annotation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_annot_note',
      'label' => 'Note',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_kmap_annotation-field_annot_numeric_label'
  $fields['field_collection_item-field_kmap_annotation-field_annot_numeric_label'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_annot_numeric_label',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_kmap_annotation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_annot_numeric_label',
      'label' => 'Numeric Label',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_kmap_annotation-field_annot_text_label'
  $fields['field_collection_item-field_kmap_annotation-field_annot_text_label'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_annot_text_label',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_kmap_annotation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_annot_text_label',
      'label' => 'Text Label',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_kmap_annotation-field_tid'
  $fields['field_collection_item-field_kmap_annotation-field_tid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tid',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_kmap_annotation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_tid',
      'label' => 'Tid',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_kmap_annotation-kmap_id'
  $fields['field_collection_item-field_kmap_annotation-kmap_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'kmap_id',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'kmap_taxonomy',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_kmap_annotation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'kmap_id',
      'label' => 'Kmap Id',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_contributor-field_contributor'
  $fields['field_collection_item-field_pbcore_contributor-field_contributor'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_contributor',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_contributor',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_contributor',
      'label' => 'Contributor',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_contributor-field_contributor_role'
  $fields['field_collection_item-field_pbcore_contributor-field_contributor_role'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_contributor_role',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Actor' => 'Actor',
          'Advisor' => 'Advisor',
          'Anchor' => 'Anchor',
          'Arranger' => 'Arranger',
          'Artist' => 'Artist',
          'Assistant Cameraman' => 'Assistant Cameraman',
          'Assistant Director' => 'Assistant Director',
          'Assistant Editor' => 'Assistant Editor',
          'Assistant Producer - Film' => 'Assistant Producer - Film',
          'Assistant Researcher' => 'Assistant Researcher',
          'Assistant Stage Manager' => 'Assistant Stage Manager',
          'Assistant to the Producer' => 'Assistant to the Producer',
          'Assistant Unit Manager' => 'Assistant Unit Manager',
          'Associate Director' => 'Associate Director',
          'Associate Producer' => 'Associate Producer',
          'Audio' => 'Audio',
          'Audio Assistant' => 'Audio Assistant',
          'Audio Editor' => 'Audio Editor',
          'Audio Engineer' => 'Audio Engineer',
          'Audio Mixer' => 'Audio Mixer',
          'Author' => 'Author',
          'Boom Operator' => 'Boom Operator',
          'Camera Assistant' => 'Camera Assistant',
          'Cameraperson' => 'Cameraperson',
          'Casting' => 'Casting',
          'Chief Camera - Segment' => 'Chief Camera - Segment',
          'Cinematographer' => 'Cinematographer',
          'Commentary Editor' => 'Commentary Editor',
          'Commentator' => 'Commentator',
          'Community Coordinator' => 'Community Coordinator',
          'Composer' => 'Composer',
          'Concept' => 'Concept',
          'Conductor' => 'Conductor',
          'Contributor' => 'Contributor',
          'Co-Producer' => 'Co-Producer',
          'Crane' => 'Crane',
          'Dancer' => 'Dancer',
          'Director' => 'Director',
          'Director - Artistic' => 'Director - Artistic',
          'Director - Dance' => 'Director - Dance',
          'Director - Doc Material' => 'Director - Doc Material',
          'Director - Segment' => 'Director - Segment',
          'Edit Programmer' => 'Edit Programmer',
          'Editor' => 'Editor',
          'Editor - graphics' => 'Editor - graphics',
          'Editor - Segment' => 'Editor - Segment',
          'Engineer' => 'Engineer',
          'Essayist' => 'Essayist',
          'Executive Producer' => 'Executive Producer',
          'Facilitator' => 'Facilitator',
          'Fashion Consultant' => 'Fashion Consultant',
          'Film Editor' => 'Film Editor',
          'Film Sound' => 'Film Sound',
          'Filmmaker' => 'Filmmaker',
          'Floor Manager' => 'Floor Manager',
          'Funder' => 'Funder',
          'Gaffer' => 'Gaffer',
          'Graphic Designer' => 'Graphic Designer',
          'Graphics' => 'Graphics',
          'Guest' => 'Guest',
          'Host' => 'Host',
          'Illustrator' => 'Illustrator',
          'Instrumentalist' => 'Instrumentalist',
          'Intern' => 'Intern',
          'Interpreter' => 'Interpreter',
          'Interviewee' => 'Interviewee',
          'Interviewer' => 'Interviewer',
          'Lecturer' => 'Lecturer',
          'Lighting' => 'Lighting',
          'Lighting Assistant' => 'Lighting Assistant',
          'Lighting Director' => 'Lighting Director',
          'Make-Up' => 'Make-Up',
          'Mobile Unit Supervisor' => 'Mobile Unit Supervisor',
          'Moderator' => 'Moderator',
          'Music Assistant' => 'Music Assistant',
          'Music Coordinator' => 'Music Coordinator',
          'Music Director' => 'Music Director',
          'Musical Staging' => 'Musical Staging',
          'Musician' => 'Musician',
          'Narrator' => 'Narrator',
          'News Director' => 'News Director',
          'Panelist' => 'Panelist',
          'Performer' => 'Performer',
          'Performing Group' => 'Performing Group',
          'Photographer' => 'Photographer',
          'Post-prod Audio' => 'Post-prod Audio',
          'Post-prod Supervisor' => 'Post-prod Supervisor',
          'Producer' => 'Producer',
          'Producer - Segment' => 'Producer - Segment',
          'Production Assistant' => 'Production Assistant',
          'Production Manager' => 'Production Manager',
          'Production Personnel' => 'Production Personnel',
          'Production Secretary' => 'Production Secretary',
          'Production Unit' => 'Production Unit',
          'Project Director' => 'Project Director',
          'Publicist' => 'Publicist',
          'Reader' => 'Reader',
          'Recording engineer' => 'Recording engineer',
          'Recordist' => 'Recordist',
          'Reporter' => 'Reporter',
          'Researcher' => 'Researcher',
          'Scenic Design' => 'Scenic Design',
          'Senior Editor' => 'Senior Editor',
          'Senior Researcher' => 'Senior Researcher',
          'Sound' => 'Sound',
          'Sound Mixer' => 'Sound Mixer',
          'Speaker' => 'Speaker',
          'Staff Volunteer' => 'Staff Volunteer',
          'Stage Manager' => 'Stage Manager',
          'Still Photography' => 'Still Photography',
          'Studio Technician' => 'Studio Technician',
          'Subject' => 'Subject',
          'Switcher' => 'Switcher',
          'Synthesis' => 'Synthesis',
          'Synthesis Musician' => 'Synthesis Musician',
          'Talent Coordinator' => 'Talent Coordinator',
          'Technical Consultant' => 'Technical Consultant',
          'Technical Director' => 'Technical Director',
          'Technical Production' => 'Technical Production',
          'Theme Music' => 'Theme Music',
          'Titlist' => 'Titlist',
          'Translator' => 'Translator',
          'Unit Manager' => 'Unit Manager',
          'Video' => 'Video',
          'Videotape Assembly' => 'Videotape Assembly',
          'Videotape Editor' => 'Videotape Editor',
          'Videotape Engineer' => 'Videotape Engineer',
          'Videotape Recordist' => 'Videotape Recordist',
          'Vidifont Operator' => 'Vidifont Operator',
          'Vocalist' => 'Vocalist',
          'VTR Recordist' => 'VTR Recordist',
          'Wardrobe' => 'Wardrobe',
          'Writer' => 'Writer',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_contributor',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_contributor_role',
      'label' => 'Contributor Role',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_coverage-field_time'
  $fields['field_collection_item-field_pbcore_coverage-field_time'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_time',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_coverage',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_time',
      'label' => 'Time',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_creator-field_creator'
  $fields['field_collection_item-field_pbcore_creator-field_creator'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_creator',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_creator',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_creator',
      'label' => 'Creator',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_creator-field_creator_role'
  $fields['field_collection_item-field_pbcore_creator-field_creator_role'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_creator_role',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Artist' => 'Artist',
          'Associate Producer' => 'Associate Producer',
          'Cinematographer' => 'Cinematographer',
          'Composer' => 'Composer',
          'Co Producer' => 'Co Producer',
          'Creator' => 'Creator',
          'Director' => 'Director',
          'Editor' => 'Editor',
          'Essayist' => 'Essayist',
          'Executive Producer' => 'Executive Producer',
          'Host' => 'Host',
          'Illustrator' => 'Illustrator',
          'Interviewer' => 'Interviewer',
          'Moderator' => 'Moderator',
          'Photographer' => 'Photographer',
          'Producer' => 'Producer',
          'Production Unit' => 'Production Unit',
          'Reporter' => 'Reporter',
          'Writer' => 'Writer',
          'Other' => 'Other',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_creator',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_creator_role',
      'label' => 'Creator Role',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_description-field_description'
  $fields['field_collection_item-field_pbcore_description-field_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_description',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_description',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_description-field_description_type'
  $fields['field_collection_item-field_pbcore_description-field_description_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_description_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Package' => 'Package',
          'Project' => 'Project',
          'Collection' => 'Collection',
          'Series' => 'Series',
          'Episode' => 'Episode',
          'Program' => 'Program',
          'Segment' => 'Segment',
          'Clip' => 'Clip',
          'Scene' => 'Scene',
          'Shot' => 'Shot',
          'Selection or Excerpt' => 'Selection or Excerpt',
          'Alternative' => 'Alternative',
          'Caption File' => 'Caption File',
          'Descriptive Audio' => 'Descriptive Audio',
          'Transcript File' => 'Transcript File',
          'Music' => 'Music',
          'Nature or ambient sound' => 'Nature or ambient sound',
          'Song' => 'Song',
          'Voice' => 'Voice',
          'Art Work' => 'Art Work',
          'Chart' => 'Chart',
          'Diagram' => 'Diagram',
          'Drawing' => 'Drawing',
          'Graphic' => 'Graphic',
          'Map' => 'Map',
          'Model' => 'Model',
          'Photograph' => 'Photograph',
          'Picture' => 'Picture',
          'Postcard' => 'Postcard',
          'Poster' => 'Poster',
          'Courseware Class' => 'Courseware Class',
          'Courseware Module' => 'Courseware Module',
          'Drill and Practice' => 'Drill and Practice',
          'Game' => 'Game',
          'Model Building' => 'Model Building',
          'Quiz' => 'Quiz',
          'Reflection Activity' => 'Reflection Activity',
          'Role Play' => 'Role Play',
          'Self Assessment' => 'Self Assessment',
          'Simulation' => 'Simulation',
          'Test' => 'Test',
          'Web page/site' => 'Web page/site',
          'Linear Presentation' => 'Linear Presentation',
          'Multimedia Presentation' => 'Multimedia Presentation',
          'Slide Show' => 'Slide Show',
          'Traditional Academic Poster' => 'Traditional Academic Poster',
          'Electronic Academic Poster' => 'Electronic Academic Poster',
          'Kiosk Event' => 'Kiosk Event',
          'Syllabus' => 'Syllabus',
          'Lesson Plan' => 'Lesson Plan',
          'Study Guide' => 'Study Guide',
          'Teacher Guide' => 'Teacher Guide',
          'Article' => 'Article',
          'Book' => 'Book',
          'Chapter' => 'Chapter',
          'Issue' => 'Issue',
          'Lyrics' => 'Lyrics',
          'Manuscript' => 'Manuscript',
          'Periodical' => 'Periodical',
          'Score' => 'Score',
          'Abridged Version' => 'Abridged Version',
          'Air Version' => 'Air Version',
          'Captioned Version' => 'Captioned Version',
          'Cell Phone Version' => 'Cell Phone Version',
          'Full Version' => 'Full Version',
          'iPod Version' => 'iPod Version',
          'Packaging Version' => 'Packaging Version',
          'Pledge Version' => 'Pledge Version',
          'Published Version' => 'Published Version',
          'reTitle' => 'reTitle',
          'Web Version' => 'Web Version',
          'Working Title' => 'Working Title',
          'Other' => 'Other',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_description',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_description_type',
      'label' => 'Description Type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_description-field_language'
  $fields['field_collection_item-field_pbcore_description-field_language'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_language',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Abkhazian' => 'Abkhazian',
          'Afar' => 'Afar',
          'Afrikaans' => 'Afrikaans',
          'Akan' => 'Akan',
          'Albanian' => 'Albanian',
          'Amharic' => 'Amharic',
          'Arabic' => 'Arabic',
          'Aragonese' => 'Aragonese',
          'Armenian' => 'Armenian',
          'Assamese' => 'Assamese',
          'Avaric' => 'Avaric',
          'Avestan' => 'Avestan',
          'Aymara' => 'Aymara',
          'Azerbaijani' => 'Azerbaijani',
          'Bambara' => 'Bambara',
          'Bashkir' => 'Bashkir',
          'Basque' => 'Basque',
          'Belarusian' => 'Belarusian',
          'Bengali' => 'Bengali',
          'Bihari languages' => 'Bihari languages',
          'Bislama' => 'Bislama',
          'Bosnian' => 'Bosnian',
          'Breton' => 'Breton',
          'Bulgarian' => 'Bulgarian',
          'Burmese' => 'Burmese',
          'Catalan' => 'Catalan',
          'Central Khmer' => 'Central Khmer',
          'Chamorro' => 'Chamorro',
          'Chechen' => 'Chechen',
          'Chichewa' => 'Chichewa',
          'Chinese' => 'Chinese',
          'Church Slavic' => 'Church Slavic',
          'Chuvash' => 'Chuvash',
          'Cornish' => 'Cornish',
          'Corsican' => 'Corsican',
          'Cree' => 'Cree',
          'Croatian' => 'Croatian',
          'Czech' => 'Czech',
          'Danish' => 'Danish',
          'Divehi' => 'Divehi',
          'Dutch Flemish' => 'Dutch Flemish',
          'Dzongkha' => 'Dzongkha',
          'English' => 'English',
          'Esperanto' => 'Esperanto',
          'Estonian' => 'Estonian',
          'Ewe' => 'Ewe',
          'Faroese' => 'Faroese',
          'Fijian' => 'Fijian',
          'Finnish' => 'Finnish',
          'French' => 'French',
          'Fulah' => 'Fulah',
          'Galician' => 'Galician',
          'Ganda' => 'Ganda',
          'Georgian' => 'Georgian',
          'German' => 'German',
          'Greek' => 'Greek',
          'Guarani' => 'Guarani',
          'Gujarati' => 'Gujarati',
          'Haitian Creole' => 'Haitian Creole',
          'Hausa' => 'Hausa',
          'Hebrew' => 'Hebrew',
          'Herero' => 'Herero',
          'Hindi' => 'Hindi',
          'Hiri Motu' => 'Hiri Motu',
          'Hungarian' => 'Hungarian',
          'Icelandic' => 'Icelandic',
          'Ido' => 'Ido',
          'Igbo' => 'Igbo',
          'Indonesian' => 'Indonesian',
          'Interlingua International Auxiliary Language Association' => 'Interlingua International Auxiliary Language Association',
          'Interlingue' => 'Interlingue',
          'Inuktitut' => 'Inuktitut',
          'Inupiaq' => 'Inupiaq',
          'Irish' => 'Irish',
          'Italian' => 'Italian',
          'Japanese' => 'Japanese',
          'Javanese' => 'Javanese',
          'Kalaallisut' => 'Kalaallisut',
          'Kannada' => 'Kannada',
          'Kanuri' => 'Kanuri',
          'Kashmiri' => 'Kashmiri',
          'Kazakh' => 'Kazakh',
          'Kikuyu Gikuyu' => 'Kikuyu Gikuyu',
          'Kinyarwanda' => 'Kinyarwanda',
          'Kirghiz' => 'Kirghiz',
          'Komi' => 'Komi',
          'Kongo' => 'Kongo',
          'Korean' => 'Korean',
          'Kuanyama Kwanyama' => 'Kuanyama Kwanyama',
          'Kurdish' => 'Kurdish',
          'Lao' => 'Lao',
          'Latin' => 'Latin',
          'Latvian' => 'Latvian',
          'Limburgish' => 'Limburgish',
          'Lingala' => 'Lingala',
          'Lithuanian' => 'Lithuanian',
          'Luba-Katanga' => 'Luba-Katanga',
          'Luxembourgish' => 'Luxembourgish',
          'Macedonian' => 'Macedonian',
          'Malagasy' => 'Malagasy',
          'Malay' => 'Malay',
          'Malayalam' => 'Malayalam',
          'Maltese' => 'Maltese',
          'Manx' => 'Manx',
          'Maori' => 'Maori',
          'Marathi' => 'Marathi',
          'Marshallese' => 'Marshallese',
          'Moldavian Moldovan' => 'Moldavian Moldovan',
          'Mongolian' => 'Mongolian',
          'Nauru' => 'Nauru',
          'Navajo Navaho' => 'Navajo Navaho',
          'Ndonga' => 'Ndonga',
          'Nepali' => 'Nepali',
          'North Ndebele' => 'North Ndebele',
          'Northern Sami' => 'Northern Sami',
          'Norwegian' => 'Norwegian',
          'Norwegian Nynorsk' => 'Norwegian Nynorsk',
          'Occitan' => 'Occitan',
          'Ojibwa' => 'Ojibwa',
          'Oriya' => 'Oriya',
          'Oromo' => 'Oromo',
          'Ossetian Ossetic' => 'Ossetian Ossetic',
          'Pali' => 'Pali',
          'Panjabi Punjabi' => 'Panjabi Punjabi',
          'Persian' => 'Persian',
          'Polish' => 'Polish',
          'Portuguese' => 'Portuguese',
          'Pushto Pashto' => 'Pushto Pashto',
          'Quechua' => 'Quechua',
          'Romanian' => 'Romanian',
          'Romansh' => 'Romansh',
          'Rundi' => 'Rundi',
          'Russian' => 'Russian',
          'Rusyn' => 'Rusyn',
          'Samoan' => 'Samoan',
          'Sango' => 'Sango',
          'Sanskrit' => 'Sanskrit',
          'Sardinian' => 'Sardinian',
          'Scottish Gaelic' => 'Scottish Gaelic',
          'Serbian' => 'Serbian',
          'Serbo-Croatian' => 'Serbo-Croatian',
          'Shona' => 'Shona',
          'Sichuan Yi' => 'Sichuan Yi',
          'Sindhi' => 'Sindhi',
          'Sinhalese' => 'Sinhalese',
          'Slovak' => 'Slovak',
          'Slovenian' => 'Slovenian',
          'Somali' => 'Somali',
          'Sotho, Southern' => 'Sotho, Southern',
          'South Ndebele' => 'South Ndebele',
          'Spanish Castilian' => 'Spanish Castilian',
          'Sundanese' => 'Sundanese',
          'Swahili' => 'Swahili',
          'Swati' => 'Swati',
          'Swedish' => 'Swedish',
          'Tagalog' => 'Tagalog',
          'Tahitian' => 'Tahitian',
          'Tajik' => 'Tajik',
          'Tamil' => 'Tamil',
          'Tatar' => 'Tatar',
          'Telugu' => 'Telugu',
          'Thai' => 'Thai',
          'Tibetan' => 'Tibetan',
          'Tigrinya' => 'Tigrinya',
          'Tonga' => 'Tonga',
          'Tsonga' => 'Tsonga',
          'Tswana' => 'Tswana',
          'Turkish' => 'Turkish',
          'Turkmen' => 'Turkmen',
          'Twi' => 'Twi',
          'Uighur' => 'Uighur',
          'Ukrainian' => 'Ukrainian',
          'Urdu' => 'Urdu',
          'Uzbek' => 'Uzbek',
          'Venda' => 'Venda',
          'Vietnamese' => 'Vietnamese',
          'Walloon' => 'Walloon',
          'Welsh' => 'Welsh',
          'Western Frisian' => 'Western Frisian',
          'Wolof' => 'Wolof',
          'Xhosa' => 'Xhosa',
          'Yiddish' => 'Yiddish',
          'Yoruba' => 'Yoruba',
          'Zhuang Chuang' => 'Zhuang Chuang',
          'Zulu' => 'Zulu',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_description',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_language',
      'label' => 'Description Language',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_extension-field_extension'
  $fields['field_collection_item-field_pbcore_extension-field_extension'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_extension',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_extension',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_extension',
      'label' => 'Extension',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_extension-field_extension_authority'
  $fields['field_collection_item-field_pbcore_extension-field_extension_authority'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_extension_authority',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_extension',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_extension_authority',
      'label' => 'Extension Authority',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_format_id-field_format_id'
  $fields['field_collection_item-field_pbcore_format_id-field_format_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_format_id',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_format_id',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_format_id',
      'label' => 'Format Id',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_format_id-field_format_id_source'
  $fields['field_collection_item-field_pbcore_format_id-field_format_id_source'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_format_id_source',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_format_id',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_format_id_source',
      'label' => 'Format Id Source',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_identifier-field_identifier'
  $fields['field_collection_item-field_pbcore_identifier-field_identifier'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_identifier',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_identifier',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_identifier',
      'label' => 'Identifier',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_identifier-field_identifier_source'
  $fields['field_collection_item-field_pbcore_identifier-field_identifier_source'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_identifier_source',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_identifier',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_identifier_source',
      'label' => 'Identifier Source',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_alternate_modes'
  $fields['field_collection_item-field_pbcore_instantiation-field_alternate_modes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_alternate_modes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '20',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_alternate_modes',
      'label' => 'Alternate Modes',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_aspect_ratio'
  $fields['field_collection_item-field_pbcore_instantiation-field_aspect_ratio'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_aspect_ratio',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          '4 to 3' => '4 to 3',
          '4 to 3 16 to 9 letterbox' => '4 to 3 16 to 9 letterbox',
          '4 to 3 16 to 9 anamorphic' => '4 to 3 16 to 9 anamorphic',
          '16 to 9' => '16 to 9',
          '5_5 to 3' => '5_5 to 3',
          '7 to 3 Panavision or CinemaScope' => '7 to 3 Panavision or CinemaScope',
          '2_35 to 1' => '2_35 to 1',
          '1_85 to 1' => '1_85 to 1',
          'Other' => 'Other',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '14',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_aspect_ratio',
      'label' => 'Aspect Ratio',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_bit_depth'
  $fields['field_collection_item-field_pbcore_instantiation-field_bit_depth'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_bit_depth',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          '8 bit' => '8 bit',
          '10 bit' => '10 bit',
          '16 bit' => '16 bit',
          '20 bit' => '20 bit',
          '24 bit' => '24 bit',
          '32 bit' => '32 bit',
          'Other' => 'Other',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '11',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_bit_depth',
      'label' => 'Bit Depth',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_channel_conf'
  $fields['field_collection_item-field_pbcore_instantiation-field_channel_conf'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_channel_conf',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '18',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_channel_conf',
      'label' => 'Channel Config',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_colors'
  $fields['field_collection_item-field_pbcore_instantiation-field_colors'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_colors',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'B and W' => 'B and W',
          'Grayscale' => 'Grayscale',
          'Color' => 'Color',
          'B and W with grayscale sequences' => 'B and W with grayscale sequences',
          'B and W with color sequences' => 'B and W with color sequences',
          'Grayscale with B and W sequences' => 'Grayscale with B and W sequences',
          'Grayscale with color sequences' => 'Grayscale with color sequences',
          'Color with B and W sequences' => 'Color with B and W sequences',
          'Color with grayscale sequences' => 'Color with grayscale sequences',
          'Other' => 'Other',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '16',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_colors',
      'label' => 'Colors',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_data_rate'
  $fields['field_collection_item-field_pbcore_instantiation-field_data_rate'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_data_rate',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_data_rate',
      'label' => 'Data Rate',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_date_created'
  $fields['field_collection_item-field_pbcore_instantiation-field_date_created'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date_created',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '1',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_date_created',
      'label' => 'Date Created',
      'required' => 0,
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => '15',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_date_issued'
  $fields['field_collection_item-field_pbcore_instantiation-field_date_issued'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date_issued',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '1',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_date_issued',
      'label' => 'Date Issued',
      'required' => 0,
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => '15',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '1860:+3',
        ),
        'type' => 'date_popup',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_digital_format'
  $fields['field_collection_item-field_pbcore_instantiation-field_digital_format'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_digital_format',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'video 3gpp' => 'video 3gpp',
          'video 3gpp2' => 'video 3gpp2',
          'video 3gpp tt' => 'video 3gpp tt',
          'video BMPEG' => 'video BMPEG',
          'video BT656' => 'video BT656',
          'video CelB' => 'video CelB',
          'video DV' => 'video DV',
          'video H261' => 'video H261',
          'video H263' => 'video H263',
          'video H263 1998' => 'video H263 1998',
          'video H263 2000' => 'video H263 2000',
          'video H264' => 'video H264',
          'video JPEG' => 'video JPEG',
          'video MJ2' => 'video MJ2',
          'video MP1S' => 'video MP1S',
          'video MP2P' => 'video MP2P',
          'video MP2T' => 'video MP2T',
          'video mp4' => 'video mp4',
          'video MP4V ES' => 'video MP4V ES',
          'video MPV' => 'video MPV',
          'video mpeg' => 'video mpeg',
          'video mpeg4 generic' => 'video mpeg4 generic',
          'video nv' => 'video nv',
          'video parityfec' => 'video parityfec',
          'video pointer' => 'video pointer',
          'video quicktime' => 'video quicktime',
          'video raw' => 'video raw',
          'video rtx' => 'video rtx',
          'video SMPTE292M' => 'video SMPTE292M',
          'video vc1' => 'video vc1',
          'video vnd_dlna_mpeg tts' => 'video vnd_dlna_mpeg tts',
          'video vnd_fvt' => 'video vnd_fvt',
          'video vnd_hns_video' => 'video vnd_hns_video',
          'video vnd_motorola_video' => 'video vnd_motorola_video',
          'video vnd_motorola_videop' => 'video vnd_motorola_videop',
          'video vnd_mpegurl' => 'video vnd_mpegurl',
          'video vnd_nokia_interleaved multimedia' => 'video vnd_nokia_interleaved multimedia',
          'video vnd_nokia_videovoip' => 'video vnd_nokia_videovoip',
          'video vnd_objectvideo' => 'video vnd_objectvideo',
          'video vnd_sealed_mpeg1' => 'video vnd_sealed_mpeg1',
          'video vnd_sealed_mpeg4' => 'video vnd_sealed_mpeg4',
          'video vnd_sealed_swf' => 'video vnd_sealed_swf',
          'video vnd_sealedmedia_softseal_mov' => 'video vnd_sealedmedia_softseal_mov',
          'video vnd_vivo' => 'video vnd_vivo',
          'audio 32kadpcm' => 'audio 32kadpcm',
          'audio 3gpp' => 'audio 3gpp',
          'audio 3gpp2' => 'audio 3gpp2',
          'audio ac3' => 'audio ac3',
          'audio AMR' => 'audio AMR',
          'audio AMR WB' => 'audio AMR WB',
          'audio amr wbplus' => 'audio amr wbplus',
          'audio asc' => 'audio asc',
          'audio basic' => 'audio basic',
          'audio BV16' => 'audio BV16',
          'audio BV32' => 'audio BV32',
          'audio clearmode' => 'audio clearmode',
          'audio CN' => 'audio CN',
          'audio DAT12' => 'audio DAT12',
          'audio dls' => 'audio dls',
          'audio dsr es201108' => 'audio dsr es201108',
          'audio dsr es202050' => 'audio dsr es202050',
          'audio dsr es202211' => 'audio dsr es202211',
          'audio dsr es202212' => 'audio dsr es202212',
          'audio eac3' => 'audio eac3',
          'audio DVI4' => 'audio DVI4',
          'audio EVRC' => 'audio EVRC',
          'audio EVRC0' => 'audio EVRC0',
          'audio EVRC1' => 'audio EVRC1',
          'audio EVRCB' => 'audio EVRCB',
          'audio EVRCB0' => 'audio EVRCB0',
          'audio EVRCB1' => 'audio EVRCB1',
          'audio EVRC QCP' => 'audio EVRC QCP',
          'audio G722' => 'audio G722',
          'audio G7221' => 'audio G7221',
          'audio G723' => 'audio G723',
          'audio G726 16' => 'audio G726 16',
          'audio G726 24' => 'audio G726 24',
          'audio G726 32' => 'audio G726 32',
          'audio G726 40' => 'audio G726 40',
          'audio G728' => 'audio G728',
          'audio G729' => 'audio G729',
          'audio G7291' => 'audio G7291',
          'audio G729D' => 'audio G729D',
          'audio G729E' => 'audio G729E',
          'audio GSM' => 'audio GSM',
          'audio GSM EFR' => 'audio GSM EFR',
          'audio iLBC' => 'audio iLBC',
          'audio L8' => 'audio L8',
          'audio L16' => 'audio L16',
          'audio L20' => 'audio L20',
          'audio L24' => 'audio L24',
          'audio LPC' => 'audio LPC',
          'audio mobile xmf' => 'audio mobile xmf',
          'audio MPA' => 'audio MPA',
          'audio mp4' => 'audio mp4',
          'audio MP4A LATM' => 'audio MP4A LATM',
          'audio mpa robust' => 'audio mpa robust',
          'audio mpeg' => 'audio mpeg',
          'audio mpeg4 generic' => 'audio mpeg4 generic',
          'audio parityfec' => 'audio parityfec',
          'audio PCMA' => 'audio PCMA',
          'audio PCMU' => 'audio PCMU',
          'audio prs_sid' => 'audio prs_sid',
          'audio QCELP' => 'audio QCELP',
          'audio RED' => 'audio RED',
          'audio rtp midi' => 'audio rtp midi',
          'audio rtx' => 'audio rtx',
          'audio SMV' => 'audio SMV',
          'audio SMV0' => 'audio SMV0',
          'audio SMV QCP' => 'audio SMV QCP',
          'audio t140c' => 'audio t140c',
          'audio t38' => 'audio t38',
          'audio telephone event' => 'audio telephone event',
          'audio tone' => 'audio tone',
          'audio VDVI' => 'audio VDVI',
          'audio VMR WB' => 'audio VMR WB',
          'audio vnd_3gpp_iufp' => 'audio vnd_3gpp_iufp',
          'audio vnd_4SB' => 'audio vnd_4SB',
          'audio vnd_audiokoz' => 'audio vnd_audiokoz',
          'audio vnd_CELP' => 'audio vnd_CELP',
          'audio vnd_cisco_nse' => 'audio vnd_cisco_nse',
          'audio vnd_cmles_radio events' => 'audio vnd_cmles_radio events',
          'audio vnd_cns_anp1' => 'audio vnd_cns_anp1',
          'audio vnd_cns_inf1' => 'audio vnd_cns_inf1',
          'audio vnd_digital winds' => 'audio vnd_digital winds',
          'audio vnd_dlna_adts' => 'audio vnd_dlna_adts',
          'audio vnd_everad_plj' => 'audio vnd_everad_plj',
          'audio vnd_hns_audio' => 'audio vnd_hns_audio',
          'audio vnd_lucent_voice' => 'audio vnd_lucent_voice',
          'audio vnd_nokia_mobile xmf' => 'audio vnd_nokia_mobile xmf',
          'audio vnd_nortel_vbk' => 'audio vnd_nortel_vbk',
          'audio vnd_nuera_ecelp4800' => 'audio vnd_nuera_ecelp4800',
          'audio vnd_nuera_ecelp7470' => 'audio vnd_nuera_ecelp7470',
          'audio vnd_nuera_ecelp9600' => 'audio vnd_nuera_ecelp9600',
          'audio vnd_octel_sbc' => 'audio vnd_octel_sbc',
          'audio vnd_rhetorex_32kadpcm' => 'audio vnd_rhetorex_32kadpcm',
          'audio vnd_sealedmedia_softseal_mpeg' => 'audio vnd_sealedmedia_softseal_mpeg',
          'audio vnd_vmx_cvsd' => 'audio vnd_vmx_cvsd',
          'image cgm' => 'image cgm',
          'image fits' => 'image fits',
          'image g3fax' => 'image g3fax',
          'image gif' => 'image gif',
          'image ief' => 'image ief',
          'image jp2' => 'image jp2',
          'image jpeg' => 'image jpeg',
          'image jpm' => 'image jpm',
          'image jpx' => 'image jpx',
          'image naplps' => 'image naplps',
          'image png' => 'image png',
          'image prs_btif' => 'image prs_btif',
          'image prs_pti' => 'image prs_pti',
          'image t38' => 'image t38',
          'image tiff' => 'image tiff',
          'image tiff fx' => 'image tiff fx',
          'image vnd_adobe_photoshop' => 'image vnd_adobe_photoshop',
          'image vnd_cns_inf2' => 'image vnd_cns_inf2',
          'image vnd_djvu' => 'image vnd_djvu',
          'image vnd_dwg' => 'image vnd_dwg',
          'image vnd_dxf' => 'image vnd_dxf',
          'image vnd_fastbidsheet' => 'image vnd_fastbidsheet',
          'image vnd_fpx' => 'image vnd_fpx',
          'image vnd_fst' => 'image vnd_fst',
          'image vnd_fujixerox_edmics mmr' => 'image vnd_fujixerox_edmics mmr',
          'image vnd_fujixerox_edmics rlc' => 'image vnd_fujixerox_edmics rlc',
          'image vnd_globalgraphics_pgb' => 'image vnd_globalgraphics_pgb',
          'image vnd_microsoft_icon' => 'image vnd_microsoft_icon',
          'image vnd_mix' => 'image vnd_mix',
          'image vnd_ms modi' => 'image vnd_ms modi',
          'image vnd_net fpx' => 'image vnd_net fpx',
          'image vnd_sealed_png' => 'image vnd_sealed_png',
          'image vnd_sealedmedia_softseal_gif' => 'image vnd_sealedmedia_softseal_gif',
          'image vnd_sealedmedia_softseal_jpg' => 'image vnd_sealedmedia_softseal_jpg',
          'image vnd_svf' => 'image vnd_svf',
          'image vnd_wap_wbmp' => 'image vnd_wap_wbmp',
          'image vnd_xiff' => 'image vnd_xiff',
          'text calendar' => 'text calendar',
          'text css' => 'text css',
          'text csv' => 'text csv',
          'text directory' => 'text directory',
          'text dns' => 'text dns',
          'text ecmascript (obsolete)' => 'text ecmascript (obsolete)',
          'text enriched' => 'text enriched',
          'text html' => 'text html',
          'text javascript (obsolete)' => 'text javascript (obsolete)',
          'text parityfec' => 'text parityfec',
          'text plain' => 'text plain',
          'text prs_fallenstein_rst' => 'text prs_fallenstein_rst',
          'text prs_lines_tag' => 'text prs_lines_tag',
          'text RED' => 'text RED',
          'text rfc822 headers' => 'text rfc822 headers',
          'text richtext' => 'text richtext',
          'text rtf' => 'text rtf',
          'text rtx' => 'text rtx',
          'text sgml' => 'text sgml',
          'text t140' => 'text t140',
          'text tab separated values' => 'text tab separated values',
          'text troff' => 'text troff',
          'text uri list' => 'text uri list',
          'text vnd_abc' => 'text vnd_abc',
          'text vnd_curl' => 'text vnd_curl',
          'text vnd_DMClientScript' => 'text vnd_DMClientScript',
          'text vnd_esmertec_theme descriptor' => 'text vnd_esmertec_theme descriptor',
          'text vnd_fly' => 'text vnd_fly',
          'text vnd_fmi_flexstor' => 'text vnd_fmi_flexstor',
          'text vnd_in3d_3dml' => 'text vnd_in3d_3dml',
          'text vnd_in3d_spot' => 'text vnd_in3d_spot',
          'text vnd_IPTC_NewsML' => 'text vnd_IPTC_NewsML',
          'text vnd_IPTC_NITF' => 'text vnd_IPTC_NITF',
          'text vnd_latex z' => 'text vnd_latex z',
          'text vnd_motorola_reflex' => 'text vnd_motorola_reflex',
          'text vnd_ms mediapackage' => 'text vnd_ms mediapackage',
          'text vnd_net2phone_commcenter_command' => 'text vnd_net2phone_commcenter_command',
          'text vnd_sun_j2me_app descriptor' => 'text vnd_sun_j2me_app descriptor',
          'text vnd_trolltech_linguist' => 'text vnd_trolltech_linguist',
          'text vnd_wap_si' => 'text vnd_wap_si',
          'text vnd_wap_sl' => 'text vnd_wap_sl',
          'text vnd_wap_wml' => 'text vnd_wap_wml',
          'text vnd_wap_wmlscript' => 'text vnd_wap_wmlscript',
          'text xml' => 'text xml',
          'text xml external parsed entity' => 'text xml external parsed entity',
          'application http' => 'application http',
          'application hyperstudio' => 'application hyperstudio',
          'application javascript' => 'application javascript',
          'application mac binhex40' => 'application mac binhex40',
          'application marc' => 'application marc',
          'application mbox' => 'application mbox',
          'application mediaservercontrol plus xml' => 'application mediaservercontrol plus xml',
          'application mp4' => 'application mp4',
          'application mpeg4 generic' => 'application mpeg4 generic',
          'application mpeg4 iod' => 'application mpeg4 iod',
          'application mpeg4 iod xmt' => 'application mpeg4 iod xmt',
          'application msword' => 'application msword',
          'application mxf' => 'application mxf',
          'application pdf' => 'application pdf',
          'application postscript' => 'application postscript',
          'application rdf plus xml' => 'application rdf plus xml',
          'application rtf' => 'application rtf',
          'application rtx' => 'application rtx',
          'application sgml' => 'application sgml',
          'application sgml open catalog' => 'application sgml open catalog',
          'application smil OBSOLETE' => 'application smil OBSOLETE',
          'application smil plus xml' => 'application smil plus xml',
          'application soap plus fastinfoset' => 'application soap plus fastinfoset',
          'application soap plus xml' => 'application soap plus xml',
          'application ssml plus xml' => 'application ssml plus xml',
          'application vnd_adobe_xfdf' => 'application vnd_adobe_xfdf',
          'application vnd_apple_installer plus xml' => 'application vnd_apple_installer plus xml',
          'application vnd_framemaker' => 'application vnd_framemaker',
          'application vnd_google earth_kml plus xml' => 'application vnd_google earth_kml plus xml',
          'application vnd_google earth_kmz' => 'application vnd_google earth_kmz',
          'application vnd_HandHeld Entertainment plus xml' => 'application vnd_HandHeld Entertainment plus xml',
          'application vnd_lotus 1 2 3' => 'application vnd_lotus 1 2 3',
          'application vnd_lotus approach' => 'application vnd_lotus approach',
          'application vnd_lotus freelance' => 'application vnd_lotus freelance',
          'application vnd_lotus notes' => 'application vnd_lotus notes',
          'application vnd_lotus organizer' => 'application vnd_lotus organizer',
          'application vnd_lotus screencam' => 'application vnd_lotus screencam',
          'application vnd_lotus wordpro' => 'application vnd_lotus wordpro',
          'application vnd_mozilla_xul plus xml' => 'application vnd_mozilla_xul plus xml',
          'application vnd_ms artgalry' => 'application vnd_ms artgalry',
          'application vnd_ms asf' => 'application vnd_ms asf',
          'application vnd_ms cab compressed' => 'application vnd_ms cab compressed',
          'application vnd_mseq' => 'application vnd_mseq',
          'application vnd_ms excel' => 'application vnd_ms excel',
          'application vnd_ms fontobject' => 'application vnd_ms fontobject',
          'application vnd_ms htmlhelp' => 'application vnd_ms htmlhelp',
          'application vnd_msign' => 'application vnd_msign',
          'application vnd_ms ims' => 'application vnd_ms ims',
          'application vnd_ms lrm' => 'application vnd_ms lrm',
          'application vnd_ms powerpoint' => 'application vnd_ms powerpoint',
          'application vnd_ms project' => 'application vnd_ms project',
          'application vnd_ms tnef' => 'application vnd_ms tnef',
          'application vnd_ms wmdrm_lic chlg req' => 'application vnd_ms wmdrm_lic chlg req',
          'application vnd_ms wmdrm_lic resp' => 'application vnd_ms wmdrm_lic resp',
          'application vnd_ms wmdrm_meter chlg req' => 'application vnd_ms wmdrm_meter chlg req',
          'application vnd_ms wmdrm_meter resp' => 'application vnd_ms wmdrm_meter resp',
          'application vnd_ms works' => 'application vnd_ms works',
          'application vnd_ms wpl' => 'application vnd_ms wpl',
          'application vnd_ms xpsdocument' => 'application vnd_ms xpsdocument',
          'application vnd_palm' => 'application vnd_palm',
          'application vnd_paos_xml' => 'application vnd_paos_xml',
          'application vnd_Quark_QuarkXPress' => 'application vnd_Quark_QuarkXPress',
          'application vnd_visio' => 'application vnd_visio',
          'application vnd_wordperfect' => 'application vnd_wordperfect',
          'application wordperfect5_1' => 'application wordperfect5_1',
          'application xhtml plus xml' => 'application xhtml plus xml',
          'application xml' => 'application xml',
          'application xml dtd' => 'application xml dtd',
          'application xml external parsed entity' => 'application xml external parsed entity',
          'application zip' => 'application zip',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_digital_format',
      'label' => 'Digital Format',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_duration'
  $fields['field_collection_item-field_pbcore_instantiation-field_duration'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_duration',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '21',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_duration',
      'label' => 'Duration',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_encoding_scheme'
  $fields['field_collection_item-field_pbcore_instantiation-field_encoding_scheme'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_encoding_scheme',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_encoding_scheme',
      'label' => 'Encoding Scheme',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_file_size'
  $fields['field_collection_item-field_pbcore_instantiation-field_file_size'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_file_size',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_file_size',
      'label' => 'File Size',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_format_standard'
  $fields['field_collection_item-field_pbcore_instantiation-field_format_standard'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_format_standard',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Film' => 'Film',
          'MPEG video' => 'MPEG video',
          'NTSC video interlaced' => 'NTSC video interlaced',
          'NTSC video progressive' => 'NTSC video progressive',
          'ATSC video interlaced' => 'ATSC video interlaced',
          'ATSC video progressive' => 'ATSC video progressive',
          'PAL video' => 'PAL video',
          'SECAM video' => 'SECAM video',
          'QuickTime' => 'QuickTime',
          'RealSystems' => 'RealSystems',
          'Windows Media' => 'Windows Media',
          'Flash Video' => 'Flash Video',
          'Linear PCM Audio' => 'Linear PCM Audio',
          'Dolby Digital AC3 Audio' => 'Dolby Digital AC3 Audio',
          'MPEG Audio' => 'MPEG Audio',
          'DTA Audio' => 'DTA Audio',
          'SDDS Audio' => 'SDDS Audio',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_format_standard',
      'label' => 'Format Standard',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_frame_rate'
  $fields['field_collection_item-field_pbcore_instantiation-field_frame_rate'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_frame_rate',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          '60 fields per sec' => '60 fields per sec',
          '59_94 fields per sec' => '59_94 fields per sec',
          '30 fps 60 fields per sec' => '30 fps 60 fields per sec',
          '29_97 fps 59_94 fields per sec' => '29_97 fps 59_94 fields per sec',
          '25 fps' => '25 fps',
          '24 fps' => '24 fps',
          '23_976 fps' => '23_976 fps',
          '15 fps' => '15 fps',
          '12 fps' => '12 fps',
          '10 fps' => '10 fps',
          '7 fps' => '7 fps',
          '5 fps' => '5 fps',
          '2 fps' => '2 fps',
          '1 fps' => '1 fps',
          '33 rpm' => '33 rpm',
          '45 rpm' => '45 rpm',
          '78 rpm' => '78 rpm',
          '1 and 7_8 ips' => '1 and 7_8 ips',
          '3 and 3_4 ips' => '3 and 3_4 ips',
          '7 and 1_2 ips' => '7 and 1_2 ips',
          '15 ips' => '15 ips',
          '30 ips' => '30 ips',
          'other' => 'other',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '15',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_frame_rate',
      'label' => 'Frame Rate',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_frame_size'
  $fields['field_collection_item-field_pbcore_instantiation-field_frame_size'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_frame_size',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '13',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_frame_size',
      'label' => 'Frame Size',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_generations'
  $fields['field_collection_item-field_pbcore_instantiation-field_generations'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_generations',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Artifact or Award' => 'Artifact or Award',
          'Artifact or Book' => 'Artifact or Book',
          'Artifact or Costume' => 'Artifact or Costume',
          'Artifact or Merchandise' => 'Artifact or Merchandise',
          'Artifact or Optical disk reader' => 'Artifact or Optical disk reader',
          'Artifact or SCSI Hard Drive' => 'Artifact or SCSI Hard Drive',
          'Artifact or Sy Quest drive' => 'Artifact or Sy Quest drive',
          'Audio or Air track' => 'Audio or Air track',
          'Audio or Audio dub' => 'Audio or Audio dub',
          'Audio or Audio master full mix' => 'Audio or Audio master full mix',
          'Audio or Master mix' => 'Audio or Master mix',
          'Audio or Mix element' => 'Audio or Mix element',
          'Audio or Music' => 'Audio or Music',
          'Audio or Narration' => 'Audio or Narration',
          'Audio or Optical track' => 'Audio or Optical track',
          'Audio or Original recording' => 'Audio or Original recording',
          'Audio or Radio program Dub' => 'Audio or Radio program Dub',
          'Audio or Radio program Master' => 'Audio or Radio program Master',
          'Audio or Sound effects' => 'Audio or Sound effects',
          'Audio or Transcription dub' => 'Audio or Transcription dub',
          'Container or Backup computer files' => 'Container or Backup computer files',
          'Container or Sy Quest Install Disks' => 'Container or Sy Quest Install Disks',
          'Moving image or Air print' => 'Moving image or Air print',
          'Moving image or Answer print' => 'Moving image or Answer print',
          'Moving image or Backup master' => 'Moving image or Backup master',
          'Moving image or BW internegative' => 'Moving image or BW internegative',
          'Moving image or BW kinescope negative' => 'Moving image or BW kinescope negative',
          'Moving image or BW workprint' => 'Moving image or BW workprint',
          'Moving image or Clip reel' => 'Moving image or Clip reel',
          'Moving image or Color edited workprint' => 'Moving image or Color edited workprint',
          'Moving image or Color internegative CRI' => 'Moving image or Color internegative CRI',
          'Moving image or Color master' => 'Moving image or Color master',
          'Moving image or Color workprint' => 'Moving image or Color workprint',
          'Moving image or Distribution dub' => 'Moving image or Distribution dub',
          'Moving image or Doc only dub' => 'Moving image or Doc only dub',
          'Moving image or Doc only master' => 'Moving image or Doc only master',
          'Moving image or Graphics animation' => 'Moving image or Graphics animation',
          'Moving image or Green Label Master' => 'Moving image or Green Label Master',
          'Moving image or Incomplete master' => 'Moving image or Incomplete master',
          'Moving image or International master' => 'Moving image or International master',
          'Moving image or Interpositive' => 'Moving image or Interpositive',
          'Moving image or ISO reel' => 'Moving image or ISO reel',
          'Moving image or Line reel' => 'Moving image or Line reel',
          'Moving image or Master' => 'Moving image or Master',
          'Moving image or Mixed magnetic track' => 'Moving image or Mixed magnetic track',
          'Moving image or News tape' => 'Moving image or News tape',
          'Moving image or Open Close' => 'Moving image or Open Close',
          'Moving image or Orig BW a and b negative' => 'Moving image or Orig BW a and b negative',
          'Moving image or Orig BW negative' => 'Moving image or Orig BW negative',
          'Moving image or Orig color a and b negative' => 'Moving image or Orig color a and b negative',
          'Moving image or Orig color a and b reversal' => 'Moving image or Orig color a and b reversal',
          'Moving image or Orig color negative' => 'Moving image or Orig color negative',
          'Moving image or Original' => 'Moving image or Original',
          'Moving image or Original footage' => 'Moving image or Original footage',
          'Moving image or PBS backup' => 'Moving image or PBS backup',
          'Moving image or PBS dub' => 'Moving image or PBS dub',
          'Moving image or PBS master' => 'Moving image or PBS master',
          'Moving image or Preservation master' => 'Moving image or Preservation master',
          'Moving image or Promo' => 'Moving image or Promo',
          'Moving image or Protection master' => 'Moving image or Protection master',
          'Moving image or Release print' => 'Moving image or Release print',
          'Moving image or Screening tapee' => 'Moving image or Screening tapee',
          'Moving image or Stock footage' => 'Moving image or Stock footage',
          'Moving image or Submaster' => 'Moving image or Submaster',
          'Moving image or Sync pix and sound' => 'Moving image or Sync pix and sound',
          'Moving image or Tease' => 'Moving image or Tease',
          'Moving image or Viewing copy' => 'Moving image or Viewing copy',
          'Moving image or Work print' => 'Moving image or Work print',
          'Static image or Autochrome' => 'Static image or Autochrome',
          'Static image or Caricature' => 'Static image or Caricature',
          'Static image or Carte de viste' => 'Static image or Carte de viste',
          'Static image or Color print' => 'Static image or Color print',
          'Static image or Contact sheet' => 'Static image or Contact sheet',
          'Static image or Daguerrotype' => 'Static image or Daguerrotype',
          'Static image or Digital file' => 'Static image or Digital file',
          'Static image or Drawing' => 'Static image or Drawing',
          'Static image or Engraving' => 'Static image or Engraving',
          'Static image or Glass negative' => 'Static image or Glass negative',
          'Static image or Glass slide' => 'Static image or Glass slide',
          'Static image or Illustration' => 'Static image or Illustration',
          'Static image or Lithograph' => 'Static image or Lithograph',
          'Static image or Map' => 'Static image or Map',
          'Static image or Nitrate negative' => 'Static image or Nitrate negative',
          'Static image or Other see note' => 'Static image or Other see note',
          'Static image or Painting' => 'Static image or Painting',
          'Static image or Photo research file' => 'Static image or Photo research file',
          'Static image or Photocopy' => 'Static image or Photocopy',
          'Static image or Photograph' => 'Static image or Photograph',
          'Static image or Postcard' => 'Static image or Postcard',
          'Static image or Print' => 'Static image or Print',
          'Static image or Slide' => 'Static image or Slide',
          'Static image or Stereoview' => 'Static image or Stereoview',
          'Static image or Still' => 'Static image or Still',
          'Static image or Transparency' => 'Static image or Transparency',
          'Static image or Woodcut' => 'Static image or Woodcut',
          'Text or Accounting statements' => 'Text or Accounting statements',
          'Text or Budget file' => 'Text or Budget file',
          'Text or Caption file' => 'Text or Caption file',
          'Text or Contracts' => 'Text or Contracts',
          'Text or Correspondence' => 'Text or Correspondence',
          'Text or Credit list' => 'Text or Credit list',
          'Text or Crew list' => 'Text or Crew list',
          'Text or Cue sheet' => 'Text or Cue sheet',
          'Text or Documentation' => 'Text or Documentation',
          'Text or EDL' => 'Text or EDL',
          'Text or Educational Material' => 'Text or Educational Material',
          'Text or Invoices Receipts' => 'Text or Invoices Receipts',
          'Text or Letter' => 'Text or Letter',
          'Text or Logs' => 'Text or Logs',
          'Text or Lower thirds list' => 'Text or Lower thirds list',
          'Text or Manuscript' => 'Text or Manuscript',
          'Text or Meeting notes' => 'Text or Meeting notes',
          'Text or Newspaper article' => 'Text or Newspaper article',
          'Text or Press clippings' => 'Text or Press clippings',
          'Text or Press kits' => 'Text or Press kits',
          'Text or Press releases' => 'Text or Press releases',
          'Text or Production notes' => 'Text or Production notes',
          'Text or Promotional material' => 'Text or Promotional material',
          'Text or Proposals' => 'Text or Proposals',
          'Text or Releases' => 'Text or Releases',
          'Text or Reports' => 'Text or Reports',
          'Text or Research material' => 'Text or Research material',
          'Text or Scripts' => 'Text or Scripts',
          'Text or Transcript' => 'Text or Transcript',
          'Text or Transcript interview' => 'Text or Transcript interview',
          'Text or Transcript program' => 'Text or Transcript program',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_generations',
      'label' => 'Generations',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_language'
  $fields['field_collection_item-field_pbcore_instantiation-field_language'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_language',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Abkhazian' => 'Abkhazian',
          'Afar' => 'Afar',
          'Afrikaans' => 'Afrikaans',
          'Akan' => 'Akan',
          'Albanian' => 'Albanian',
          'Amharic' => 'Amharic',
          'Arabic' => 'Arabic',
          'Aragonese' => 'Aragonese',
          'Armenian' => 'Armenian',
          'Assamese' => 'Assamese',
          'Avaric' => 'Avaric',
          'Avestan' => 'Avestan',
          'Aymara' => 'Aymara',
          'Azerbaijani' => 'Azerbaijani',
          'Bambara' => 'Bambara',
          'Bashkir' => 'Bashkir',
          'Basque' => 'Basque',
          'Belarusian' => 'Belarusian',
          'Bengali' => 'Bengali',
          'Bihari languages' => 'Bihari languages',
          'Bislama' => 'Bislama',
          'Bosnian' => 'Bosnian',
          'Breton' => 'Breton',
          'Bulgarian' => 'Bulgarian',
          'Burmese' => 'Burmese',
          'Catalan' => 'Catalan',
          'Central Khmer' => 'Central Khmer',
          'Chamorro' => 'Chamorro',
          'Chechen' => 'Chechen',
          'Chichewa' => 'Chichewa',
          'Chinese' => 'Chinese',
          'Church Slavic' => 'Church Slavic',
          'Chuvash' => 'Chuvash',
          'Cornish' => 'Cornish',
          'Corsican' => 'Corsican',
          'Cree' => 'Cree',
          'Croatian' => 'Croatian',
          'Czech' => 'Czech',
          'Danish' => 'Danish',
          'Divehi' => 'Divehi',
          'Dutch Flemish' => 'Dutch Flemish',
          'Dzongkha' => 'Dzongkha',
          'English' => 'English',
          'Esperanto' => 'Esperanto',
          'Estonian' => 'Estonian',
          'Ewe' => 'Ewe',
          'Faroese' => 'Faroese',
          'Fijian' => 'Fijian',
          'Finnish' => 'Finnish',
          'French' => 'French',
          'Fulah' => 'Fulah',
          'Galician' => 'Galician',
          'Ganda' => 'Ganda',
          'Georgian' => 'Georgian',
          'German' => 'German',
          'Greek' => 'Greek',
          'Guarani' => 'Guarani',
          'Gujarati' => 'Gujarati',
          'Haitian Creole' => 'Haitian Creole',
          'Hausa' => 'Hausa',
          'Hebrew' => 'Hebrew',
          'Herero' => 'Herero',
          'Hindi' => 'Hindi',
          'Hiri Motu' => 'Hiri Motu',
          'Hungarian' => 'Hungarian',
          'Icelandic' => 'Icelandic',
          'Ido' => 'Ido',
          'Igbo' => 'Igbo',
          'Indonesian' => 'Indonesian',
          'Interlingua International Auxiliary Language Association' => 'Interlingua International Auxiliary Language Association',
          'Interlingue' => 'Interlingue',
          'Inuktitut' => 'Inuktitut',
          'Inupiaq' => 'Inupiaq',
          'Irish' => 'Irish',
          'Italian' => 'Italian',
          'Japanese' => 'Japanese',
          'Javanese' => 'Javanese',
          'Kalaallisut' => 'Kalaallisut',
          'Kannada' => 'Kannada',
          'Kanuri' => 'Kanuri',
          'Kashmiri' => 'Kashmiri',
          'Kazakh' => 'Kazakh',
          'Kikuyu Gikuyu' => 'Kikuyu Gikuyu',
          'Kinyarwanda' => 'Kinyarwanda',
          'Kirghiz' => 'Kirghiz',
          'Komi' => 'Komi',
          'Kongo' => 'Kongo',
          'Korean' => 'Korean',
          'Kuanyama Kwanyama' => 'Kuanyama Kwanyama',
          'Kurdish' => 'Kurdish',
          'Lao' => 'Lao',
          'Latin' => 'Latin',
          'Latvian' => 'Latvian',
          'Limburgish' => 'Limburgish',
          'Lingala' => 'Lingala',
          'Lithuanian' => 'Lithuanian',
          'Luba-Katanga' => 'Luba-Katanga',
          'Luxembourgish' => 'Luxembourgish',
          'Macedonian' => 'Macedonian',
          'Malagasy' => 'Malagasy',
          'Malay' => 'Malay',
          'Malayalam' => 'Malayalam',
          'Maltese' => 'Maltese',
          'Manx' => 'Manx',
          'Maori' => 'Maori',
          'Marathi' => 'Marathi',
          'Marshallese' => 'Marshallese',
          'Moldavian Moldovan' => 'Moldavian Moldovan',
          'Mongolian' => 'Mongolian',
          'Nauru' => 'Nauru',
          'Navajo Navaho' => 'Navajo Navaho',
          'Ndonga' => 'Ndonga',
          'Nepali' => 'Nepali',
          'North Ndebele' => 'North Ndebele',
          'Northern Sami' => 'Northern Sami',
          'Norwegian' => 'Norwegian',
          'Norwegian Nynorsk' => 'Norwegian Nynorsk',
          'Occitan' => 'Occitan',
          'Ojibwa' => 'Ojibwa',
          'Oriya' => 'Oriya',
          'Oromo' => 'Oromo',
          'Ossetian Ossetic' => 'Ossetian Ossetic',
          'Pali' => 'Pali',
          'Panjabi Punjabi' => 'Panjabi Punjabi',
          'Persian' => 'Persian',
          'Polish' => 'Polish',
          'Portuguese' => 'Portuguese',
          'Pushto Pashto' => 'Pushto Pashto',
          'Quechua' => 'Quechua',
          'Romanian' => 'Romanian',
          'Romansh' => 'Romansh',
          'Rundi' => 'Rundi',
          'Russian' => 'Russian',
          'Rusyn' => 'Rusyn',
          'Samoan' => 'Samoan',
          'Sango' => 'Sango',
          'Sanskrit' => 'Sanskrit',
          'Sardinian' => 'Sardinian',
          'Scottish Gaelic' => 'Scottish Gaelic',
          'Serbian' => 'Serbian',
          'Serbo-Croatian' => 'Serbo-Croatian',
          'Shona' => 'Shona',
          'Sichuan Yi' => 'Sichuan Yi',
          'Sindhi' => 'Sindhi',
          'Sinhalese' => 'Sinhalese',
          'Slovak' => 'Slovak',
          'Slovenian' => 'Slovenian',
          'Somali' => 'Somali',
          'Sotho, Southern' => 'Sotho, Southern',
          'South Ndebele' => 'South Ndebele',
          'Spanish Castilian' => 'Spanish Castilian',
          'Sundanese' => 'Sundanese',
          'Swahili' => 'Swahili',
          'Swati' => 'Swati',
          'Swedish' => 'Swedish',
          'Tagalog' => 'Tagalog',
          'Tahitian' => 'Tahitian',
          'Tajik' => 'Tajik',
          'Tamil' => 'Tamil',
          'Tatar' => 'Tatar',
          'Telugu' => 'Telugu',
          'Thai' => 'Thai',
          'Tibetan' => 'Tibetan',
          'Tigrinya' => 'Tigrinya',
          'Tonga' => 'Tonga',
          'Tsonga' => 'Tsonga',
          'Tswana' => 'Tswana',
          'Turkish' => 'Turkish',
          'Turkmen' => 'Turkmen',
          'Twi' => 'Twi',
          'Uighur' => 'Uighur',
          'Ukrainian' => 'Ukrainian',
          'Urdu' => 'Urdu',
          'Uzbek' => 'Uzbek',
          'Venda' => 'Venda',
          'Vietnamese' => 'Vietnamese',
          'Walloon' => 'Walloon',
          'Welsh' => 'Welsh',
          'Western Frisian' => 'Western Frisian',
          'Wolof' => 'Wolof',
          'Xhosa' => 'Xhosa',
          'Yiddish' => 'Yiddish',
          'Yoruba' => 'Yoruba',
          'Zhuang Chuang' => 'Zhuang Chuang',
          'Zulu' => 'Zulu',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '19',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_language',
      'label' => 'Language',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_media_type'
  $fields['field_collection_item-field_pbcore_instantiation-field_media_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_media_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Animation' => 'Animation',
          'Artifact' => 'Artifact',
          'Collection' => 'Collection',
          'Dataset' => 'Dataset',
          'Event' => 'Event',
          'Interactive Resource' => 'Interactive Resource',
          'Moving Image' => 'Moving Image',
          'Physical Object' => 'Physical Object',
          'Presentation' => 'Presentation',
          'Service' => 'Service',
          'Software' => 'Software',
          'Sound' => 'Sound',
          'Static Image' => 'Static Image',
          'Text' => 'Text',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_media_type',
      'label' => 'Media Type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_pbcore_annotation'
  $fields['field_collection_item-field_pbcore_instantiation-field_pbcore_annotation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_annotation',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '26',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_pbcore_annotation',
      'label' => 'Annotation',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '25',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_pbcore_date_available'
  $fields['field_collection_item-field_pbcore_instantiation-field_pbcore_date_available'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_date_available',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => 'UTC',
        'todate' => 'optional',
        'tz_handling' => 'site',
      ),
      'translatable' => '1',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '25',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_pbcore_date_available',
      'label' => 'Date Available',
      'required' => 0,
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => '15',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => '23',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_pbcore_format_id'
  $fields['field_collection_item-field_pbcore_instantiation-field_pbcore_format_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_format_id',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '23',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_pbcore_format_id',
      'label' => 'Format Id',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '24',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_physical_format'
  $fields['field_collection_item-field_pbcore_instantiation-field_physical_format'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_physical_format',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Film 8mm' => 'Film 8mm',
          'Film 16mm' => 'Film 16mm',
          'Film 35mm' => 'Film 35mm',
          'Film 70mm' => 'Film 70mm',
          '8mm video' => '8mm video',
          '8mm Hi8 Video' => '8mm Hi8 Video',
          '8mm Digital 8' => '8mm Digital 8',
          'one fourth inch videotape Akai8' => 'one fourth inch videotape Akai8',
          'half inch videotape CV' => 'half inch videotape CV',
          'half inch videotape EIAJ Type 1' => 'half inch videotape EIAJ Type 1',
          'half inch videotape VCR' => 'half inch videotape VCR',
          'half inch videotape V2000' => 'half inch videotape V2000',
          'half inch videotape Hawkeye or Recam or M' => 'half inch videotape Hawkeye or Recam or M',
          'three quarters inch videotape Umatic' => 'three quarters inch videotape Umatic',
          'three quarters inch videotape Umatic SP' => 'three quarters inch videotape Umatic SP',
          '1 inch videotape PI 3V' => '1 inch videotape PI 3V',
          '1 inch videotape EV 200' => '1 inch videotape EV 200',
          '1 inch videotape EL3400' => '1 inch videotape EL3400',
          '1 inch videotape SMPTE Type A' => '1 inch videotape SMPTE Type A',
          '1 inch videotape SMPTE Type B' => '1 inch videotape SMPTE Type B',
          '1 inch videotape SMPTE Type C' => '1 inch videotape SMPTE Type C',
          '1 inch videotape IVC 700 or 800 or 900' => '1 inch videotape IVC 700 or 800 or 900',
          '1 inch videotape Helical BVH 1000' => '1 inch videotape Helical BVH 1000',
          '2 inch videotape Quad' => '2 inch videotape Quad',
          '2 inch videotape Helical Ampex VR 1500' => '2 inch videotape Helical Ampex VR 1500',
          '2 inch videotape Sony Helical SV 201' => '2 inch videotape Sony Helical SV 201',
          '2 inch videotape Helical IVC 9000' => '2 inch videotape Helical IVC 9000',
          'Betacam' => 'Betacam',
          'Betacam SP' => 'Betacam SP',
          'Betacam Digital Digi Beta' => 'Betacam Digital Digi Beta',
          'Betacam SX' => 'Betacam SX',
          'Betamax or Super or HB' => 'Betamax or Super or HB',
          'DV Mini' => 'DV Mini',
          'DVC Pro 25' => 'DVC Pro 25',
          'DVC Pro 50' => 'DVC Pro 50',
          'DVC Pro 50 P' => 'DVC Pro 50 P',
          'DVCam Sony' => 'DVCam Sony',
          'D1' => 'D1',
          'D2' => 'D2',
          'D3' => 'D3',
          'D5' => 'D5',
          'D6' => 'D6',
          'D7' => 'D7',
          'HD D5' => 'HD D5',
          'HD D9' => 'HD D9',
          'HD DVC PRO HD' => 'HD DVC PRO HD',
          'HDCAM' => 'HDCAM',
          'VHS' => 'VHS',
          'S VHS' => 'S VHS',
          'W VHS' => 'W VHS',
          'CD Video' => 'CD Video',
          'CD ROM' => 'CD ROM',
          'DVD Video' => 'DVD Video',
          'HD Videodisc' => 'HD Videodisc',
          'BD Videodisc' => 'BD Videodisc',
          'UMD Videodisc Sony' => 'UMD Videodisc Sony',
          'EVD Videodisc China' => 'EVD Videodisc China',
          'DVD minus R' => 'DVD minus R',
          'DVD plus R' => 'DVD plus R',
          'DVD minus RW' => 'DVD minus RW',
          'DVD plus RW' => 'DVD plus RW',
          'DVD plus R DL' => 'DVD plus R DL',
          'Laser Videodisc CAV 12inch' => 'Laser Videodisc CAV 12inch',
          'Laser Videodisc CLV 12 inch' => 'Laser Videodisc CLV 12 inch',
          'Hard Drive' => 'Hard Drive',
          'Flash Memory' => 'Flash Memory',
          'Cartivision' => 'Cartivision',
          'CVC' => 'CVC',
          'DCT' => 'DCT',
          'ED Beta' => 'ED Beta',
          'EIAJ Cartridge' => 'EIAJ Cartridge',
          'HDD1000' => 'HDD1000',
          'HDV1000' => 'HDV1000',
          'Macthronics MVC 10' => 'Macthronics MVC 10',
          'M II' => 'M II',
          'MPEG IMX' => 'MPEG IMX',
          'UniHi' => 'UniHi',
          'V Cord' => 'V Cord',
          'V Cord II' => 'V Cord II',
          'VTR150' => 'VTR150',
          'VTR600' => 'VTR600',
          'VX' => 'VX',
          'one fourth inch audio tape' => 'one fourth inch audio tape',
          'half inch audio tape' => 'half inch audio tape',
          'half inch digital audio' => 'half inch digital audio',
          '1 inch audio tape' => '1 inch audio tape',
          '2 inch audio tape' => '2 inch audio tape',
          'Audio cart' => 'Audio cart',
          'CD Audio' => 'CD Audio',
          'DVD Audio' => 'DVD Audio',
          'DARS DA 88' => 'DARS DA 88',
          'DAT' => 'DAT',
          'LP Record' => 'LP Record',
          'LP Record 45' => 'LP Record 45',
          'one fourth inch audio cassette' => 'one fourth inch audio cassette',
          'one eighth inch audio cassette' => 'one eighth inch audio cassette',
          '8 Track cassette' => '8 Track cassette',
          'Lacquer discs or acetates' => 'Lacquer discs or acetates',
          'Shellac discs' => 'Shellac discs',
          'F1 Beta tape' => 'F1 Beta tape',
          'DBX 700 VHS tape' => 'DBX 700 VHS tape',
          'Wire' => 'Wire',
          'High 8 DA78' => 'High 8 DA78',
          'Roland DM 80' => 'Roland DM 80',
          'Minidisc' => 'Minidisc',
          'Art original' => 'Art original',
          'Art print' => 'Art print',
          'Art reproduction' => 'Art reproduction',
          'Chart' => 'Chart',
          'Filmstrip' => 'Filmstrip',
          'Flash card' => 'Flash card',
          'Flip chart' => 'Flip chart',
          'Kodak PhotoCD' => 'Kodak PhotoCD',
          'Photograph' => 'Photograph',
          'Picture' => 'Picture',
          'Postcard' => 'Postcard',
          'Poster' => 'Poster',
          'Radiograph' => 'Radiograph',
          'Slide' => 'Slide',
          'Stereograph' => 'Stereograph',
          'Study print' => 'Study print',
          'Technical drawing' => 'Technical drawing',
          'Transparency' => 'Transparency',
          'Wall chart' => 'Wall chart',
          'Binder' => 'Binder',
          'Book' => 'Book',
          'Manuscript' => 'Manuscript',
          'Newspaper' => 'Newspaper',
          'Paper' => 'Paper',
          'Periodical' => 'Periodical',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_physical_format',
      'label' => 'Physical Format',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_sampling_rate'
  $fields['field_collection_item-field_pbcore_instantiation-field_sampling_rate'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sampling_rate',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          '11 kHz' => '11 kHz',
          '22_050 kHz' => '22_050 kHz',
          '32 kHz' => '32 kHz',
          '44_1 kHz' => '44_1 kHz',
          '48 kHz' => '48 kHz',
          '96 kHz' => '96 kHz',
          'Other' => 'Other',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '12',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_sampling_rate',
      'label' => 'Sampling Rate',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_start_time'
  $fields['field_collection_item-field_pbcore_instantiation-field_start_time'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_start_time',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '22',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_start_time',
      'label' => 'Start Time',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_instantiation-field_track_data'
  $fields['field_collection_item-field_pbcore_instantiation-field_track_data'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_track_data',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_instantiation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '17',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_track_data',
      'label' => 'Track Data',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_publisher-field_publisher'
  $fields['field_collection_item-field_pbcore_publisher-field_publisher'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_publisher',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_publisher',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_publisher',
      'label' => 'Publisher',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_publisher-field_publisher_rome'
  $fields['field_collection_item-field_pbcore_publisher-field_publisher_rome'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_publisher_rome',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Copyright Holder' => 'Copyright Holder',
          'Distributor' => 'Distributor',
          'Presenter' => 'Presenter',
          'Publisher' => 'Publisher',
          'Release Agent' => 'Release Agent',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_publisher',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_publisher_rome',
      'label' => 'Publisher Role',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_relation-field_relation_identifier'
  $fields['field_collection_item-field_pbcore_relation-field_relation_identifier'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_relation_identifier',
      'foreign keys' => array(),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'target_bundles' => array(
            'audio' => 'audio',
            'video' => 'video',
          ),
        ),
        'handler_submit' => 'Change handler',
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_relation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_relation_identifier',
      'label' => 'Related Media',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete_tags',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_relation-field_relation_type'
  $fields['field_collection_item-field_pbcore_relation-field_relation_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_relation_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Has Format' => 'Has Format',
          'Is Format Of' => 'Is Format Of',
          'Has Part' => 'Has Part',
          'Is Part Of' => 'Is Part Of',
          'Has Version' => 'Has Version',
          'Is Version Of' => 'Is Version Of',
          'References' => 'References',
          'Is Referenced By' => 'Is Referenced By',
          'Replaces' => 'Replaces',
          'Is Replaced By' => 'Is Replaced By',
          'Requires' => 'Requires',
          'Is Required By' => 'Is Required By',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_relation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_relation_type',
      'label' => 'Relationship Type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_title-field_language'
  $fields['field_collection_item-field_pbcore_title-field_language'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_language',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Abkhazian' => 'Abkhazian',
          'Afar' => 'Afar',
          'Afrikaans' => 'Afrikaans',
          'Akan' => 'Akan',
          'Albanian' => 'Albanian',
          'Amharic' => 'Amharic',
          'Arabic' => 'Arabic',
          'Aragonese' => 'Aragonese',
          'Armenian' => 'Armenian',
          'Assamese' => 'Assamese',
          'Avaric' => 'Avaric',
          'Avestan' => 'Avestan',
          'Aymara' => 'Aymara',
          'Azerbaijani' => 'Azerbaijani',
          'Bambara' => 'Bambara',
          'Bashkir' => 'Bashkir',
          'Basque' => 'Basque',
          'Belarusian' => 'Belarusian',
          'Bengali' => 'Bengali',
          'Bihari languages' => 'Bihari languages',
          'Bislama' => 'Bislama',
          'Bosnian' => 'Bosnian',
          'Breton' => 'Breton',
          'Bulgarian' => 'Bulgarian',
          'Burmese' => 'Burmese',
          'Catalan' => 'Catalan',
          'Central Khmer' => 'Central Khmer',
          'Chamorro' => 'Chamorro',
          'Chechen' => 'Chechen',
          'Chichewa' => 'Chichewa',
          'Chinese' => 'Chinese',
          'Church Slavic' => 'Church Slavic',
          'Chuvash' => 'Chuvash',
          'Cornish' => 'Cornish',
          'Corsican' => 'Corsican',
          'Cree' => 'Cree',
          'Croatian' => 'Croatian',
          'Czech' => 'Czech',
          'Danish' => 'Danish',
          'Divehi' => 'Divehi',
          'Dutch Flemish' => 'Dutch Flemish',
          'Dzongkha' => 'Dzongkha',
          'English' => 'English',
          'Esperanto' => 'Esperanto',
          'Estonian' => 'Estonian',
          'Ewe' => 'Ewe',
          'Faroese' => 'Faroese',
          'Fijian' => 'Fijian',
          'Finnish' => 'Finnish',
          'French' => 'French',
          'Fulah' => 'Fulah',
          'Galician' => 'Galician',
          'Ganda' => 'Ganda',
          'Georgian' => 'Georgian',
          'German' => 'German',
          'Greek' => 'Greek',
          'Guarani' => 'Guarani',
          'Gujarati' => 'Gujarati',
          'Haitian Creole' => 'Haitian Creole',
          'Hausa' => 'Hausa',
          'Hebrew' => 'Hebrew',
          'Herero' => 'Herero',
          'Hindi' => 'Hindi',
          'Hiri Motu' => 'Hiri Motu',
          'Hungarian' => 'Hungarian',
          'Icelandic' => 'Icelandic',
          'Ido' => 'Ido',
          'Igbo' => 'Igbo',
          'Indonesian' => 'Indonesian',
          'Interlingua International Auxiliary Language Association' => 'Interlingua International Auxiliary Language Association',
          'Interlingue' => 'Interlingue',
          'Inuktitut' => 'Inuktitut',
          'Inupiaq' => 'Inupiaq',
          'Irish' => 'Irish',
          'Italian' => 'Italian',
          'Japanese' => 'Japanese',
          'Javanese' => 'Javanese',
          'Kalaallisut' => 'Kalaallisut',
          'Kannada' => 'Kannada',
          'Kanuri' => 'Kanuri',
          'Kashmiri' => 'Kashmiri',
          'Kazakh' => 'Kazakh',
          'Kikuyu Gikuyu' => 'Kikuyu Gikuyu',
          'Kinyarwanda' => 'Kinyarwanda',
          'Kirghiz' => 'Kirghiz',
          'Komi' => 'Komi',
          'Kongo' => 'Kongo',
          'Korean' => 'Korean',
          'Kuanyama Kwanyama' => 'Kuanyama Kwanyama',
          'Kurdish' => 'Kurdish',
          'Lao' => 'Lao',
          'Latin' => 'Latin',
          'Latvian' => 'Latvian',
          'Limburgish' => 'Limburgish',
          'Lingala' => 'Lingala',
          'Lithuanian' => 'Lithuanian',
          'Luba-Katanga' => 'Luba-Katanga',
          'Luxembourgish' => 'Luxembourgish',
          'Macedonian' => 'Macedonian',
          'Malagasy' => 'Malagasy',
          'Malay' => 'Malay',
          'Malayalam' => 'Malayalam',
          'Maltese' => 'Maltese',
          'Manx' => 'Manx',
          'Maori' => 'Maori',
          'Marathi' => 'Marathi',
          'Marshallese' => 'Marshallese',
          'Moldavian Moldovan' => 'Moldavian Moldovan',
          'Mongolian' => 'Mongolian',
          'Nauru' => 'Nauru',
          'Navajo Navaho' => 'Navajo Navaho',
          'Ndonga' => 'Ndonga',
          'Nepali' => 'Nepali',
          'North Ndebele' => 'North Ndebele',
          'Northern Sami' => 'Northern Sami',
          'Norwegian' => 'Norwegian',
          'Norwegian Nynorsk' => 'Norwegian Nynorsk',
          'Occitan' => 'Occitan',
          'Ojibwa' => 'Ojibwa',
          'Oriya' => 'Oriya',
          'Oromo' => 'Oromo',
          'Ossetian Ossetic' => 'Ossetian Ossetic',
          'Pali' => 'Pali',
          'Panjabi Punjabi' => 'Panjabi Punjabi',
          'Persian' => 'Persian',
          'Polish' => 'Polish',
          'Portuguese' => 'Portuguese',
          'Pushto Pashto' => 'Pushto Pashto',
          'Quechua' => 'Quechua',
          'Romanian' => 'Romanian',
          'Romansh' => 'Romansh',
          'Rundi' => 'Rundi',
          'Russian' => 'Russian',
          'Rusyn' => 'Rusyn',
          'Samoan' => 'Samoan',
          'Sango' => 'Sango',
          'Sanskrit' => 'Sanskrit',
          'Sardinian' => 'Sardinian',
          'Scottish Gaelic' => 'Scottish Gaelic',
          'Serbian' => 'Serbian',
          'Serbo-Croatian' => 'Serbo-Croatian',
          'Shona' => 'Shona',
          'Sichuan Yi' => 'Sichuan Yi',
          'Sindhi' => 'Sindhi',
          'Sinhalese' => 'Sinhalese',
          'Slovak' => 'Slovak',
          'Slovenian' => 'Slovenian',
          'Somali' => 'Somali',
          'Sotho, Southern' => 'Sotho, Southern',
          'South Ndebele' => 'South Ndebele',
          'Spanish Castilian' => 'Spanish Castilian',
          'Sundanese' => 'Sundanese',
          'Swahili' => 'Swahili',
          'Swati' => 'Swati',
          'Swedish' => 'Swedish',
          'Tagalog' => 'Tagalog',
          'Tahitian' => 'Tahitian',
          'Tajik' => 'Tajik',
          'Tamil' => 'Tamil',
          'Tatar' => 'Tatar',
          'Telugu' => 'Telugu',
          'Thai' => 'Thai',
          'Tibetan' => 'Tibetan',
          'Tigrinya' => 'Tigrinya',
          'Tonga' => 'Tonga',
          'Tsonga' => 'Tsonga',
          'Tswana' => 'Tswana',
          'Turkish' => 'Turkish',
          'Turkmen' => 'Turkmen',
          'Twi' => 'Twi',
          'Uighur' => 'Uighur',
          'Ukrainian' => 'Ukrainian',
          'Urdu' => 'Urdu',
          'Uzbek' => 'Uzbek',
          'Venda' => 'Venda',
          'Vietnamese' => 'Vietnamese',
          'Walloon' => 'Walloon',
          'Welsh' => 'Welsh',
          'Western Frisian' => 'Western Frisian',
          'Wolof' => 'Wolof',
          'Xhosa' => 'Xhosa',
          'Yiddish' => 'Yiddish',
          'Yoruba' => 'Yoruba',
          'Zhuang Chuang' => 'Zhuang Chuang',
          'Zulu' => 'Zulu',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_title',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_language',
      'label' => 'Title Language',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_title-field_title'
  $fields['field_collection_item-field_pbcore_title-field_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_title',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_title',
      'label' => 'Title',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_pbcore_title-field_title_type'
  $fields['field_collection_item-field_pbcore_title-field_title_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_title_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Package' => 'Package',
          'Project' => 'Project',
          'Collection' => 'Collection',
          'Series' => 'Series',
          'Episode' => 'Episode',
          'Program' => 'Program',
          'Segment' => 'Segment',
          'Clip' => 'Clip',
          'Scene' => 'Scene',
          'Shot' => 'Shot',
          'Selection or Excerpt' => 'Selection or Excerpt',
          'Alternative' => 'Alternative',
          'Caption File' => 'Caption File',
          'Descriptive Audio' => 'Descriptive Audio',
          'Transcript File' => 'Transcript File',
          'Music' => 'Music',
          'Nature or ambient sound' => 'Nature or ambient sound',
          'Song' => 'Song',
          'Voice' => 'Voice',
          'Art Work' => 'Art Work',
          'Chart' => 'Chart',
          'Diagram' => 'Diagram',
          'Drawing' => 'Drawing',
          'Graphic' => 'Graphic',
          'Map' => 'Map',
          'Model' => 'Model',
          'Photograph' => 'Photograph',
          'Picture' => 'Picture',
          'Postcard' => 'Postcard',
          'Poster' => 'Poster',
          'Courseware Class' => 'Courseware Class',
          'Courseware Module' => 'Courseware Module',
          'Drill and Practice' => 'Drill and Practice',
          'Game' => 'Game',
          'Model Building' => 'Model Building',
          'Quiz' => 'Quiz',
          'Reflection Activity' => 'Reflection Activity',
          'Role Play' => 'Role Play',
          'Self Assessment' => 'Self Assessment',
          'Simulation' => 'Simulation',
          'Test' => 'Test',
          'Web page/site' => 'Web page/site',
          'Linear Presentation' => 'Linear Presentation',
          'Multimedia Presentation' => 'Multimedia Presentation',
          'Slide Show' => 'Slide Show',
          'Traditional Academic Poster' => 'Traditional Academic Poster',
          'Electronic Academic Poster' => 'Electronic Academic Poster',
          'Kiosk Event' => 'Kiosk Event',
          'Syllabus' => 'Syllabus',
          'Lesson Plan' => 'Lesson Plan',
          'Study Guide' => 'Study Guide',
          'Teacher Guide' => 'Teacher Guide',
          'Article' => 'Article',
          'Book' => 'Book',
          'Chapter' => 'Chapter',
          'Issue' => 'Issue',
          'Lyrics' => 'Lyrics',
          'Manuscript' => 'Manuscript',
          'Periodical' => 'Periodical',
          'Score' => 'Score',
          'Abridged Version' => 'Abridged Version',
          'Air Version' => 'Air Version',
          'Captioned Version' => 'Captioned Version',
          'Cell Phone Version' => 'Cell Phone Version',
          'Full Version' => 'Full Version',
          'iPod Version' => 'iPod Version',
          'Packaging Version' => 'Packaging Version',
          'Pledge Version' => 'Pledge Version',
          'Published Version' => 'Published Version',
          'reTitle' => 'reTitle',
          'Web Version' => 'Web Version',
          'Working Title' => 'Working Title',
          'Other' => 'Other',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_pbcore_title',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_title_type',
      'label' => 'Title Type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_transcription-field_workflow_note'
  $fields['field_collection_item-field_transcription-field_workflow_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_workflow_note',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_transcription',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_workflow_note',
      'label' => 'Transcription Note',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_transcription-field_workflow_status'
  $fields['field_collection_item-field_transcription-field_workflow_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_workflow_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'unchecked' => 'unchecked',
          'verified' => 'verified',
          'needs work' => 'needs work',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_transcription',
      'default_value' => array(
        0 => array(
          'value' => 'unchecked',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_workflow_status',
      'label' => 'Transcription Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_translation-field_workflow_note'
  $fields['field_collection_item-field_translation-field_workflow_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_workflow_note',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_translation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_workflow_note',
      'label' => 'Translation Note',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_translation-field_workflow_status'
  $fields['field_collection_item-field_translation-field_workflow_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_workflow_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'unchecked' => 'unchecked',
          'verified' => 'verified',
          'needs work' => 'needs work',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'field_translation',
      'default_value' => array(
        0 => array(
          'value' => 'unchecked',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_workflow_status',
      'label' => 'Translation Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-audio-field_audio'
  $fields['node-audio-field_audio'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_audio',
      'foreign keys' => array(
        'entryid' => array(
          'columns' => array(
            'entryid' => 'kaltura_entryid',
          ),
          'table' => 'node_kaltura',
        ),
      ),
      'indexes' => array(),
      'module' => 'field_kaltura',
      'settings' => array(
        'content_ingestion' => array(
          'add_existing' => 'both',
          'advanced' => array(
            'custom_cw' => '',
          ),
          'kcw_button_text' => 'Upload Audio',
        ),
        'kaltura_entry_video_display' => array(
          'advanced' => array(
            'custom_player' => '',
          ),
          'delivery' => 'HTTP',
          'entry_widget' => '48501',
          'player_height' => '330',
          'player_width' => '400',
        ),
      ),
      'translatable' => '0',
      'type' => 'field_kaltura_entryid',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'mb_kaltura',
          'settings' => array(),
          'type' => 'field_kaltura_player_html5_audio',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_audio',
      'label' => 'Audio',
      'required' => 0,
      'settings' => array(
        'add_existing' => 0,
        'custom_cw' => 4396241,
        'custom_player' => '',
        'delivery' => 'HTTP',
        'entry_widget' => '48501',
        'player_height' => '364',
        'player_width' => '410',
        'rotate' => 0,
        'stretch' => 0,
        'thumbsize_height' => '90',
        'thumbsize_width' => '120',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_kaltura',
        'settings' => array(),
        'type' => 'field_kaltura_audio',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'node-audio-field_av_file'
  $fields['node-audio-field_av_file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_av_file',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '25',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_av_file',
      'label' => 'A/V File',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-audio-field_available_from'
  $fields['node-audio-field_available_from'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_available_from',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => 'UTC',
        'todate' => 'optional',
        'tz_handling' => 'site',
      ),
      'translatable' => '1',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '24',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_available_from',
      'label' => 'Available From (date)',
      'required' => 0,
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => '15',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-audio-field_catalog_record'
  $fields['node-audio-field_catalog_record'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_catalog_record',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '28',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_catalog_record',
      'label' => 'Catalog Record',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-audio-field_characteristic'
  $fields['node-audio-field_characteristic'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_characteristic',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'kmap_taxonomy',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'kmap_annotation',
          'settings' => array(),
          'type' => 'kmap_taxonomy_annotated',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_characteristic',
      'label' => 'Characteristic',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'kmap_taxonomy',
        'settings' => array(
          'allow_annotations' => TRUE,
          'allow_formatting' => TRUE,
          'kmap_selector_settings' => array(
            'allow_annotations' => 1,
            'allow_formatting' => 1,
            'root_kmap_id' => '',
            'show_autocomplete' => 1,
            'show_branch_filter' => 1,
            'show_tree_selector' => 1,
            'view_path' => 'characteristic/%tid/detail',
          ),
          'root_kmap_id' => NULL,
          'show_autocomplete' => TRUE,
          'show_branch_filter' => TRUE,
          'show_tree_selector' => TRUE,
          'view_path' => 'taxonomy/term/%tid',
        ),
        'type' => 'kmap_taxonomy',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-audio-field_copyright_owner'
  $fields['node-audio-field_copyright_owner'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_copyright_owner',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '21',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_copyright_owner',
      'label' => 'Copyright Owner',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-audio-field_kmap_annotation'
  $fields['node-audio-field_kmap_annotation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kmap_annotation',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_kmap_annotation',
      'label' => 'Kmap Annotation',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'node-audio-field_license'
  $fields['node-audio-field_license'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_license',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '23',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_license',
      'label' => 'Redistribution License',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_contributor'
  $fields['node-audio-field_pbcore_contributor'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_contributor',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_contributor',
      'label' => 'Contributor',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_coverage'
  $fields['node-audio-field_pbcore_coverage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_coverage',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_coverage',
      'label' => 'Time',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_coverage_spatial'
  $fields['node-audio-field_pbcore_coverage_spatial'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_coverage_spatial',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'mb_location',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_coverage_spatial',
      'label' => 'Location',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'mb_location',
        'settings' => array(
          'root_kmap_id' => NULL,
          'show_autocomplete' => TRUE,
          'show_branch_filter' => TRUE,
          'show_geonames' => FALSE,
          'show_map' => FALSE,
          'show_place_dictionary' => TRUE,
          'show_tree_selector' => TRUE,
        ),
        'type' => 'mb_location',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_creator'
  $fields['node-audio-field_pbcore_creator'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_creator',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_creator',
      'label' => 'Creator',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_description'
  $fields['node-audio-field_pbcore_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_description',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_description',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_extension'
  $fields['node-audio-field_pbcore_extension'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_extension',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '18',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_extension',
      'label' => 'Extension',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_identifier'
  $fields['node-audio-field_pbcore_identifier'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_identifier',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '17',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_identifier',
      'label' => 'Identifier',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_instantiation'
  $fields['node-audio-field_pbcore_instantiation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_instantiation',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '21',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_instantiation',
      'label' => 'Versions',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_publisher'
  $fields['node-audio-field_pbcore_publisher'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_publisher',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_publisher',
      'label' => 'Publisher',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_relation'
  $fields['node-audio-field_pbcore_relation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_relation',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_relation',
      'label' => 'Related Media',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_rights_summary'
  $fields['node-audio-field_pbcore_rights_summary'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_rights_summary',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '20',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_rights_summary',
      'label' => 'Rights Summary',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-audio-field_pbcore_title'
  $fields['node-audio-field_pbcore_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_title',
      'label' => 'Title',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-audio-field_recording_location'
  $fields['node-audio-field_recording_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_recording_location',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'mb_location',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_recording_location',
      'label' => 'Recording Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'mb_location',
        'settings' => array(
          'location_selector_settings' => array(
            'show_geonames' => 0,
            'show_map' => 0,
            'show_place_dictionary' => 1,
          ),
          'show_geonames' => FALSE,
          'show_map' => FALSE,
          'show_place_dictionary' => TRUE,
        ),
        'type' => 'mb_location',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-audio-field_tags'
  $fields['node-audio-field_tags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tags',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tags',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_tags',
      'label' => 'Tags',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-audio-field_transcript'
  $fields['node-audio-field_transcript'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_transcript',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 1,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'transcripts',
          'settings' => array(),
          'type' => 'default__transcript-player-link',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_transcript',
      'label' => 'Transcript',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'transcripts',
        'file_extensions' => 'xml eaf',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'transcripts' => array(
        'is_transcript' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(),
            'source_attach' => array(
              'absolute' => 0,
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'node-audio-field_transcription'
  $fields['node-audio-field_transcription'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_transcription',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '26',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_transcription',
      'label' => 'Transcription',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-audio-field_transcripts_xsl'
  $fields['node-audio-field_transcripts_xsl'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_transcripts_xsl',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_transcripts_xsl',
      'label' => 'Transformer',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'file_directory' => 'transcripts_xsl',
        'file_extensions' => 'xsl',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'transcripts' => array(
        'is_transcript' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'reference' => 'reference',
              'remote' => 0,
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'copy',
              'path' => 'file_attach',
            ),
            'source_reference' => array(
              'autocomplete' => '1',
            ),
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'node-audio-field_translation'
  $fields['node-audio-field_translation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_translation',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '27',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_translation',
      'label' => 'Translation',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-audio-field_year_published'
  $fields['node-audio-field_year_published'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_year_published',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '22',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_year_published',
      'label' => 'Year Published',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-audio-group_audience'
  $fields['node-audio-group_audience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'group_audience',
      'foreign keys' => array(
        'og' => array(
          'columns' => array(
            'gid' => 'gid',
          ),
          'table' => 'og',
        ),
      ),
      'indexes' => array(
        'gid' => array(
          0 => 'gid',
        ),
      ),
      'module' => 'og',
      'no_ui' => TRUE,
      'settings' => array(),
      'translatable' => '0',
      'type' => 'group',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'og',
          'settings' => array(),
          'type' => 'og_list_default',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'group_audience',
      'label' => 'Groups audience',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'view modes' => array(
        'full' => array(
          'custom settings' => FALSE,
          'label' => 'Full',
          'type' => 'og_list_default',
        ),
        'teaser' => array(
          'custom settings' => FALSE,
          'label' => 'Teaser',
          'type' => 'og_list_default',
        ),
      ),
      'widget' => array(
        'module' => 'og',
        'settings' => array(
          'opt_group' => 'auto',
        ),
        'type' => 'group_audience',
        'weight' => '10',
      ),
      'widget_type' => 'group_audience',
    ),
  );

  // Exported field: 'node-audio-group_content_access'
  $fields['node-audio-group_content_access'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'group_content_access',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'no_ui' => TRUE,
      'settings' => array(
        'allowed_values' => array(
          0 => 'Use group defaults',
          1 => 'Public - accessible to all site users',
          2 => 'Private - accessible only to group members',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'audio',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'group_content_access',
      'label' => 'Group content visibility',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'view modes' => array(
        'full' => array(
          'label' => 'above',
          'type' => 'list_default',
        ),
        'teaser' => array(
          'label' => 'above',
          'type' => 'list_default',
        ),
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '12',
      ),
      'widget_type' => 'options_select',
    ),
  );

  // Exported field: 'node-video-field_av_file'
  $fields['node-video-field_av_file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_av_file',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '25',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_av_file',
      'label' => 'A/V File',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'node-video-field_available_from'
  $fields['node-video-field_available_from'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_available_from',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => 'UTC',
        'todate' => 'optional',
        'tz_handling' => 'site',
      ),
      'translatable' => '1',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '24',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_available_from',
      'label' => 'Available From (date)',
      'required' => 0,
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => '15',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'node-video-field_catalog_record'
  $fields['node-video-field_catalog_record'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_catalog_record',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '28',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_catalog_record',
      'label' => 'Catalog Record',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '45',
      ),
    ),
  );

  // Exported field: 'node-video-field_characteristic'
  $fields['node-video-field_characteristic'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_characteristic',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'kmap_taxonomy',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'kmap_annotation',
          'settings' => array(),
          'type' => 'kmap_taxonomy_annotated',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_characteristic',
      'label' => 'Characteristic',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'kmap_taxonomy',
        'settings' => array(
          'allow_annotations' => TRUE,
          'allow_formatting' => TRUE,
          'kmap_selector_settings' => array(
            'allow_annotations' => 1,
            'allow_formatting' => 1,
            'root_kmap_id' => '',
            'show_autocomplete' => 1,
            'show_branch_filter' => 1,
            'show_tree_selector' => 1,
            'view_path' => 'characteristic/%tid/detail',
          ),
          'root_kmap_id' => NULL,
          'show_autocomplete' => TRUE,
          'show_branch_filter' => TRUE,
          'show_tree_selector' => TRUE,
          'view_path' => 'characteristic/%tid/detail',
        ),
        'type' => 'kmap_taxonomy',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'node-video-field_copyright_owner'
  $fields['node-video-field_copyright_owner'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_copyright_owner',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '21',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_copyright_owner',
      'label' => 'Copyright Owner',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'node-video-field_kmap_annotation'
  $fields['node-video-field_kmap_annotation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kmap_annotation',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_kmap_annotation',
      'label' => 'Kmap Annotation',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_hidden',
        'weight' => '36',
      ),
    ),
  );

  // Exported field: 'node-video-field_license'
  $fields['node-video-field_license'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_license',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '23',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_license',
      'label' => 'Redistribution License',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_contributor'
  $fields['node-video-field_pbcore_contributor'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_contributor',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_contributor',
      'label' => 'Contributor',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_coverage'
  $fields['node-video-field_pbcore_coverage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_coverage',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_coverage',
      'label' => 'Time',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '39',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_coverage_spatial'
  $fields['node-video-field_pbcore_coverage_spatial'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_coverage_spatial',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'mb_location',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_coverage_spatial',
      'label' => 'Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'mb_location',
        'settings' => array(
          'location_selector_settings' => array(
            'show_geonames' => 0,
            'show_map' => 0,
            'show_place_dictionary' => 1,
          ),
          'show_geonames' => FALSE,
          'show_map' => FALSE,
          'show_place_dictionary' => TRUE,
        ),
        'type' => 'mb_location',
        'weight' => '37',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_creator'
  $fields['node-video-field_pbcore_creator'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_creator',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_creator',
      'label' => 'Creator',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_description'
  $fields['node-video-field_pbcore_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_description',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_description',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_extension'
  $fields['node-video-field_pbcore_extension'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_extension',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '18',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_extension',
      'label' => 'Extension',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '45',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_identifier'
  $fields['node-video-field_pbcore_identifier'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_identifier',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '17',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_identifier',
      'label' => 'Identifier',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_instantiation'
  $fields['node-video-field_pbcore_instantiation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_instantiation',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '21',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_instantiation',
      'label' => 'Versions',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_publisher'
  $fields['node-video-field_pbcore_publisher'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_publisher',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_publisher',
      'label' => 'Publisher',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_relation'
  $fields['node-video-field_pbcore_relation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_relation',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_relation',
      'label' => 'Related Media',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '40',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_rights_summary'
  $fields['node-video-field_pbcore_rights_summary'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_rights_summary',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '20',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_rights_summary',
      'label' => 'Rights Summary',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '45',
      ),
    ),
  );

  // Exported field: 'node-video-field_pbcore_title'
  $fields['node-video-field_pbcore_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pbcore_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '1',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pbcore_title',
      'label' => 'Title',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-video-field_recording_location'
  $fields['node-video-field_recording_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_recording_location',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'mb_location',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_recording_location',
      'label' => 'Recording Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'mb_location',
        'settings' => array(
          'location_selector_settings' => array(
            'show_geonames' => 0,
            'show_map' => 0,
            'show_place_dictionary' => 1,
          ),
          'show_geonames' => FALSE,
          'show_map' => FALSE,
          'show_place_dictionary' => TRUE,
        ),
        'type' => 'mb_location',
        'weight' => '38',
      ),
    ),
  );

  // Exported field: 'node-video-field_tags'
  $fields['node-video-field_tags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tags',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tags',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_tags',
      'label' => 'Tags',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-video-field_transcript'
  $fields['node-video-field_transcript'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_transcript',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 1,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'transcripts',
          'settings' => array(),
          'type' => 'default__transcript-player-link',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_transcript',
      'label' => 'Transcript',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'transcripts',
        'file_extensions' => 'xml',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'transcripts' => array(
        'is_transcript' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(),
            'source_attach' => array(
              'absolute' => 0,
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-video-field_transcription'
  $fields['node-video-field_transcription'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_transcription',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '26',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_transcription',
      'label' => 'Transcription',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'node-video-field_transcripts_xsl'
  $fields['node-video-field_transcripts_xsl'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_transcripts_xsl',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_transcripts_xsl',
      'label' => 'Transformer',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'transcripts_xsl',
        'file_extensions' => 'xsl',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'transcripts' => array(
        'is_transcript' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'reference' => 'reference',
              'remote' => 0,
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'copy',
              'path' => 'file_attach',
            ),
            'source_reference' => array(
              'autocomplete' => '1',
            ),
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-video-field_translation'
  $fields['node-video-field_translation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_translation',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '27',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_translation',
      'label' => 'Translation',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'node-video-field_video'
  $fields['node-video-field_video'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video',
      'foreign keys' => array(
        'entryid' => array(
          'columns' => array(
            'entryid' => 'kaltura_entryid',
          ),
          'table' => 'node_kaltura',
        ),
      ),
      'indexes' => array(),
      'module' => 'field_kaltura',
      'settings' => array(
        'content_ingestion' => array(
          'add_existing' => 'upload',
          'advanced' => array(
            'custom_cw' => '',
          ),
          'kcw_button_text' => 'Upload or Record a Video',
        ),
        'kaltura_entry_video_display' => array(
          'advanced' => array(
            'custom_player' => '',
          ),
          'delivery' => 'HTTP',
          'entry_widget' => '48501',
          'player_height' => '330',
          'player_width' => '400',
        ),
        'thumbsize' => array(
          'rotate' => 0,
          'thumbsize_height' => '45',
          'thumbsize_width' => '80',
        ),
      ),
      'translatable' => '1',
      'type' => 'field_kaltura_entryid',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'field_kaltura',
          'settings' => array(),
          'type' => 'field_kaltura_player',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_video',
      'label' => 'Video',
      'required' => 0,
      'settings' => array(
        'add_existing' => 0,
        'custom_cw' => 4396241,
        'custom_player' => '',
        'delivery' => 'HTTP',
        'entry_widget' => '48501',
        'player_height' => '364',
        'player_width' => '410',
        'rotate' => 0,
        'stretch' => 0,
        'thumbsize_height' => '90',
        'thumbsize_width' => '120',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_kaltura',
        'settings' => array(),
        'type' => 'field_kaltura_video',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-video-field_year_published'
  $fields['node-video-field_year_published'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_year_published',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '22',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_year_published',
      'label' => 'Year Published',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'node-video-group_audience'
  $fields['node-video-group_audience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'group_audience',
      'foreign keys' => array(
        'og' => array(
          'columns' => array(
            'gid' => 'gid',
          ),
          'table' => 'og',
        ),
      ),
      'indexes' => array(
        'gid' => array(
          0 => 'gid',
        ),
      ),
      'module' => 'og',
      'no_ui' => TRUE,
      'settings' => array(),
      'translatable' => '0',
      'type' => 'group',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'og',
          'settings' => array(),
          'type' => 'og_list_default',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'group_audience',
      'label' => 'Groups audience',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'view modes' => array(
        'full' => array(
          'custom settings' => FALSE,
          'label' => 'Full',
          'type' => 'og_list_default',
        ),
        'teaser' => array(
          'custom settings' => FALSE,
          'label' => 'Teaser',
          'type' => 'og_list_default',
        ),
      ),
      'widget' => array(
        'module' => 'og',
        'settings' => array(
          'opt_group' => 'auto',
        ),
        'type' => 'group_audience',
        'weight' => '13',
      ),
      'widget_type' => 'group_audience',
    ),
  );

  // Exported field: 'node-video-group_content_access'
  $fields['node-video-group_content_access'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'group_content_access',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'no_ui' => TRUE,
      'settings' => array(
        'allowed_values' => array(
          0 => 'Use group defaults',
          1 => 'Public - accessible to all site users',
          2 => 'Private - accessible only to group members',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'group_content_access',
      'label' => 'Group content visibility',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'view modes' => array(
        'full' => array(
          'label' => 'above',
          'type' => 'list_default',
        ),
        'teaser' => array(
          'label' => 'above',
          'type' => 'list_default',
        ),
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '46',
      ),
      'widget_type' => 'options_select',
    ),
  );

  // Exported field: 'taxonomy_term-kmap_taxonomy-kmap_id'
  $fields['taxonomy_term-kmap_taxonomy-kmap_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'kmap_id',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'kmap_taxonomy',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'kmap_taxonomy',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'kmap_id',
      'label' => 'Kmap Id',
      'required' => TRUE,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-kmap_taxonomy-kmap_parent_id'
  $fields['taxonomy_term-kmap_taxonomy-kmap_parent_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'kmap_parent_id',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'kmap_taxonomy',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'kmap_taxonomy',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'kmap_parent_id',
      'label' => 'Kmap Parent Id',
      'required' => TRUE,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-mb_location-place_dictionary_id'
  $fields['taxonomy_term-mb_location-place_dictionary_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'place_dictionary_id',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'mb_location',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'mb_location',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'place_dictionary_id',
      'label' => 'Place Dictionary Id',
      'required' => TRUE,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 31,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A/V File');
  t('A/V File Note');
  t('A/V File Status');
  t('Alternate Modes');
  t('Annotation');
  t('Aspect Ratio');
  t('Audio');
  t('Available From (date)');
  t('Bit Depth');
  t('Catalog Record');
  t('Catalog Record Note');
  t('Catalog Record Status');
  t('Channel Config');
  t('Characteristic');
  t('Colors');
  t('Contributor');
  t('Contributor Role');
  t('Copyright Owner');
  t('Creator');
  t('Creator Role');
  t('Data Rate');
  t('Date Available');
  t('Date Created');
  t('Date Issued');
  t('Description');
  t('Description Language');
  t('Description Type');
  t('Digital Format');
  t('Duration');
  t('Encoding Scheme');
  t('Extension');
  t('Extension Authority');
  t('File Size');
  t('Format');
  t('Format Id');
  t('Format Id Source');
  t('Format Standard');
  t('Frame Rate');
  t('Frame Size');
  t('Generations');
  t('Group content visibility');
  t('Groups audience');
  t('Identifier');
  t('Identifier Source');
  t('Kmap Annotation');
  t('Kmap Id');
  t('Kmap Parent Id');
  t('Language');
  t('Location');
  t('Media Type');
  t('Note');
  t('Numeric Label');
  t('Physical Format');
  t('Place Dictionary Id');
  t('Publisher');
  t('Publisher Role');
  t('Recording Location');
  t('Redistribution License');
  t('Related Media');
  t('Relationship Type');
  t('Rights Summary');
  t('Sampling Rate');
  t('Start Time');
  t('Tags');
  t('Text Label');
  t('Tid');
  t('Time');
  t('Title');
  t('Title Language');
  t('Title Type');
  t('Track Data');
  t('Transcript');
  t('Transcription');
  t('Transcription Note');
  t('Transcription Status');
  t('Transformer');
  t('Translation');
  t('Translation Note');
  t('Translation Status');
  t('Versions');
  t('Video');
  t('Year Published');

  return $fields;
}
