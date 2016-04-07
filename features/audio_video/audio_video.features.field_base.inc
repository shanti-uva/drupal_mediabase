<?php
/**
 * @file
 * audio_video.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function audio_video_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_alternate_modes'
  $field_bases['field_alternate_modes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_annot_format'
  $field_bases['field_annot_format'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_annot_format',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_annot_note'
  $field_bases['field_annot_note'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_annot_numeric_label'
  $field_bases['field_annot_numeric_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_annot_text_label'
  $field_bases['field_annot_text_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_aspect_ratio'
  $field_bases['field_aspect_ratio'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_aspect_ratio',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_audio'
  $field_bases['field_audio'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'field_kaltura',
    'settings' => array(
      'add_existing' => 'upload',
      'content_ingestion' => array(
        'add_existing' => 'both',
        'advanced' => array(
          'custom_cw' => '',
        ),
        'kcw_button_text' => 'Upload Audio',
      ),
      'custom_cw' => '',
      'custom_player' => '',
      'delivery' => 'HTTP',
      'entry_widget' => 3410832,
      'kaltura_entry_video_display' => array(
        'advanced' => array(
          'custom_player' => '',
        ),
        'delivery' => 'HTTP',
        'entry_widget' => 48501,
        'player_height' => 330,
        'player_width' => 400,
      ),
      'kcw_button_text' => 'Add Media',
      'player_height' => 330,
      'player_width' => 400,
      'rotate' => 0,
      'stretch' => 0,
      'thumbsize_height' => 90,
      'thumbsize_width' => 120,
    ),
    'translatable' => 0,
    'type' => 'field_kaltura_entryid',
  );

  // Exported field_base: 'field_audio_quality_acceptable'
  $field_bases['field_audio_quality_acceptable'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_audio_quality_acceptable',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_available_from'
  $field_bases['field_available_from'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_available_from',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
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
    'translatable' => 1,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_basic_cataloging'
  $field_bases['field_basic_cataloging'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_basic_cataloging',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'Problem' => 'Problem',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_bit_depth'
  $field_bases['field_bit_depth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bit_depth',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_cataloging_proofed'
  $field_bases['field_cataloging_proofed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cataloging_proofed',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'Problem' => 'Problem',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_channel_conf'
  $field_bases['field_channel_conf'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_characteristic'
  $field_bases['field_characteristic'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'kmap_taxonomy',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_colors'
  $field_bases['field_colors'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_colors',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'B and W with color sequences' => 'B and W with color sequences',
        'B and W with grayscale sequences' => 'B and W with grayscale sequences',
        'B and W' => 'B and W',
        'Color with B and W sequences' => 'Color with B and W sequences',
        'Color with grayscale sequences' => 'Color with grayscale sequences',
        'Color' => 'Color',
        'Grayscale with B and W sequences' => 'Grayscale with B and W sequences',
        'Grayscale with color sequences' => 'Grayscale with color sequences',
        'Grayscale' => 'Grayscale',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_contributor'
  $field_bases['field_contributor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_contributor_role'
  $field_bases['field_contributor_role'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contributor_role',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 1,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_copyright_owner'
  $field_bases['field_copyright_owner'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_creator'
  $field_bases['field_creator'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_creator_role'
  $field_bases['field_creator_role'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_creator_role',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 1,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_data_rate'
  $field_bases['field_data_rate'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_date_created'
  $field_bases['field_date_created'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date_created',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
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
    'translatable' => 1,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_date_issued'
  $field_bases['field_date_issued'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date_issued',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
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
    'translatable' => 1,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_description'
  $field_bases['field_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_description_type'
  $field_bases['field_description_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_description_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Abridged Version' => 'Abridged Version',
        'Air Version' => 'Air Version',
        'Alternative' => 'Alternative',
        'Art Work' => 'Art Work',
        'Article' => 'Article',
        'Book' => 'Book',
        'Caption' => 'Caption',
        'Caption File' => 'Caption File',
        'Captioned Version' => 'Captioned Version',
        'Cell Phone Version' => 'Cell Phone Version',
        'Chapter' => 'Chapter',
        'Chart' => 'Chart',
        'Clip' => 'Clip',
        'Collection' => 'Collection',
        'Courseware Class' => 'Courseware Class',
        'Courseware Module' => 'Courseware Module',
        'Descriptive Audio' => 'Descriptive Audio',
        'Diagram' => 'Diagram',
        'Drawing' => 'Drawing',
        'Drill and Practice' => 'Drill and Practice',
        'Electronic Academic Poster' => 'Electronic Academic Poster',
        'Episode' => 'Episode',
        'Full Version' => 'Full Version',
        'Game' => 'Game',
        'Graphic' => 'Graphic',
        'iPod Version' => 'iPod Version',
        'Issue' => 'Issue',
        'Kiosk Event' => 'Kiosk Event',
        'Lesson Plan' => 'Lesson Plan',
        'Linear Presentation' => 'Linear Presentation',
        'Lyrics' => 'Lyrics',
        'Manuscript' => 'Manuscript',
        'Map' => 'Map',
        'Model Building' => 'Model Building',
        'Model' => 'Model',
        'Multimedia Presentation' => 'Multimedia Presentation',
        'Music' => 'Music',
        'Nature or ambient sound' => 'Nature or ambient sound',
        'Other' => 'Other',
        'Package' => 'Package',
        'Packaging Version' => 'Packaging Version',
        'Periodical' => 'Periodical',
        'Photograph' => 'Photograph',
        'Picture' => 'Picture',
        'Pledge Version' => 'Pledge Version',
        'Postcard' => 'Postcard',
        'Poster' => 'Poster',
        'Program' => 'Program',
        'Project' => 'Project',
        'Published Version' => 'Published Version',
        'Quiz' => 'Quiz',
        'Reflection Activity' => 'Reflection Activity',
        'reTitle' => 'reTitle',
        'Role Play' => 'Role Play',
        'Scene' => 'Scene',
        'Score' => 'Score',
        'Segment' => 'Segment',
        'Selection or Excerpt' => 'Selection or Excerpt',
        'Self Assessment' => 'Self Assessment',
        'Series' => 'Series',
        'Shot' => 'Shot',
        'Simulation' => 'Simulation',
        'Slide Show' => 'Slide Show',
        'Song' => 'Song',
        'Study Guide' => 'Study Guide',
        'Summary' => 'Summary',
        'Syllabus' => 'Syllabus',
        'Teacher Guide' => 'Teacher Guide',
        'Test' => 'Test',
        'Traditional Academic Poster' => 'Traditional Academic Poster',
        'Transcript File' => 'Transcript File',
        'Voice' => 'Voice',
        'Web page/site' => 'Web page/site',
        'Web Version' => 'Web Version',
        'Working Title' => 'Working Title',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 1,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_digital_format'
  $field_bases['field_digital_format'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_digital_format',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_duration'
  $field_bases['field_duration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_edls_archived'
  $field_bases['field_edls_archived'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_edls_archived',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_encoding_scheme'
  $field_bases['field_encoding_scheme'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_extension'
  $field_bases['field_extension'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_extension_authority'
  $field_bases['field_extension_authority'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_file_size'
  $field_bases['field_file_size'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_format_id'
  $field_bases['field_format_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_format_id_source'
  $field_bases['field_format_id_source'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_format_standard'
  $field_bases['field_format_standard'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_format_standard',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'ATSC video interlaced' => 'ATSC video interlaced',
        'ATSC video progressive' => 'ATSC video progressive',
        'Dolby Digital AC3 Audio' => 'Dolby Digital AC3 Audio',
        'DTA Audio' => 'DTA Audio',
        'Film' => 'Film',
        'Flash Video' => 'Flash Video',
        'Linear PCM Audio' => 'Linear PCM Audio',
        'MPEG Audio' => 'MPEG Audio',
        'MPEG video' => 'MPEG video',
        'NTSC video interlaced' => 'NTSC video interlaced',
        'NTSC video progressive' => 'NTSC video progressive',
        'PAL video' => 'PAL video',
        'QuickTime' => 'QuickTime',
        'RealSystems' => 'RealSystems',
        'SDDS Audio' => 'SDDS Audio',
        'SECAM video' => 'SECAM video',
        'Windows Media' => 'Windows Media',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_frame_rate'
  $field_bases['field_frame_rate'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_frame_rate',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_frame_size'
  $field_bases['field_frame_size'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_generations'
  $field_bases['field_generations'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_generations',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_identifier'
  $field_bases['field_identifier'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_identifier_source'
  $field_bases['field_identifier_source'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_kmap_annotation'
  $field_bases['field_kmap_annotation'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kmap_annotation',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => TRUE,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_language'
  $field_bases['field_language'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_language',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 1,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_license'
  $field_bases['field_license'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_location'
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'foreign keys' => array(),
    'indexes' => array(
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'shanti_kmaps_fields',
    'settings' => array(
      'kmap_domain' => 'places',
    ),
    'translatable' => 0,
    'type' => 'shanti_kmaps_fields_default',
  );

  // Exported field_base: 'field_masters_archived'
  $field_bases['field_masters_archived'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_masters_archived',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_media_needs_re_editing'
  $field_bases['field_media_needs_re_editing'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media_needs_re_editing',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_media_needs_recompression'
  $field_bases['field_media_needs_recompression'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media_needs_recompression',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_media_problem_1'
  $field_bases['field_media_problem_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media_problem_1',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_media_problem_2'
  $field_bases['field_media_problem_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media_problem_2',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_media_problem_3'
  $field_bases['field_media_problem_3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media_problem_3',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_media_type'
  $field_bases['field_media_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_pbcore_annotation'
  $field_bases['field_pbcore_annotation'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_pbcore_contributor'
  $field_bases['field_pbcore_contributor'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_contributor',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => TRUE,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_coverage'
  $field_bases['field_pbcore_coverage'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_coverage',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_coverage_spatial'
  $field_bases['field_pbcore_coverage_spatial'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'mb_location',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_pbcore_creator'
  $field_bases['field_pbcore_creator'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_creator',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => TRUE,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_date_available'
  $field_bases['field_pbcore_date_available'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_date_available',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
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
    'translatable' => 1,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_pbcore_description'
  $field_bases['field_pbcore_description'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_description',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => TRUE,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_extension'
  $field_bases['field_pbcore_extension'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_extension',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => TRUE,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_format_id'
  $field_bases['field_pbcore_format_id'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_format_id',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => TRUE,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_identifier'
  $field_bases['field_pbcore_identifier'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_identifier',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_instantiation'
  $field_bases['field_pbcore_instantiation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_instantiation',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => TRUE,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_publisher'
  $field_bases['field_pbcore_publisher'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_publisher',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => TRUE,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_relation'
  $field_bases['field_pbcore_relation'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_relation',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => TRUE,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_rights_summary'
  $field_bases['field_pbcore_rights_summary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_pbcore_sponsor'
  $field_bases['field_pbcore_sponsor'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_sponsor',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_pbcore_title'
  $field_bases['field_pbcore_title'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pbcore_title',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => TRUE,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_physical_format'
  $field_bases['field_physical_format'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_physical_format',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '1 inch audio tape' => '1 inch audio tape',
        '1 inch videotape EL3400' => '1 inch videotape EL3400',
        '1 inch videotape EV 200' => '1 inch videotape EV 200',
        '1 inch videotape Helical BVH 1000' => '1 inch videotape Helical BVH 1000',
        '1 inch videotape IVC 700 or 800 or 900' => '1 inch videotape IVC 700 or 800 or 900',
        '1 inch videotape PI 3V' => '1 inch videotape PI 3V',
        '1 inch videotape SMPTE Type A' => '1 inch videotape SMPTE Type A',
        '1 inch videotape SMPTE Type B' => '1 inch videotape SMPTE Type B',
        '1 inch videotape SMPTE Type C' => '1 inch videotape SMPTE Type C',
        '2 inch audio tape' => '2 inch audio tape',
        '2 inch videotape Helical Ampex VR 1500' => '2 inch videotape Helical Ampex VR 1500',
        '2 inch videotape Helical IVC 9000' => '2 inch videotape Helical IVC 9000',
        '2 inch videotape Quad' => '2 inch videotape Quad',
        '2 inch videotape Sony Helical SV 201' => '2 inch videotape Sony Helical SV 201',
        '8 Track cassette' => '8 Track cassette',
        '8mm Digital 8' => '8mm Digital 8',
        '8mm Hi8 Video' => '8mm Hi8 Video',
        '8mm video' => '8mm video',
        'Art original' => 'Art original',
        'Art print' => 'Art print',
        'Art reproduction' => 'Art reproduction',
        'Audio cart' => 'Audio cart',
        'BD Videodisc' => 'BD Videodisc',
        'Betacam Digital Digi Beta' => 'Betacam Digital Digi Beta',
        'Betacam SP' => 'Betacam SP',
        'Betacam SX' => 'Betacam SX',
        'Betacam' => 'Betacam',
        'Betamax or Super or HB' => 'Betamax or Super or HB',
        'Binder' => 'Binder',
        'Book' => 'Book',
        'Cartivision' => 'Cartivision',
        'CD Audio' => 'CD Audio',
        'CD ROM' => 'CD ROM',
        'CD Video' => 'CD Video',
        'Chart' => 'Chart',
        'CVC' => 'CVC',
        'D1' => 'D1',
        'D2' => 'D2',
        'D3' => 'D3',
        'D5' => 'D5',
        'D6' => 'D6',
        'D7' => 'D7',
        'DARS DA 88' => 'DARS DA 88',
        'DAT' => 'DAT',
        'DBX 700 VHS tape' => 'DBX 700 VHS tape',
        'DCT' => 'DCT',
        'DV Mini' => 'DV Mini',
        'DVC Pro 25' => 'DVC Pro 25',
        'DVC Pro 50 P' => 'DVC Pro 50 P',
        'DVC Pro 50' => 'DVC Pro 50',
        'DVCam Sony' => 'DVCam Sony',
        'DVD Audio' => 'DVD Audio',
        'DVD minus R' => 'DVD minus R',
        'DVD minus RW' => 'DVD minus RW',
        'DVD plus R DL' => 'DVD plus R DL',
        'DVD plus R' => 'DVD plus R',
        'DVD plus RW' => 'DVD plus RW',
        'DVD Video' => 'DVD Video',
        'ED Beta' => 'ED Beta',
        'EIAJ Cartridge' => 'EIAJ Cartridge',
        'EVD Videodisc China' => 'EVD Videodisc China',
        'F1 Beta tape' => 'F1 Beta tape',
        'Film 16mm' => 'Film 16mm',
        'Film 35mm' => 'Film 35mm',
        'Film 70mm' => 'Film 70mm',
        'Film 8mm' => 'Film 8mm',
        'Filmstrip' => 'Filmstrip',
        'Flash card' => 'Flash card',
        'Flash Memory' => 'Flash Memory',
        'Flip chart' => 'Flip chart',
        'half inch audio tape' => 'half inch audio tape',
        'half inch digital audio' => 'half inch digital audio',
        'half inch videotape CV' => 'half inch videotape CV',
        'half inch videotape EIAJ Type 1' => 'half inch videotape EIAJ Type 1',
        'half inch videotape Hawkeye or Recam or M' => 'half inch videotape Hawkeye or Recam or M',
        'half inch videotape V2000' => 'half inch videotape V2000',
        'half inch videotape VCR' => 'half inch videotape VCR',
        'Hard Drive' => 'Hard Drive',
        'HD D5' => 'HD D5',
        'HD D9' => 'HD D9',
        'HD DVC PRO HD' => 'HD DVC PRO HD',
        'HD Videodisc' => 'HD Videodisc',
        'HDCAM' => 'HDCAM',
        'HDD1000' => 'HDD1000',
        'HDV1000' => 'HDV1000',
        'High 8 DA78' => 'High 8 DA78',
        'Kodak PhotoCD' => 'Kodak PhotoCD',
        'Lacquer discs or acetates' => 'Lacquer discs or acetates',
        'Laser Videodisc CAV 12inch' => 'Laser Videodisc CAV 12inch',
        'Laser Videodisc CLV 12 inch' => 'Laser Videodisc CLV 12 inch',
        'LP Record 45' => 'LP Record 45',
        'LP Record' => 'LP Record',
        'M II' => 'M II',
        'Macthronics MVC 10' => 'Macthronics MVC 10',
        'Manuscript' => 'Manuscript',
        'Minidisc' => 'Minidisc',
        'MPEG IMX' => 'MPEG IMX',
        'Newspaper' => 'Newspaper',
        'one eighth inch audio cassette' => 'one eighth inch audio cassette',
        'one fourth inch audio cassette' => 'one fourth inch audio cassette',
        'one fourth inch audio tape' => 'one fourth inch audio tape',
        'one fourth inch videotape Akai8' => 'one fourth inch videotape Akai8',
        'Paper' => 'Paper',
        'Periodical' => 'Periodical',
        'Photograph' => 'Photograph',
        'Picture' => 'Picture',
        'Postcard' => 'Postcard',
        'Poster' => 'Poster',
        'Radiograph' => 'Radiograph',
        'Roland DM 80' => 'Roland DM 80',
        'S VHS' => 'S VHS',
        'Shellac discs' => 'Shellac discs',
        'Slide' => 'Slide',
        'Stereograph' => 'Stereograph',
        'Study print' => 'Study print',
        'Technical drawing' => 'Technical drawing',
        'three quarters inch videotape Umatic SP' => 'three quarters inch videotape Umatic SP',
        'three quarters inch videotape Umatic' => 'three quarters inch videotape Umatic',
        'Transparency' => 'Transparency',
        'UMD Videodisc Sony' => 'UMD Videodisc Sony',
        'UniHi' => 'UniHi',
        'V Cord II' => 'V Cord II',
        'V Cord' => 'V Cord',
        'VHS' => 'VHS',
        'VTR150' => 'VTR150',
        'VTR600' => 'VTR600',
        'VX' => 'VX',
        'W VHS' => 'W VHS',
        'Wall chart' => 'Wall chart',
        'Wire' => 'Wire',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_place_data_present'
  $field_bases['field_place_data_present'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_place_data_present',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_publisher'
  $field_bases['field_publisher'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_publisher_rome'
  $field_bases['field_publisher_rome'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_publisher_rome',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 1,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_rating'
  $field_bases['field_rating'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rating',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'fivestar',
    'settings' => array(
      'axis' => 'vote',
    ),
    'translatable' => 0,
    'type' => 'fivestar',
  );

  // Exported field_base: 'field_recording_location'
  $field_bases['field_recording_location'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'mb_location',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_recording_location_new'
  $field_bases['field_recording_location_new'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_recording_location_new',
    'foreign keys' => array(),
    'indexes' => array(
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'shanti_kmaps_fields',
    'settings' => array(
      'kmap_domain' => 'places',
    ),
    'translatable' => 0,
    'type' => 'shanti_kmaps_fields_default',
  );

  // Exported field_base: 'field_relation_identifier'
  $field_bases['field_relation_identifier'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_relation_identifier',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_relation_type'
  $field_bases['field_relation_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_relation_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_sampling_rate'
  $field_bases['field_sampling_rate'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sampling_rate',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
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
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_sponser_role'
  $field_bases['field_sponser_role'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sponser_role',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'corporate' => 'Corporate Donor',
        'individual' => 'Individual Donor',
        'gov' => 'Governement Grant',
        'ngo' => 'NGO Grant',
        'other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_sponsor_name'
  $field_bases['field_sponsor_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sponsor_name',
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_start_time'
  $field_bases['field_start_time'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_subcollection'
  $field_bases['field_subcollection'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subcollection',
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
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'kmap_taxonomy',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_subcollection_new'
  $field_bases['field_subcollection_new'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subcollection_new',
    'foreign keys' => array(),
    'indexes' => array(
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'shanti_kmaps_fields',
    'settings' => array(
      'kmap_domain' => 'subjects',
    ),
    'translatable' => 0,
    'type' => 'shanti_kmaps_fields_default',
  );

  // Exported field_base: 'field_subject'
  $field_bases['field_subject'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subject',
    'foreign keys' => array(),
    'indexes' => array(
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'shanti_kmaps_fields',
    'settings' => array(
      'kmap_domain' => 'subjects',
    ),
    'translatable' => 0,
    'type' => 'shanti_kmaps_fields_default',
  );

  // Exported field_base: 'field_tags'
  $field_bases['field_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_thumbnail_image'
  $field_bases['field_thumbnail_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thumbnail_image',
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
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_tid'
  $field_bases['field_tid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tid',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_time'
  $field_bases['field_time'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_timecode_too_infrequent'
  $field_bases['field_timecode_too_infrequent'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_timecode_too_infrequent',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_timecoding_problem_1'
  $field_bases['field_timecoding_problem_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_timecoding_problem_1',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_timecoding_problem_2'
  $field_bases['field_timecoding_problem_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_timecoding_problem_2',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_title'
  $field_bases['field_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_title_type'
  $field_bases['field_title_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Abridged Version' => 'Abridged Version',
        'Air Version' => 'Air Version',
        'Alternative' => 'Alternative',
        'Art Work' => 'Art Work',
        'Article' => 'Article',
        'Book' => 'Book',
        'Caption File' => 'Caption File',
        'Captioned Version' => 'Captioned Version',
        'Cell Phone Version' => 'Cell Phone Version',
        'Chapter' => 'Chapter',
        'Chart' => 'Chart',
        'Clip' => 'Clip',
        'Collection' => 'Collection',
        'Courseware Class' => 'Courseware Class',
        'Courseware Module' => 'Courseware Module',
        'Descriptive Audio' => 'Descriptive Audio',
        'Diagram' => 'Diagram',
        'Drawing' => 'Drawing',
        'Drill and Practice' => 'Drill and Practice',
        'Electronic Academic Poster' => 'Electronic Academic Poster',
        'Episode' => 'Episode',
        'Full Version' => 'Full Version',
        'Game' => 'Game',
        'Graphic' => 'Graphic',
        'iPod Version' => 'iPod Version',
        'Issue' => 'Issue',
        'Kiosk Event' => 'Kiosk Event',
        'Lesson Plan' => 'Lesson Plan',
        'Linear Presentation' => 'Linear Presentation',
        'Lyrics' => 'Lyrics',
        'Manuscript' => 'Manuscript',
        'Map' => 'Map',
        'Model Building' => 'Model Building',
        'Model' => 'Model',
        'Multimedia Presentation' => 'Multimedia Presentation',
        'Music' => 'Music',
        'Nature or ambient sound' => 'Nature or ambient sound',
        'Other' => 'Other',
        'Package' => 'Package',
        'Packaging Version' => 'Packaging Version',
        'Periodical' => 'Periodical',
        'Photograph' => 'Photograph',
        'Picture' => 'Picture',
        'Pledge Version' => 'Pledge Version',
        'Postcard' => 'Postcard',
        'Poster' => 'Poster',
        'Program' => 'Program',
        'Project' => 'Project',
        'Published Version' => 'Published Version',
        'Quiz' => 'Quiz',
        'Reflection Activity' => 'Reflection Activity',
        'reTitle' => 'reTitle',
        'Role Play' => 'Role Play',
        'Scene' => 'Scene',
        'Score' => 'Score',
        'Segment' => 'Segment',
        'Selection or Excerpt' => 'Selection or Excerpt',
        'Self Assessment' => 'Self Assessment',
        'Series' => 'Series',
        'Shot' => 'Shot',
        'Simulation' => 'Simulation',
        'Slide Show' => 'Slide Show',
        'Song' => 'Song',
        'Study Guide' => 'Study Guide',
        'Syllabus' => 'Syllabus',
        'Teacher Guide' => 'Teacher Guide',
        'Test' => 'Test',
        'Traditional Academic Poster' => 'Traditional Academic Poster',
        'Transcript File' => 'Transcript File',
        'Voice' => 'Voice',
        'Web page/site' => 'Web page/site',
        'Web Version' => 'Web Version',
        'Working Title' => 'Working Title',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 1,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_track_data'
  $field_bases['field_track_data'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_trans_proofed_lang_1'
  $field_bases['field_trans_proofed_lang_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_trans_proofed_lang_1',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_trans_proofed_lang_2'
  $field_bases['field_trans_proofed_lang_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_trans_proofed_lang_2',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_trans_proofed_lang_3'
  $field_bases['field_trans_proofed_lang_3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_trans_proofed_lang_3',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_transcript'
  $field_bases['field_transcript'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 1,
      'display_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_translation_lang_3'
  $field_bases['field_translation_lang_3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_translation_lang_3',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_translation_language_1'
  $field_bases['field_translation_language_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_translation_language_1',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'Problem' => 'Problem',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_translation_language_2'
  $field_bases['field_translation_language_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_translation_language_2',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'Problem' => 'Problem',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_video'
  $field_bases['field_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'field_kaltura',
    'settings' => array(
      'add_existing' => 'upload',
      'content_ingestion' => array(
        'add_existing' => 'upload',
        'advanced' => array(
          'custom_cw' => '',
        ),
        'kcw_button_text' => 'Upload or Record a Video',
      ),
      'custom_cw' => '',
      'custom_player' => '',
      'delivery' => 'HTTP',
      'entry_widget' => 24762821,
      'kaltura_entry_video_display' => array(
        'advanced' => array(
          'custom_player' => '',
        ),
        'delivery' => 'HTTP',
        'entry_widget' => 48501,
        'player_height' => 330,
        'player_width' => 400,
      ),
      'kcw_button_text' => 'Add Media',
      'player_height' => 330,
      'player_width' => 400,
      'rotate' => 0,
      'stretch' => 0,
      'thumbsize' => array(
        'rotate' => 0,
        'thumbsize_height' => 45,
        'thumbsize_width' => 80,
      ),
      'thumbsize_height' => 45,
      'thumbsize_width' => 80,
    ),
    'translatable' => 1,
    'type' => 'field_kaltura_entryid',
  );

  // Exported field_base: 'field_video_quality_acceptable'
  $field_bases['field_video_quality_acceptable'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_quality_acceptable',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not Reviewed' => 'Not Reviewed',
        'Yes' => 'Yes',
        'No' => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_workflow'
  $field_bases['field_workflow'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_workflow',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_year_published'
  $field_bases['field_year_published'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'group_content_access'
  $field_bases['group_content_access'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'group_content_access',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'no_ui' => TRUE,
    'settings' => array(
      'allowed_values' => array(
        0 => 'Use group defaults',
        1 => 'Public - accessible to all site users',
        2 => 'Private - accessible only to group members',
        3 => 'UVa - accessible only to the UVa community',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'kmap_id'
  $field_bases['kmap_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'kmap_id',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'kmap_taxonomy',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'kmap_parent_id'
  $field_bases['kmap_parent_id'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'kmap_parent_id',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'kmap_taxonomy',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'place_dictionary_id'
  $field_bases['place_dictionary_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'place_dictionary_id',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'mb_location',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
