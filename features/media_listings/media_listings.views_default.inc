<?php
/**
 * @file
 * media_listings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function media_listings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'browse_media';
  $view->description = '';
  $view->tag = 'mediabase';
  $view->base_table = 'node';
  $view->human_name = 'Browse Media';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Browse Media';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'pagerer';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['preset'] = 'core_replace';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<span class="label">Recent Additions</span> <span class="count">(Displaying @start - @end of @total)</span>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_video']['type'] = 'field_kaltura_thumbnail_only';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'thumbsize' => array(
      'thumbsize_width' => '90',
      'thumbsize_height' => '',
    ),
    'kaltura_entry_video_display' => array(
      'entry_widget' => '48501',
    ),
    'player_width' => '400',
    'player_height' => '330',
    'dispaly_metadata' => 0,
  );
  $handler->display->display_options['fields']['field_video']['group_column'] = 'entryid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'by';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Home Block */
  $handler = $view->new_display('block', 'Home Block', 'home_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '>';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'secondary_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<span class="label">Recent Additions</span> <span class="count">(Displaying @start - @end of @total)</span>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="no-results"><p><strong>No AV assets match these search criteria</strong></p></div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_video']['type'] = 'field_kaltura_thumbnail_only';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'thumbsize' => array(
      'thumbsize_width' => '90',
      'thumbsize_height' => '',
    ),
    'kaltura_entry_video_display' => array(
      'entry_widget' => '48501',
    ),
    'player_width' => '400',
    'player_height' => '330',
    'dispaly_metadata' => 0,
  );
  $handler->display->display_options['fields']['field_video']['group_column'] = 'entryid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'by';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['name']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Creator';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['type_1']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'collection_pane');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This collection has no associated content at the moment.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Collection (field_og_collection_ref) */
  $handler->display->display_options['arguments']['field_og_collection_ref_target_id']['id'] = 'field_og_collection_ref_target_id';
  $handler->display->display_options['arguments']['field_og_collection_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['field_og_collection_ref_target_id']['field'] = 'field_og_collection_ref_target_id';
  $handler->display->display_options['arguments']['field_og_collection_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_og_collection_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_og_collection_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_og_collection_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_og_collection_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_og_collection_ref_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_og_collection_ref_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Collection (field_og_collection_ref)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: My Media */
  $handler = $view->new_display('page', 'My Media', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Media';
  $handler->display->display_options['display_description'] = 'Show all media belonging to the user';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'my-content/media';

  /* Display: My Collections */
  $handler = $view->new_display('page', 'My Collections', 'my_collections');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Media';
  $handler->display->display_options['display_description'] = 'Show all collections and subcollections belonging to the user';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
    'subcollection' => 'subcollection',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'my-content/collections';
  $export['browse_media'] = $view;

  $view = new view();
  $view->name = 'media_by_kmap';
  $view->description = '';
  $view->tag = 'mediabase';
  $view->base_table = 'node';
  $view->human_name = 'Media By Kmap';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media By Category';
  $handler->display->display_options['css_class'] = 'shanti-gallery';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'pagerer';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '24,48,96';
  $handler->display->display_options['pager']['options']['preset'] = 'core_replace';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'shanti-thumbnail';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'shanti-gallery';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<?php
module_load_include(\'inc\',\'kmap_taxonomy\',\'includes/kmap\');
$kmap = new Kmap(%1);
$t = $kmap->get_term();
print \'<h1>No Entries Found</h1> <p>No audio-video entries tagged with \' . $t->name . \' were found.</p>\';
?>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['alter']['text'] = '<div class="shanti-thumbnail-image shanti-field-audio"> <a href="[path]" class="shanti-thumbnail-link">
    <span class="overlay">
        <span class="icon"></span>
    </span>
    [field_audio]
    <span class="icon shanticon-audio"></span>  
</a>
</div>';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_audio']['type'] = 'field_kaltura_thumbnail_only';
  $handler->display->display_options['fields']['field_audio']['settings'] = array(
    'thumbsize_width' => '170',
    'thumbsize_height' => '140',
    'rotate' => 0,
    'entry_widget' => '48501',
    'player_width' => '400',
    'player_height' => '330',
    'display_metadata' => 0,
    'delivery' => 'HTTP',
    'custom_player' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video']['alter']['text'] = '<div class="shanti-thumbnail-image shanti-field-video"> <a href="[path]" class="shanti-thumbnail-link">
    <span class="overlay">
        <span class="icon"></span>
    </span>
    [field_video]
    <span class="icon shanticon-video"></span>  
</a>
</div>';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['empty'] = '[field_audio]';
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_video']['type'] = 'field_kaltura_thumbnail_only';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'thumbsize_width' => '170',
    'thumbsize_height' => '140',
    'rotate' => 0,
    'entry_widget' => '48501',
    'player_width' => '400',
    'player_height' => '330',
    'display_metadata' => 0,
    'delivery' => 'HTTP',
    'custom_player' => '',
  );
  $handler->display->display_options['fields']['field_video']['group_column'] = 'entryid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = '';
  $handler->display->display_options['fields']['group_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['realname']['alter']['text'] = '[field_video]
<div class="shanti-thumbnail-info">      
	     <div class="body-wrap">
	      <div class="shanti-thumbnail-field shanti-field-title">        
	         <span class="field-content"><a href="[path]" class="shanti-thumbnail-link">[title]</a></span>  
	      </div>  
	      
	      <div class="shanti-thumbnail-field shanti-field-created">       
	          <span class="shanti-field-content">[created]</span>  
	      </div>  
            
              <div class="shanti-field shanti-field-group-audience">     
            <div class="shanti-field-content shanti-thumbnail-link">[group_audience]</div>  
        </div>  
          </div> <!-- end body-wrap -->
    
    <div class="footer-wrap">  
          </div> <!-- end footer -->  
   </div>';
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_tags_tid']['group'] = '0';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Subject List */
  $handler = $view->new_display('page', 'Subject List', 'list_subjects');
  $handler->display->display_options['display_description'] = 'List of A/V nodes tagged with a KMap subject';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '(Displaying @start - @end of @total)';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['alter']['text'] = '<div class="shanti-thumbnail-image shanti-field-audio"> <a href="[path]" class="shanti-thumbnail-link">
    <span class="overlay">
        <span class="icon"></span>
    </span>
    [field_audio]
    <span class="icon shanticon-audio"></span>  
</a>
</div>';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_audio']['type'] = 'field_kaltura_thumbnail_only';
  $handler->display->display_options['fields']['field_audio']['settings'] = array(
    'thumbsize_width' => '170',
    'thumbsize_height' => '140',
    'rotate' => 0,
    'entry_widget' => '48501',
    'player_width' => '400',
    'player_height' => '330',
    'display_metadata' => 0,
    'delivery' => 'HTTP',
    'custom_player' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video']['alter']['text'] = '<div class="shanti-thumbnail-image shanti-field-video"> <a href="[path]" class="shanti-thumbnail-link">
    <span class="overlay">
        <span class="icon"></span>
    </span>
    [field_video]
    <span class="icon shanticon-video"></span>  
</a>
</div>';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['empty'] = '[field_audio]';
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_video']['type'] = 'field_kaltura_thumbnail_only';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'thumbsize_width' => '170',
    'thumbsize_height' => '140',
    'rotate' => 0,
    'entry_widget' => '48501',
    'player_width' => '400',
    'player_height' => '330',
    'display_metadata' => 0,
    'delivery' => 'HTTP',
    'custom_player' => '',
  );
  $handler->display->display_options['fields']['field_video']['group_column'] = 'entryid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = '';
  $handler->display->display_options['fields']['group_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['realname']['alter']['text'] = '[field_video]
<div class="shanti-thumbnail-info">      
	     <div class="body-wrap">
	      <div class="shanti-thumbnail-field shanti-field-title">        
	         <span class="field-content"><a href="[path]" class="shanti-thumbnail-link">[title]</a></span>  
	      </div>  
	      
	      <div class="shanti-thumbnail-field shanti-field-created">       
	          <span class="shanti-field-content">[created]</span>  
	      </div>  
            
              <div class="shanti-field shanti-field-group-audience">     
            <div class="shanti-field-content"><a href="#" class="shanti-thumbnail-link">[group_audience]</a>
            </div>  
        </div>  
          </div> <!-- end body-wrap -->
    
    <div class="footer-wrap">  
          </div> <!-- end footer -->  
   </div>';
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Subject (field_subject:id) */
  $handler->display->display_options['arguments']['field_subject_id']['id'] = 'field_subject_id';
  $handler->display->display_options['arguments']['field_subject_id']['table'] = 'field_data_field_subject';
  $handler->display->display_options['arguments']['field_subject_id']['field'] = 'field_subject_id';
  $handler->display->display_options['arguments']['field_subject_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_subject_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_subject_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_subject_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_subject_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_subject_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'list/subjects/%';

  /* Display: Subcollection List */
  $handler = $view->new_display('page', 'Subcollection List', 'list_subcollections');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Media By Subcollection';
  $handler->display->display_options['display_description'] = 'List of Nodes by Kmap Subcollection';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '(Displaying @start - @end of @total)';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Subcollection (field_subcollection_new:id) */
  $handler->display->display_options['arguments']['field_subcollection_new_id']['id'] = 'field_subcollection_new_id';
  $handler->display->display_options['arguments']['field_subcollection_new_id']['table'] = 'field_data_field_subcollection_new';
  $handler->display->display_options['arguments']['field_subcollection_new_id']['field'] = 'field_subcollection_new_id';
  $handler->display->display_options['arguments']['field_subcollection_new_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_subcollection_new_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_subcollection_new_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_subcollection_new_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_subcollection_new_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_subcollection_new_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'list/subcollections/%';

  /* Display: Location List */
  $handler = $view->new_display('page', 'Location List', 'list_places');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Media By Location';
  $handler->display->display_options['display_description'] = 'List of Nodes by Kmap Location';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '(Displaying @start - @end of @total)';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['alter']['text'] = '<div class="shanti-thumbnail-image shanti-field-audio"> <a href="[path]" class="shanti-thumbnail-link">
    <span class="overlay">
        <span class="icon"></span>
    </span>
    [field_audio]
    <span class="icon shanticon-audio"></span>  
</a>
</div>';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_audio']['type'] = 'field_kaltura_thumbnail_only';
  $handler->display->display_options['fields']['field_audio']['settings'] = array(
    'thumbsize_width' => '170',
    'thumbsize_height' => '140',
    'rotate' => 0,
    'entry_widget' => '48501',
    'player_width' => '400',
    'player_height' => '330',
    'display_metadata' => 0,
    'delivery' => 'HTTP',
    'custom_player' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video']['alter']['text'] = '<div class="shanti-thumbnail-image shanti-field-video"> <a href="[path]" class="shanti-thumbnail-link">
    <span class="overlay">
        <span class="icon"></span>
    </span>
    [field_video]
    <span class="icon shanticon-video"></span>  
</a>
</div>';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['empty'] = '[field_audio]';
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_video']['type'] = 'field_kaltura_thumbnail_only';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'thumbsize_width' => '170',
    'thumbsize_height' => '140',
    'rotate' => 0,
    'entry_widget' => '48501',
    'player_width' => '400',
    'player_height' => '330',
    'display_metadata' => 0,
    'delivery' => 'HTTP',
    'custom_player' => '',
  );
  $handler->display->display_options['fields']['field_video']['group_column'] = 'entryid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = '';
  $handler->display->display_options['fields']['group_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_video]
<div class="shanti-thumbnail-info">      
	     <div class="body-wrap">
	      <div class="shanti-thumbnail-field shanti-field-title">        
	         <span class="field-content"><a href="[path]" class="shanti-thumbnail-link">[title]</a></span>  
	      </div>  
	      
	      <div class="shanti-thumbnail-field shanti-field-created">       
	          <span class="shanti-field-content">[created]</span>  
	      </div>  
            
              <div class="shanti-field shanti-field-group-audience">     
            <div class="shanti-field-content shanti-thumbnail-link">[group_audience]</div>  
        </div>  
          </div> <!-- end body-wrap -->
    
    <div class="footer-wrap">  
          </div> <!-- end footer -->  
   </div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Location (field_location:id) */
  $handler->display->display_options['arguments']['field_location_id']['id'] = 'field_location_id';
  $handler->display->display_options['arguments']['field_location_id']['table'] = 'field_data_field_location';
  $handler->display->display_options['arguments']['field_location_id']['field'] = 'field_location_id';
  $handler->display->display_options['arguments']['field_location_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_location_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_location_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_location_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_location_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_location_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'list/places/%';
  $export['media_by_kmap'] = $view;

  $view = new view();
  $view->name = 'media_by_location';
  $view->description = '';
  $view->tag = 'mediabase';
  $view->base_table = 'node';
  $view->human_name = 'Media By Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media By Location';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '60';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '12,24,60,48,96';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'shanti-teaser';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_audio']['alter']['text'] = '<a href="[path]"><span class="play-icon-overlay"></span>
[field_audio]</a>';
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_audio']['settings'] = array(
    'thumbsize_width' => '142',
    'thumbsize_height' => '106',
    'rotate' => 0,
    'entry_widget' => '48501',
    'player_width' => '400',
    'player_height' => '330',
    'dispaly_metadata' => 0,
    'delivery' => 'HTTP',
    'custom_player' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video']['alter']['text'] = '<a href="[path]"><span class="play-icon-overlay"></span>
[field_video]</a>';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_video']['type'] = 'field_kaltura_thumbnail_only';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'thumbsize_width' => '120',
    'thumbsize_height' => '90',
    'rotate' => 0,
    'entry_widget' => '48501',
    'player_width' => '400',
    'player_height' => '330',
    'dispaly_metadata' => 1,
    'delivery' => 'HTTP',
    'custom_player' => '',
  );
  $handler->display->display_options['fields']['field_video']['group_column'] = 'entryid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'by';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = 'in ';
  $handler->display->display_options['fields']['group_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Location (field_location:id) */
  $handler->display->display_options['arguments']['field_location_id']['id'] = 'field_location_id';
  $handler->display->display_options['arguments']['field_location_id']['table'] = 'field_data_field_location';
  $handler->display->display_options['arguments']['field_location_id']['field'] = 'field_location_id';
  $handler->display->display_options['arguments']['field_location_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_location_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_location_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_location_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_location_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_location_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_tags_tid']['group'] = '0';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = 'location/%1/detail';
  $export['media_by_location'] = $view;

  $view = new view();
  $view->name = 'my_memberships';
  $view->description = 'Show groups of a user.';
  $view->tag = 'og';
  $view->base_table = 'og_membership';
  $view->human_name = 'My Memberships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'state' => 'state',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total Collections';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'You belong to the following collections and subcollections:';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'User is not a member of any group.';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'og_membership_related_node_group';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['type']['label'] = 'Collection Type';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Owner';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Contextual filter: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['etid']['title'] = '%1\'s groups';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
    'subcollection' => 'subcollection',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'etid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'We pass to the &quot;Entity ID&quot; the User ID.',
    ),
  );

  /* Display: My Memberships */
  $handler = $view->new_display('page', 'My Memberships', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Memberships';
  $handler->display->display_options['path'] = 'my-content/memberships';
  $export['my_memberships'] = $view;

  $view = new view();
  $view->name = 'my_workflow';
  $view->description = '';
  $view->tag = 'mediabase';
  $view->base_table = 'node';
  $view->human_name = 'My Workflow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Workflow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_video' => 'field_video',
    'title' => 'title',
    'timestamp' => 'title',
    'comment_count' => 'title',
    'type' => 'type',
    'created' => 'created',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Workflow Categories (field_workflow) */
  $handler->display->display_options['relationships']['field_workflow_value']['id'] = 'field_workflow_value';
  $handler->display->display_options['relationships']['field_workflow_value']['table'] = 'field_data_field_workflow';
  $handler->display->display_options['relationships']['field_workflow_value']['field'] = 'field_workflow_value';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = 'Media';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_video']['type'] = 'field_kaltura_thumbnail_only';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'thumbsize_width' => '80',
    'thumbsize_height' => '45',
    'rotate' => 0,
    'entry_widget' => '48501',
    'player_width' => '400',
    'player_height' => '330',
    'dispaly_metadata' => 0,
    'delivery' => 'HTTP',
    'custom_player' => '',
  );
  $handler->display->display_options['fields']['field_video']['group_column'] = 'entryid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'Author';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y g:i a';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'M jS, Y g:i a';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Field collection item: Video Quality Acceptable (field_video_quality_acceptable) */
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['id'] = 'field_video_quality_acceptable_value';
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['table'] = 'field_data_field_video_quality_acceptable';
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['field'] = 'field_video_quality_acceptable_value';
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['group'] = 1;
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['expose']['operator_id'] = 'field_video_quality_acceptable_value_op';
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['expose']['label'] = 'Video Quality Acceptable';
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['expose']['operator'] = 'field_video_quality_acceptable_value_op';
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['expose']['identifier'] = 'field_video_quality_acceptable_value';
  /* Filter criterion: Field collection item: Audio Quality Acceptable (field_audio_quality_acceptable) */
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['id'] = 'field_audio_quality_acceptable_value';
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['table'] = 'field_data_field_audio_quality_acceptable';
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['field'] = 'field_audio_quality_acceptable_value';
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['group'] = 1;
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['expose']['operator_id'] = 'field_audio_quality_acceptable_value_op';
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['expose']['label'] = 'Audio Quality Acceptable';
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['expose']['operator'] = 'field_audio_quality_acceptable_value_op';
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['expose']['identifier'] = 'field_audio_quality_acceptable_value';
  /* Filter criterion: Field collection item: Media Needs Recompression (field_media_needs_recompression) */
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['id'] = 'field_media_needs_recompression_value';
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['table'] = 'field_data_field_media_needs_recompression';
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['field'] = 'field_media_needs_recompression_value';
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['group'] = 1;
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['expose']['operator_id'] = 'field_media_needs_recompression_value_op';
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['expose']['label'] = 'Media Needs Recompression';
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['expose']['operator'] = 'field_media_needs_recompression_value_op';
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['expose']['identifier'] = 'field_media_needs_recompression_value';
  /* Filter criterion: Field collection item: Media Needs Re-editing (field_media_needs_re_editing) */
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['id'] = 'field_media_needs_re_editing_value';
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['table'] = 'field_data_field_media_needs_re_editing';
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['field'] = 'field_media_needs_re_editing_value';
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['group'] = 1;
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['expose']['operator_id'] = 'field_media_needs_re_editing_value_op';
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['expose']['label'] = 'Media Needs Re-editing';
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['expose']['operator'] = 'field_media_needs_re_editing_value_op';
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['expose']['identifier'] = 'field_media_needs_re_editing_value';
  /* Filter criterion: Field collection item: Logging files/EDLs archived (field_edls_archived) */
  $handler->display->display_options['filters']['field_edls_archived_value']['id'] = 'field_edls_archived_value';
  $handler->display->display_options['filters']['field_edls_archived_value']['table'] = 'field_data_field_edls_archived';
  $handler->display->display_options['filters']['field_edls_archived_value']['field'] = 'field_edls_archived_value';
  $handler->display->display_options['filters']['field_edls_archived_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_edls_archived_value']['group'] = 1;
  $handler->display->display_options['filters']['field_edls_archived_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['operator_id'] = 'field_edls_archived_value_op';
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['label'] = 'Logging files/EDLs archived';
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['operator'] = 'field_edls_archived_value_op';
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['identifier'] = 'field_edls_archived_value';
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
  );
  /* Filter criterion: Field collection item: Masters Archived (field_masters_archived) */
  $handler->display->display_options['filters']['field_masters_archived_value']['id'] = 'field_masters_archived_value';
  $handler->display->display_options['filters']['field_masters_archived_value']['table'] = 'field_data_field_masters_archived';
  $handler->display->display_options['filters']['field_masters_archived_value']['field'] = 'field_masters_archived_value';
  $handler->display->display_options['filters']['field_masters_archived_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_masters_archived_value']['group'] = 1;
  $handler->display->display_options['filters']['field_masters_archived_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_masters_archived_value']['expose']['operator_id'] = 'field_masters_archived_value_op';
  $handler->display->display_options['filters']['field_masters_archived_value']['expose']['label'] = 'Masters Archived';
  $handler->display->display_options['filters']['field_masters_archived_value']['expose']['operator'] = 'field_masters_archived_value_op';
  $handler->display->display_options['filters']['field_masters_archived_value']['expose']['identifier'] = 'field_masters_archived_value';
  /* Filter criterion: Field collection item: Media Problem #1 (field_media_problem_1) */
  $handler->display->display_options['filters']['field_media_problem_1_value']['id'] = 'field_media_problem_1_value';
  $handler->display->display_options['filters']['field_media_problem_1_value']['table'] = 'field_data_field_media_problem_1';
  $handler->display->display_options['filters']['field_media_problem_1_value']['field'] = 'field_media_problem_1_value';
  $handler->display->display_options['filters']['field_media_problem_1_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_media_problem_1_value']['group'] = 1;
  $handler->display->display_options['filters']['field_media_problem_1_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_problem_1_value']['expose']['operator_id'] = 'field_media_problem_1_value_op';
  $handler->display->display_options['filters']['field_media_problem_1_value']['expose']['label'] = 'Media Problem #1';
  $handler->display->display_options['filters']['field_media_problem_1_value']['expose']['operator'] = 'field_media_problem_1_value_op';
  $handler->display->display_options['filters']['field_media_problem_1_value']['expose']['identifier'] = 'field_media_problem_1_value';
  /* Filter criterion: Field collection item: Media Problem #2 (field_media_problem_2) */
  $handler->display->display_options['filters']['field_media_problem_2_value']['id'] = 'field_media_problem_2_value';
  $handler->display->display_options['filters']['field_media_problem_2_value']['table'] = 'field_data_field_media_problem_2';
  $handler->display->display_options['filters']['field_media_problem_2_value']['field'] = 'field_media_problem_2_value';
  $handler->display->display_options['filters']['field_media_problem_2_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_media_problem_2_value']['group'] = 1;
  $handler->display->display_options['filters']['field_media_problem_2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_problem_2_value']['expose']['operator_id'] = 'field_media_problem_2_value_op';
  $handler->display->display_options['filters']['field_media_problem_2_value']['expose']['label'] = 'Media Problem #2 ';
  $handler->display->display_options['filters']['field_media_problem_2_value']['expose']['operator'] = 'field_media_problem_2_value_op';
  $handler->display->display_options['filters']['field_media_problem_2_value']['expose']['identifier'] = 'field_media_problem_2_value';
  /* Filter criterion: Field collection item: Media Problem #3 (field_media_problem_3) */
  $handler->display->display_options['filters']['field_media_problem_3_value']['id'] = 'field_media_problem_3_value';
  $handler->display->display_options['filters']['field_media_problem_3_value']['table'] = 'field_data_field_media_problem_3';
  $handler->display->display_options['filters']['field_media_problem_3_value']['field'] = 'field_media_problem_3_value';
  $handler->display->display_options['filters']['field_media_problem_3_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_media_problem_3_value']['group'] = 1;
  $handler->display->display_options['filters']['field_media_problem_3_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_problem_3_value']['expose']['operator_id'] = 'field_media_problem_3_value_op';
  $handler->display->display_options['filters']['field_media_problem_3_value']['expose']['label'] = 'Media Problem #3';
  $handler->display->display_options['filters']['field_media_problem_3_value']['expose']['operator'] = 'field_media_problem_3_value_op';
  $handler->display->display_options['filters']['field_media_problem_3_value']['expose']['identifier'] = 'field_media_problem_3_value';
  /* Filter criterion: Field collection item: Basic Cataloging (field_basic_cataloging) */
  $handler->display->display_options['filters']['field_basic_cataloging_value']['id'] = 'field_basic_cataloging_value';
  $handler->display->display_options['filters']['field_basic_cataloging_value']['table'] = 'field_data_field_basic_cataloging';
  $handler->display->display_options['filters']['field_basic_cataloging_value']['field'] = 'field_basic_cataloging_value';
  $handler->display->display_options['filters']['field_basic_cataloging_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_basic_cataloging_value']['group'] = 1;
  $handler->display->display_options['filters']['field_basic_cataloging_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_basic_cataloging_value']['expose']['operator_id'] = 'field_basic_cataloging_value_op';
  $handler->display->display_options['filters']['field_basic_cataloging_value']['expose']['label'] = 'Basic Cataloging';
  $handler->display->display_options['filters']['field_basic_cataloging_value']['expose']['operator'] = 'field_basic_cataloging_value_op';
  $handler->display->display_options['filters']['field_basic_cataloging_value']['expose']['identifier'] = 'field_basic_cataloging_value';
  /* Filter criterion: Field collection item: Place Data Present (field_place_data_present) */
  $handler->display->display_options['filters']['field_place_data_present_value']['id'] = 'field_place_data_present_value';
  $handler->display->display_options['filters']['field_place_data_present_value']['table'] = 'field_data_field_place_data_present';
  $handler->display->display_options['filters']['field_place_data_present_value']['field'] = 'field_place_data_present_value';
  $handler->display->display_options['filters']['field_place_data_present_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_place_data_present_value']['group'] = 1;
  $handler->display->display_options['filters']['field_place_data_present_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_place_data_present_value']['expose']['operator_id'] = 'field_place_data_present_value_op';
  $handler->display->display_options['filters']['field_place_data_present_value']['expose']['label'] = 'Place Data Present';
  $handler->display->display_options['filters']['field_place_data_present_value']['expose']['operator'] = 'field_place_data_present_value_op';
  $handler->display->display_options['filters']['field_place_data_present_value']['expose']['identifier'] = 'field_place_data_present_value';
  /* Filter criterion: Field collection item: Cataloging Proofed (field_cataloging_proofed) */
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['id'] = 'field_cataloging_proofed_value';
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['table'] = 'field_data_field_cataloging_proofed';
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['field'] = 'field_cataloging_proofed_value';
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['expose']['operator_id'] = 'field_cataloging_proofed_value_op';
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['expose']['label'] = 'Cataloging Proofed';
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['expose']['operator'] = 'field_cataloging_proofed_value_op';
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['expose']['identifier'] = 'field_cataloging_proofed_value';
  /* Filter criterion: Field collection item: Translation Language 1 (field_translation_language_1) */
  $handler->display->display_options['filters']['field_translation_language_1_value']['id'] = 'field_translation_language_1_value';
  $handler->display->display_options['filters']['field_translation_language_1_value']['table'] = 'field_data_field_translation_language_1';
  $handler->display->display_options['filters']['field_translation_language_1_value']['field'] = 'field_translation_language_1_value';
  $handler->display->display_options['filters']['field_translation_language_1_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_translation_language_1_value']['group'] = 1;
  $handler->display->display_options['filters']['field_translation_language_1_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_translation_language_1_value']['expose']['operator_id'] = 'field_translation_language_1_value_op';
  $handler->display->display_options['filters']['field_translation_language_1_value']['expose']['label'] = 'Translation Language 1';
  $handler->display->display_options['filters']['field_translation_language_1_value']['expose']['operator'] = 'field_translation_language_1_value_op';
  $handler->display->display_options['filters']['field_translation_language_1_value']['expose']['identifier'] = 'field_translation_language_1_value';
  /* Filter criterion: Field collection item: Translation Language 2 (field_translation_language_2) */
  $handler->display->display_options['filters']['field_translation_language_2_value']['id'] = 'field_translation_language_2_value';
  $handler->display->display_options['filters']['field_translation_language_2_value']['table'] = 'field_data_field_translation_language_2';
  $handler->display->display_options['filters']['field_translation_language_2_value']['field'] = 'field_translation_language_2_value';
  $handler->display->display_options['filters']['field_translation_language_2_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_translation_language_2_value']['group'] = 1;
  $handler->display->display_options['filters']['field_translation_language_2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_translation_language_2_value']['expose']['operator_id'] = 'field_translation_language_2_value_op';
  $handler->display->display_options['filters']['field_translation_language_2_value']['expose']['label'] = 'Translation Language 2';
  $handler->display->display_options['filters']['field_translation_language_2_value']['expose']['operator'] = 'field_translation_language_2_value_op';
  $handler->display->display_options['filters']['field_translation_language_2_value']['expose']['identifier'] = 'field_translation_language_2_value';
  /* Filter criterion: Field collection item: Timecode too infrequent (field_timecode_too_infrequent) */
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['id'] = 'field_timecode_too_infrequent_value';
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['table'] = 'field_data_field_timecode_too_infrequent';
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['field'] = 'field_timecode_too_infrequent_value';
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['group'] = 1;
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['expose']['operator_id'] = 'field_timecode_too_infrequent_value_op';
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['expose']['label'] = 'Timecode too infrequent';
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['expose']['operator'] = 'field_timecode_too_infrequent_value_op';
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['expose']['identifier'] = 'field_timecode_too_infrequent_value';
  /* Filter criterion: Field collection item: Timecoding problem 1 (field_timecoding_problem_1) */
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['id'] = 'field_timecoding_problem_1_value';
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['table'] = 'field_data_field_timecoding_problem_1';
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['field'] = 'field_timecoding_problem_1_value';
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['group'] = 1;
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['expose']['operator_id'] = 'field_timecoding_problem_1_value_op';
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['expose']['label'] = 'Timecoding problem 1';
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['expose']['operator'] = 'field_timecoding_problem_1_value_op';
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['expose']['identifier'] = 'field_timecoding_problem_1_value';
  /* Filter criterion: Field collection item: Timecoding problem 2 (field_timecoding_problem_2) */
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['id'] = 'field_timecoding_problem_2_value';
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['table'] = 'field_data_field_timecoding_problem_2';
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['field'] = 'field_timecoding_problem_2_value';
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['group'] = 1;
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['expose']['operator_id'] = 'field_timecoding_problem_2_value_op';
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['expose']['label'] = 'Timecoding problem 2';
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['expose']['operator'] = 'field_timecoding_problem_2_value_op';
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['expose']['identifier'] = 'field_timecoding_problem_2_value';
  /* Filter criterion: Field collection item: Translation Input Language 3 (field_translation_lang_3) */
  $handler->display->display_options['filters']['field_translation_lang_3_value']['id'] = 'field_translation_lang_3_value';
  $handler->display->display_options['filters']['field_translation_lang_3_value']['table'] = 'field_data_field_translation_lang_3';
  $handler->display->display_options['filters']['field_translation_lang_3_value']['field'] = 'field_translation_lang_3_value';
  $handler->display->display_options['filters']['field_translation_lang_3_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_translation_lang_3_value']['group'] = 1;
  $handler->display->display_options['filters']['field_translation_lang_3_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_translation_lang_3_value']['expose']['operator_id'] = 'field_translation_lang_3_value_op';
  $handler->display->display_options['filters']['field_translation_lang_3_value']['expose']['label'] = 'Translation Input Language 3';
  $handler->display->display_options['filters']['field_translation_lang_3_value']['expose']['operator'] = 'field_translation_lang_3_value_op';
  $handler->display->display_options['filters']['field_translation_lang_3_value']['expose']['identifier'] = 'field_translation_lang_3_value';
  /* Filter criterion: Field collection item: Translation Proofed Language 1 (field_trans_proofed_lang_1) */
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['id'] = 'field_trans_proofed_lang_1_value';
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['table'] = 'field_data_field_trans_proofed_lang_1';
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['field'] = 'field_trans_proofed_lang_1_value';
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['expose']['operator_id'] = 'field_trans_proofed_lang_1_value_op';
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['expose']['label'] = 'Translation Proofed Language 1';
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['expose']['operator'] = 'field_trans_proofed_lang_1_value_op';
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['expose']['identifier'] = 'field_trans_proofed_lang_1_value';
  /* Filter criterion: Field collection item: Translation Proofed Language 2 (field_trans_proofed_lang_2) */
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['id'] = 'field_trans_proofed_lang_2_value';
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['table'] = 'field_data_field_trans_proofed_lang_2';
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['field'] = 'field_trans_proofed_lang_2_value';
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['expose']['operator_id'] = 'field_trans_proofed_lang_2_value_op';
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['expose']['label'] = 'Translation Proofed Language 2';
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['expose']['operator'] = 'field_trans_proofed_lang_2_value_op';
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['expose']['identifier'] = 'field_trans_proofed_lang_2_value';
  /* Filter criterion: Field collection item: Translation Proofed Language 3 (field_trans_proofed_lang_3) */
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['id'] = 'field_trans_proofed_lang_3_value';
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['table'] = 'field_data_field_trans_proofed_lang_3';
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['field'] = 'field_trans_proofed_lang_3_value';
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['group'] = 1;
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['expose']['operator_id'] = 'field_trans_proofed_lang_3_value_op';
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['expose']['label'] = 'Translation Proofed Language 3';
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['expose']['operator'] = 'field_trans_proofed_lang_3_value_op';
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['expose']['identifier'] = 'field_trans_proofed_lang_3_value';

  /* Display: My Content: Workflow */
  $handler = $view->new_display('page', 'My Content: Workflow', 'page_2');
  $handler->display->display_options['path'] = 'my-content/workflow';
  $handler->display->display_options['menu']['title'] = 'My Workflow';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'My Workflow';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['my_workflow'] = $view;

  return $export;
}
