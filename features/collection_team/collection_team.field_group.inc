<?php
/**
 * @file
 * collection_team.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function collection_team_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_and_access|node|collection|default';
  $field_group->group_name = 'group_type_and_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'collection';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collection Type and Access',
    'weight' => '2',
    'children' => array(
      0 => 'group_group',
      1 => 'group_access',
      2 => 'og_roles_permissions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Collection Type and Access',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_type_and_access|node|collection|default'] = $field_group;

  return $export;
}
