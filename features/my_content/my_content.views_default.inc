<?php
/**
 * @file
 * my_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function my_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_collections';
  $view->description = '';
  $view->tag = 'mediabase';
  $view->base_table = 'node';
  $view->human_name = 'My Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Collections';
  $handler->display->display_options['css_class'] = 'view-my-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_video' => 'field_video',
    'title' => 'title',
    'timestamp' => 'title',
    'comment_count' => 'title',
    'type' => 'type',
    'realname' => 'realname',
    'created' => 'created',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
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
    'realname' => array(
      'sortable' => 0,
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mb_bulk_actions_filter_subcollection_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: My Collections */
  $handler = $view->new_display('page', 'My Collections', 'page');
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
    'team' => 'team',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'my-content/collections';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Collections';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['my_collections'] = $view;

  $view = new view();
  $view->name = 'my_content';
  $view->description = '';
  $view->tag = 'mediabase';
  $view->base_table = 'node';
  $view->human_name = 'My Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Content';
  $handler->display->display_options['css_class'] = 'my-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit own video content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_video' => 'field_video',
    'title' => 'title',
    'timestamp' => 'title',
    'comment_count' => 'title',
    'type' => 'type',
    'realname' => 'realname',
    'created' => 'created',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
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
    'realname' => array(
      'sortable' => 0,
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['element_class'] = 'vbo-checkbox';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mb_bulk_actions_filter_subcollection_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
  );

  /* Display: My Content (Parent) */
  $handler = $view->new_display('page', 'My Content (Parent)', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Content';
  $handler->display->display_options['display_description'] = 'Parent item for "My ..."';
  $handler->display->display_options['path'] = 'my-content';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Content';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Content: Media */
  $handler = $view->new_display('page', 'My Content: Media', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Content';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'my-media-view';
  $handler->display->display_options['display_description'] = 'Parent item for My ...';
  $handler->display->display_options['path'] = 'my-content/media';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'My Media';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['my_content'] = $view;

  $view = new view();
  $view->name = 'my_memberships';
  $view->description = '';
  $view->tag = 'mediabase';
  $view->base_table = 'users';
  $view->human_name = 'My Memberships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Memberships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'My Memberships Description';
  $handler->display->display_options['header']['area']['content'] = 'You are a member or owner of the following collections and teams:';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: OG group gid */
  $handler->display->display_options['relationships']['group']['id'] = 'group';
  $handler->display->display_options['relationships']['group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['group']['field'] = 'group';
  $handler->display->display_options['relationships']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['group']['required'] = TRUE;
  /* Field: OG group: Entity id */
  $handler->display->display_options['fields']['etid']['id'] = 'etid';
  $handler->display->display_options['fields']['etid']['table'] = 'og';
  $handler->display->display_options['fields']['etid']['field'] = 'etid';
  $handler->display->display_options['fields']['etid']['relationship'] = 'group';
  $handler->display->display_options['fields']['etid']['exclude'] = TRUE;
  /* Field: OG group: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'og';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'group';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = 'node/[etid]';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: My Content: Memberships */
  $handler = $view->new_display('page', 'My Content: Memberships', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'my-content/memberships';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Memberships';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
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
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
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
  $handler->display->display_options['menu']['type'] = 'tab';
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
