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
        'classes' => ' group-availability-access field-group-fieldset',
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
      1 => 'group_content_access',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Availability & Access',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-availability-access field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
    'weight' => '6',
    'children' => array(
      0 => 'field_available_from',
      1 => 'group_content_access',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Availability & Access',
      'instance_settings' => array(
        'classes' => ' group-availability-access field-group-fieldset',
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
      1 => 'group_content_access',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Availability & Access',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-availability-access field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_availability_access|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catalog_record_workflow|field_collection_item|field_workflow|form';
  $field_group->group_name = 'group_catalog_record_workflow';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_workflow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catalog Record Workflow',
    'weight' => '1',
    'children' => array(
      0 => 'field_basic_cataloging',
      1 => 'field_cataloging_proofed',
      2 => 'field_place_data_present',
      3 => 'field_translation_language_1',
      4 => 'field_translation_language_2',
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
  $export['group_catalog_record_workflow|field_collection_item|field_workflow|form'] = $field_group;

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
      0 => 'field_pbcore_coverage',
      1 => 'field_pbcore_title',
      2 => 'group_audience',
      3 => 'field_pbcore_relation',
      4 => 'field_subcollection_new',
      5 => 'field_subject',
      6 => 'field_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-details field-group-fieldset',
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
      2 => 'group_audience',
      3 => 'field_pbcore_coverage_spatial',
      4 => 'field_pbcore_relation',
      5 => 'field_kmap_annotation',
      6 => 'field_subcollection',
      7 => 'field_subcollection_new',
      8 => 'field_subject',
      9 => 'field_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
    'weight' => '3',
    'children' => array(
      0 => 'field_pbcore_coverage',
      1 => 'field_pbcore_title',
      2 => 'field_pbcore_relation',
      3 => 'field_location',
      4 => 'field_subcollection_new',
      5 => 'field_subject',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-details field-group-fieldset',
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
    'weight' => '3',
    'children' => array(
      0 => 'field_pbcore_coverage',
      1 => 'field_characteristic',
      2 => 'group_audience',
      3 => 'field_pbcore_coverage_spatial',
      4 => 'field_pbcore_relation',
      5 => 'field_kmap_annotation',
      6 => 'field_subcollection',
      7 => 'field_subject',
      8 => 'field_location',
      9 => 'field_subcollection_new',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_details|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_workflow|field_collection_item|field_workflow|form';
  $field_group->group_name = 'group_media_workflow';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_workflow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media Workflow',
    'weight' => '0',
    'children' => array(
      0 => 'field_audio_quality_acceptable',
      1 => 'field_edls_archived',
      2 => 'field_masters_archived',
      3 => 'field_media_needs_re_editing',
      4 => 'field_media_needs_recompression',
      5 => 'field_media_problem_1',
      6 => 'field_media_problem_2',
      7 => 'field_media_problem_3',
      8 => 'field_video_quality_acceptable',
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
  $export['group_media_workflow|field_collection_item|field_workflow|form'] = $field_group;

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
      1 => 'field_thumbnail_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-media field-group-fieldset',
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
        'classes' => ' group-media field-group-fieldset',
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
        'classes' => ' group-people field-group-fieldset',
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
      'label' => 'People & Copyrights',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-people field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
    'weight' => '4',
    'children' => array(
      0 => 'field_pbcore_contributor',
      1 => 'field_pbcore_creator',
      2 => 'field_pbcore_publisher',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'People',
      'instance_settings' => array(
        'classes' => ' group-people field-group-fieldset',
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
      'label' => 'People & Copyrights',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-people field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
        'classes' => ' group-rights field-group-fieldset',
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
      'label' => 'Rights & Licensing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-rights field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
    'weight' => '5',
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
        'classes' => ' group-rights field-group-fieldset',
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
      'label' => 'Rights & Licensing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-rights field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
      2 => 'field_recording_location_new',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technical Metadata',
      'instance_settings' => array(
        'classes' => ' group-technical field-group-fieldset',
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
    'label' => 'Technical Metadata',
    'weight' => '8',
    'children' => array(
      0 => 'field_pbcore_extension',
      1 => 'field_pbcore_identifier',
      2 => 'field_pbcore_instantiation',
      3 => 'field_recording_location',
      4 => 'field_recording_location_new',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technical Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-technical field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
    'weight' => '8',
    'children' => array(
      0 => 'field_pbcore_identifier',
      1 => 'field_pbcore_instantiation',
      2 => 'field_recording_location_new',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technical Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-technical field-group-fieldset',
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
      4 => 'field_recording_location_new',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technical Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-technical field-group-fieldset',
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
      'label' => 'Title & Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-title-desc field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
    'weight' => '2',
    'children' => array(
      0 => 'field_pbcore_description',
      1 => 'field_pbcore_title',
      2 => 'field_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Title & Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-title-desc field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_title_desc|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_transcript_workflow|field_collection_item|field_workflow|form';
  $field_group->group_name = 'group_transcript_workflow';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_workflow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Transcript Workflow',
    'weight' => '2',
    'children' => array(
      0 => 'field_timecode_too_infrequent',
      1 => 'field_timecoding_problem_1',
      2 => 'field_timecoding_problem_2',
      3 => 'field_trans_proofed_lang_1',
      4 => 'field_trans_proofed_lang_2',
      5 => 'field_trans_proofed_lang_3',
      6 => 'field_translation_lang_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Transcript Workflow',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_transcript_workflow|field_collection_item|field_workflow|form'] = $field_group;

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
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Transcript',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-transcript field-group-fieldset',
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
    'weight' => '4',
    'children' => array(
      0 => 'field_transcript',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Transcript',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-transcript field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_transcript|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow|field_collection_item|field_workflow|default';
  $field_group->group_name = 'group_workflow';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_workflow';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workflow',
    'weight' => '0',
    'children' => array(
      0 => 'field_audio_quality_acceptable',
      1 => 'field_basic_cataloging',
      2 => 'field_catalog_workflow_note',
      3 => 'field_cataloging_proofed',
      4 => 'field_edl_log_files',
      5 => 'field_edls_archived',
      6 => 'field_extended_cataloging',
      7 => 'field_masters_archived',
      8 => 'field_media_needs_re_editing',
      9 => 'field_media_needs_recompression',
      10 => 'field_media_present',
      11 => 'field_media_problem_1',
      12 => 'field_media_problem_2',
      13 => 'field_media_problem_3',
      14 => 'field_media_workflow_note',
      15 => 'field_place_data_present',
      16 => 'field_timecode_too_infrequent',
      17 => 'field_timecoding_problem_1',
      18 => 'field_timecoding_problem_2',
      19 => 'field_trans_proofed_lang_1',
      20 => 'field_trans_proofed_lang_2',
      21 => 'field_trans_proofed_lang_3',
      22 => 'field_transcript_input',
      23 => 'field_transcript_proofed',
      24 => 'field_transcript_timecoded',
      25 => 'field_transcript_workflow_note',
      26 => 'field_translation_lang_1',
      27 => 'field_translation_lang_2',
      28 => 'field_translation_lang_3',
      29 => 'field_translation_language_1',
      30 => 'field_translation_language_2',
      31 => 'field_video_quality_acceptable',
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
  $export['group_workflow|field_collection_item|field_workflow|default'] = $field_group;

  return $export;
}
