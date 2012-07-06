<?php
/**
 * @file
 * audio_video.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function audio_video_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_availability_access|node|audio|default';
  $field_group->group_name = 'group_availability_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Availability & Access',
    'weight' => '8',
    'children' => array(
      0 => 'field_available_from',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Availability & Access',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_availability_access|node|audio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_availability_access|node|audio|form';
  $field_group->group_name = 'group_availability_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Availability & Access',
    'weight' => '6',
    'children' => array(
      0 => 'field_available_from',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_availability_access|node|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_availability_access|node|video|default';
  $field_group->group_name = 'group_availability_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Availability & Access',
    'weight' => '8',
    'children' => array(
      0 => 'field_available_from',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Availability & Access',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_availability_access|node|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_availability_access|node|video|form';
  $field_group->group_name = 'group_availability_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Availability & Access',
    'weight' => '6',
    'children' => array(
      0 => 'field_available_from',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_availability_access|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catalog_workflow|node|video|default';
  $field_group->group_name = 'group_catalog_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catalog Record Workflow',
    'weight' => '12',
    'children' => array(
      0 => 'field_basic_catalog',
      1 => 'field_proofed_catalog',
      2 => 'field_extended_cataloging',
      3 => 'field_translation_lang_1',
      4 => 'field_translation_lang_2',
      5 => 'field_catalog_workflow_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Catalog Record Workflow',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_catalog_workflow|node|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catalog_workflow|node|video|form';
  $field_group->group_name = 'group_catalog_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catalog Record Workflow',
    'weight' => '10',
    'children' => array(
      0 => 'field_basic_catalog',
      1 => 'field_proofed_catalog',
      2 => 'field_extended_cataloging',
      3 => 'field_translation_lang_1',
      4 => 'field_translation_lang_2',
      5 => 'field_catalog_workflow_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Catalog Record Workflow',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_catalog_workflow|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|audio|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_characteristic',
      1 => 'field_pbcore_coverage',
      2 => 'field_pbcore_coverage_spatial',
      3 => 'field_pbcore_relation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details|node|audio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|audio|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_characteristic',
      1 => 'field_pbcore_coverage',
      2 => 'field_pbcore_coverage_spatial',
      3 => 'field_pbcore_relation',
      4 => 'field_kmap_annotation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_details|node|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|video|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_pbcore_coverage',
      1 => 'field_characteristic',
      2 => 'field_pbcore_coverage_spatial',
      3 => 'field_pbcore_relation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details|node|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|video|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_pbcore_coverage',
      1 => 'field_characteristic',
      2 => 'field_pbcore_coverage_spatial',
      3 => 'field_pbcore_relation',
      4 => 'field_kmap_annotation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_workflow|node|video|default';
  $field_group->group_name = 'group_media_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media Workflow',
    'weight' => '11',
    'children' => array(
      0 => 'field_media_present',
      1 => 'field_media_quality_ok',
      2 => 'field_media_recompress',
      3 => 'field_media_masters_archived',
      4 => 'field_edl_log_files',
      5 => 'field_media_workflow_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Media Workflow',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_media_workflow|node|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_workflow|node|video|form';
  $field_group->group_name = 'group_media_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media Workflow',
    'weight' => '9',
    'children' => array(
      0 => 'field_media_present',
      1 => 'field_media_quality_ok',
      2 => 'field_media_recompress',
      3 => 'field_media_masters_archived',
      4 => 'field_edl_log_files',
      5 => 'field_media_workflow_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Media Workflow',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_media_workflow|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|audio|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_audio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|video|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_media|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|audio|default';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'People',
    'weight' => '6',
    'children' => array(
      0 => 'field_pbcore_contributor',
      1 => 'field_pbcore_creator',
      2 => 'field_pbcore_publisher',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'People',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_people|node|audio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|audio|form';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'People & Copyrights',
    'weight' => '7',
    'children' => array(
      0 => 'field_pbcore_contributor',
      1 => 'field_pbcore_creator',
      2 => 'field_pbcore_publisher',
      3 => 'field_pbcore_rights_summary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_people|node|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|video|default';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'People',
    'weight' => '6',
    'children' => array(
      0 => 'field_pbcore_contributor',
      1 => 'field_pbcore_creator',
      2 => 'field_pbcore_publisher',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'People',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_people|node|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|video|form';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'People & Copyrights',
    'weight' => '7',
    'children' => array(
      0 => 'field_pbcore_contributor',
      1 => 'field_pbcore_creator',
      2 => 'field_pbcore_publisher',
      3 => 'field_pbcore_rights_summary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_people|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rights|node|audio|default';
  $field_group->group_name = 'group_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rights & Licensing',
    'weight' => '7',
    'children' => array(
      0 => 'field_copyright_owner',
      1 => 'field_license',
      2 => 'field_pbcore_rights_summary',
      3 => 'field_year_published',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Rights & Licensing',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_rights|node|audio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rights|node|audio|form';
  $field_group->group_name = 'group_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rights & Licensing',
    'weight' => '5',
    'children' => array(
      0 => 'field_copyright_owner',
      1 => 'field_license',
      2 => 'field_year_published',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rights|node|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rights|node|video|default';
  $field_group->group_name = 'group_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rights & Licensing',
    'weight' => '7',
    'children' => array(
      0 => 'field_copyright_owner',
      1 => 'field_license',
      2 => 'field_pbcore_rights_summary',
      3 => 'field_year_published',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Rights & Licensing',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_rights|node|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rights|node|video|form';
  $field_group->group_name = 'group_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rights & Licensing',
    'weight' => '5',
    'children' => array(
      0 => 'field_copyright_owner',
      1 => 'field_license',
      2 => 'field_year_published',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rights|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical|node|audio|default';
  $field_group->group_name = 'group_technical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical Metadata',
    'weight' => '9',
    'children' => array(
      0 => 'field_pbcore_identifier',
      1 => 'field_pbcore_instantiation',
      2 => 'field_recording_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technical Metadata',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_technical|node|audio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical|node|audio|form';
  $field_group->group_name = 'group_technical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Techinical Metadata',
    'weight' => '8',
    'children' => array(
      0 => 'field_pbcore_extension',
      1 => 'field_pbcore_identifier',
      2 => 'field_pbcore_instantiation',
      3 => 'field_recording_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_technical|node|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical|node|video|default';
  $field_group->group_name = 'group_technical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical Metadata',
    'weight' => '9',
    'children' => array(
      0 => 'field_pbcore_identifier',
      1 => 'field_pbcore_instantiation',
      2 => 'field_recording_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technical Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_technical|node|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical|node|video|form';
  $field_group->group_name = 'group_technical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical Metadata',
    'weight' => '8',
    'children' => array(
      0 => 'field_pbcore_extension',
      1 => 'field_pbcore_identifier',
      2 => 'field_pbcore_instantiation',
      3 => 'field_recording_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technical Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_technical|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_desc|node|audio|default';
  $field_group->group_name = 'group_title_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title & Description',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_title_desc|node|audio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_desc|node|audio|form';
  $field_group->group_name = 'group_title_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title & Description',
    'weight' => '3',
    'children' => array(
      0 => 'field_pbcore_description',
      1 => 'field_pbcore_title',
      2 => 'field_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_title_desc|node|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_desc|node|video|default';
  $field_group->group_name = 'group_title_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title & Description',
    'weight' => '4',
    'children' => array(
      0 => 'field_pbcore_description',
      1 => 'field_pbcore_title',
      2 => 'field_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_title_desc|node|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_desc|node|video|form';
  $field_group->group_name = 'group_title_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title & Description',
    'weight' => '3',
    'children' => array(
      0 => 'field_pbcore_description',
      1 => 'field_pbcore_title',
      2 => 'field_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_title_desc|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_transcript_workflow|node|video|default';
  $field_group->group_name = 'group_transcript_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Transcript Worflow',
    'weight' => '13',
    'children' => array(
      0 => 'field_transcript_input',
      1 => 'field_transcript_timecoded',
      2 => 'field_timecode_ok',
      3 => 'field_timecode_problem_1',
      4 => 'field_timecode_problem_2',
      5 => 'field_transcript_proofed',
      6 => 'field_transcript_input_lang_1',
      7 => 'field_transcript_input_lang_2',
      8 => 'field_transcript_input_lang_3',
      9 => 'field_transcript_proofed_lang_1',
      10 => 'field_transcript_proofed_lang_2',
      11 => 'field_transcript_proofed_lang_3',
      12 => 'field_transcript_workflow_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Transcript Worflow',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_transcript_workflow|node|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_transcript_workflow|node|video|form';
  $field_group->group_name = 'group_transcript_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Transcript Worflow',
    'weight' => '11',
    'children' => array(
      0 => 'field_transcript_input',
      1 => 'field_transcript_timecoded',
      2 => 'field_timecode_ok',
      3 => 'field_timecode_problem_1',
      4 => 'field_timecode_problem_2',
      5 => 'field_transcript_proofed',
      6 => 'field_transcript_input_lang_1',
      7 => 'field_transcript_input_lang_2',
      8 => 'field_transcript_input_lang_3',
      9 => 'field_transcript_proofed_lang_1',
      10 => 'field_transcript_proofed_lang_2',
      11 => 'field_transcript_proofed_lang_3',
      12 => 'field_transcript_workflow_note',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Transcript Worflow',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_transcript_workflow|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_transcript|node|audio|form';
  $field_group->group_name = 'group_transcript';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Transcript',
    'weight' => '2',
    'children' => array(
      0 => 'field_transcript',
      1 => 'field_transcripts_xsl',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Transcript',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_transcript|node|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_transcript|node|video|form';
  $field_group->group_name = 'group_transcript';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Transcript',
    'weight' => '2',
    'children' => array(
      0 => 'field_transcript',
      1 => 'field_transcripts_xsl',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Transcript',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_transcript|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow|node|audio|default';
  $field_group->group_name = 'group_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workflow',
    'weight' => '10',
    'children' => array(
      0 => 'field_catalog_record',
      1 => 'field_transcription',
      2 => 'field_translation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Workflow',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_workflow|node|audio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow|node|audio|form';
  $field_group->group_name = 'group_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workflow',
    'weight' => '9',
    'children' => array(
      0 => 'field_av_file',
      1 => 'field_catalog_record',
      2 => 'field_transcription',
      3 => 'field_translation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_workflow|node|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow|node|video|default';
  $field_group->group_name = 'group_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workflow',
    'weight' => '10',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Workflow',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_workflow|node|video|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow|node|video|form';
  $field_group->group_name = 'group_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workflow',
    'weight' => '11',
    'children' => array(
      0 => 'field_av_file',
      1 => 'field_catalog_record',
      2 => 'field_transcription',
      3 => 'field_translation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Workflow',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_workflow|node|video|form'] = $field_group;

  return $export;
}
