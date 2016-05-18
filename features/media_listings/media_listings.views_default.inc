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
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
    'type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
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
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
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
  $handler->display->display_options['pager']['type'] = 'pagerer';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['preset'] = 'core_replace';
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
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
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
  $handler->display->display_options['filters']['title']['group'] = 1;
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

  /* Display: Collection Content Pane */
  $handler = $view->new_display('panel_pane', 'Collection Content Pane', 'collection_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Collection Contents';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
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
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
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
  $handler = $view->new_display('page', 'My Media', 'my_media');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Media';
  $handler->display->display_options['display_description'] = 'Show all media belonging to the user';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
    'type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
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
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
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
  $handler->display->display_options['path'] = 'mycontent/media';

  /* Display: My Collections */
  $handler = $view->new_display('page', 'My Collections', 'my_collections');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Collections';
  $handler->display->display_options['display_description'] = 'Show all collections and subcollections belonging to the user';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
    'type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
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
    'collection' => 'collection',
    'subcollection' => 'subcollection',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
    'subcollection' => 'subcollection',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
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
  $handler->display->display_options['path'] = 'mycontent/collections';

  /* Display: All Collections */
  $handler = $view->new_display('page', 'All Collections', 'all_collection');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Collections';
  $handler->display->display_options['display_description'] = 'Show all collections and subcollections';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
    'type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<span class="label">Recent Additions</span> <span class="count">(Displaying @start - @end of @total)</span>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="other-view"><a href="/collections/all/list">List View</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
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
    'collection' => 'collection',
    'subcollection' => 'subcollection',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
    'subcollection' => 'subcollection',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
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
  $handler->display->display_options['path'] = 'collections/all';

  /* Display: All Collections List */
  $handler = $view->new_display('page', 'All Collections List', 'all_collection_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Collections';
  $handler->display->display_options['display_description'] = 'Show all collections and subcollections in list format';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
    'type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'field_og_parent_collection_ref' => 'field_og_parent_collection_ref',
    'body' => 'body',
    'realname' => 'realname',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
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
    'field_og_parent_collection_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'realname' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<span class="label">Recent Additions</span> <span class="count">(Displaying @start - @end of @total)</span>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Gallery View Link';
  $handler->display->display_options['header']['area']['content'] = '<div class="other-view"><a href="/collections/all">Gallery View</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title of Collection';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Parent Collection */
  $handler->display->display_options['fields']['field_og_parent_collection_ref']['id'] = 'field_og_parent_collection_ref';
  $handler->display->display_options['fields']['field_og_parent_collection_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['field_og_parent_collection_ref']['field'] = 'field_og_parent_collection_ref';
  $handler->display->display_options['fields']['field_og_parent_collection_ref']['label'] = 'Parent';
  $handler->display->display_options['fields']['field_og_parent_collection_ref']['alter']['text'] = '<div class="parent"><strong>Parent:</strong> [field_og_parent_collection_ref]</div>';
  $handler->display->display_options['fields']['field_og_parent_collection_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_og_parent_collection_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_og_parent_collection_ref']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '80',
  );
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'Owner';
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['element_class'] = 'date-field';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
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
    'collection' => 'collection',
    'subcollection' => 'subcollection',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
    'subcollection' => 'subcollection',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
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
  $handler->display->display_options['path'] = 'collections/all/list';
  $export['browse_media'] = $view;

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
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
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
  $handler->display->display_options['path'] = 'mycontent/memberships';
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
  $handler->display->display_options['title'] = 'My Workflow (Editable Items)';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
    'field_video_quality_acceptable_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_audio_quality_acceptable_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_media_needs_recompression_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_media_needs_re_editing_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_edls_archived_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_masters_archived_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_media_problem_1_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_media_problem_2_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_media_problem_3_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_basic_cataloging_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_place_data_present_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_cataloging_proofed_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_translation_language_1_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_translation_language_2_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_timecode_too_infrequent_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_timecoding_problem_1_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_timecoding_problem_2_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_translation_lang_3_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_trans_proofed_lang_1_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_trans_proofed_lang_2_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'field_trans_proofed_lang_3_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
    'realname' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'pagerer';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['preset'] = 'core_replace';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_og_collection_ref_target_id']['id'] = 'field_og_collection_ref_target_id';
  $handler->display->display_options['relationships']['field_og_collection_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['field_og_collection_ref_target_id']['field'] = 'field_og_collection_ref_target_id';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_og_collection_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Collection';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['relationship'] = 'uid';
  $handler->display->display_options['filters']['realname']['group'] = 1;
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Creator';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_og_collection_ref_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Collection';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content access: Access */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_access';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value'] = 'update';
  $handler->display->display_options['filters']['nid']['group'] = 1;

  /* Display: All Workflow */
  $handler = $view->new_display('page', 'All Workflow', 'workflow_all');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Workflow (All Items)';
  $handler->display->display_options['display_description'] = 'Workflow view showing all videos';
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_og_collection_ref_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Filter by Collection';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['relationship'] = 'uid';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'mycontent/workflow';
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
