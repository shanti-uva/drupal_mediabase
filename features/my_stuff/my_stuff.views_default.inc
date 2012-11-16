<?php
/**
 * @file
 * my_stuff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function my_stuff_views_default_views() {
  $export = array();

  $view = new view;
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 0;
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
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_av_file_value']['id'] = 'field_av_file_value';
  $handler->display->display_options['relationships']['field_av_file_value']['table'] = 'field_data_field_av_file';
  $handler->display->display_options['relationships']['field_av_file_value']['field'] = 'field_av_file_value';
  $handler->display->display_options['relationships']['field_av_file_value']['required'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_catalog_record_value']['id'] = 'field_catalog_record_value';
  $handler->display->display_options['relationships']['field_catalog_record_value']['table'] = 'field_data_field_catalog_record';
  $handler->display->display_options['relationships']['field_catalog_record_value']['field'] = 'field_catalog_record_value';
  $handler->display->display_options['relationships']['field_catalog_record_value']['required'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_transcription_value']['id'] = 'field_transcription_value';
  $handler->display->display_options['relationships']['field_transcription_value']['table'] = 'field_data_field_transcription';
  $handler->display->display_options['relationships']['field_transcription_value']['field'] = 'field_transcription_value';
  $handler->display->display_options['relationships']['field_transcription_value']['required'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_translation_value']['id'] = 'field_translation_value';
  $handler->display->display_options['relationships']['field_translation_value']['table'] = 'field_data_field_translation';
  $handler->display->display_options['relationships']['field_translation_value']['field'] = 'field_translation_value';
  $handler->display->display_options['relationships']['field_translation_value']['required'] = 0;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = 'Media';
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_video']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_video']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_video']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_video']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_video']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['timestamp']['link_to_node'] = 0;
  $handler->display->display_options['fields']['timestamp']['comments'] = 0;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'Author';
  $handler->display->display_options['fields']['realname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['realname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['realname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['realname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['realname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['realname']['link_to_user'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y g:i a';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'M jS, Y g:i a';
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Node: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 1;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Bulk operations';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
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
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
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
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
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
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_workflow_status_value']['id'] = 'field_workflow_status_value';
  $handler->display->display_options['filters']['field_workflow_status_value']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['filters']['field_workflow_status_value']['field'] = 'field_workflow_status_value';
  $handler->display->display_options['filters']['field_workflow_status_value']['relationship'] = 'field_translation_value';
  $handler->display->display_options['filters']['field_workflow_status_value']['ui_name'] = 'Translation Status';
  $handler->display->display_options['filters']['field_workflow_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_workflow_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_workflow_status_value']['expose']['operator_id'] = 'field_workflow_status_value_op';
  $handler->display->display_options['filters']['field_workflow_status_value']['expose']['label'] = 'Translation Status';
  $handler->display->display_options['filters']['field_workflow_status_value']['expose']['operator'] = 'field_workflow_status_value_op';
  $handler->display->display_options['filters']['field_workflow_status_value']['expose']['identifier'] = 'field_workflow_status_value';
  $handler->display->display_options['filters']['field_workflow_status_value']['expose']['multiple'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_workflow_status_value_1']['id'] = 'field_workflow_status_value_1';
  $handler->display->display_options['filters']['field_workflow_status_value_1']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['filters']['field_workflow_status_value_1']['field'] = 'field_workflow_status_value';
  $handler->display->display_options['filters']['field_workflow_status_value_1']['relationship'] = 'field_av_file_value';
  $handler->display->display_options['filters']['field_workflow_status_value_1']['ui_name'] = 'AV Status';
  $handler->display->display_options['filters']['field_workflow_status_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_workflow_status_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_workflow_status_value_1']['expose']['operator_id'] = 'field_workflow_status_value_1_op';
  $handler->display->display_options['filters']['field_workflow_status_value_1']['expose']['label'] = 'AV Status';
  $handler->display->display_options['filters']['field_workflow_status_value_1']['expose']['operator'] = 'field_workflow_status_value_1_op';
  $handler->display->display_options['filters']['field_workflow_status_value_1']['expose']['identifier'] = 'field_workflow_status_value_1';
  $handler->display->display_options['filters']['field_workflow_status_value_1']['expose']['multiple'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_workflow_status_value_2']['id'] = 'field_workflow_status_value_2';
  $handler->display->display_options['filters']['field_workflow_status_value_2']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['filters']['field_workflow_status_value_2']['field'] = 'field_workflow_status_value';
  $handler->display->display_options['filters']['field_workflow_status_value_2']['relationship'] = 'field_transcription_value';
  $handler->display->display_options['filters']['field_workflow_status_value_2']['ui_name'] = 'Transcription Status';
  $handler->display->display_options['filters']['field_workflow_status_value_2']['group'] = 1;
  $handler->display->display_options['filters']['field_workflow_status_value_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_workflow_status_value_2']['expose']['operator_id'] = 'field_workflow_status_value_2_op';
  $handler->display->display_options['filters']['field_workflow_status_value_2']['expose']['label'] = 'Transcript Status';
  $handler->display->display_options['filters']['field_workflow_status_value_2']['expose']['operator'] = 'field_workflow_status_value_2_op';
  $handler->display->display_options['filters']['field_workflow_status_value_2']['expose']['identifier'] = 'field_workflow_status_value_2';
  $handler->display->display_options['filters']['field_workflow_status_value_2']['expose']['multiple'] = 1;

  /* Display: My Collections */
  $handler = $view->new_display('page', 'My Collections', 'page');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
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
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'my-stuff/collections';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Collections';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['my_collections'] = $view;

  $view = new view;
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = 0;
  /* Relationship: OG membership: OG group gid */
  $handler->display->display_options['relationships']['group']['id'] = 'group';
  $handler->display->display_options['relationships']['group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['group']['field'] = 'group';
  $handler->display->display_options['relationships']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['group']['required'] = 1;
  /* Field: OG group: Entity id */
  $handler->display->display_options['fields']['etid']['id'] = 'etid';
  $handler->display->display_options['fields']['etid']['table'] = 'og';
  $handler->display->display_options['fields']['etid']['field'] = 'etid';
  $handler->display->display_options['fields']['etid']['relationship'] = 'group';
  $handler->display->display_options['fields']['etid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['etid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['etid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['etid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['etid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['etid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['etid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['etid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['etid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['etid']['format_plural'] = 0;
  /* Field: OG group: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'og';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'group';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['label']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['label']['alter']['path'] = 'node/[etid]';
  $handler->display->display_options['fields']['label']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['label']['alter']['external'] = 0;
  $handler->display->display_options['fields']['label']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['label']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['label']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['label']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['label']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['label']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['label']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['label']['alter']['html'] = 0;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['label']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['label']['hide_empty'] = 0;
  $handler->display->display_options['fields']['label']['empty_zero'] = 0;
  $handler->display->display_options['fields']['label']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-stuff/memberships';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Memberships';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['my_memberships'] = $view;

  $view = new view;
  $view->name = 'my_stuff';
  $view->description = '';
  $view->tag = 'mediabase';
  $view->base_table = 'node';
  $view->human_name = 'My Stuff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Collections';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit own video content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 0;
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
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_av_file_value']['id'] = 'field_av_file_value';
  $handler->display->display_options['relationships']['field_av_file_value']['table'] = 'field_data_field_av_file';
  $handler->display->display_options['relationships']['field_av_file_value']['field'] = 'field_av_file_value';
  $handler->display->display_options['relationships']['field_av_file_value']['required'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_catalog_record_value']['id'] = 'field_catalog_record_value';
  $handler->display->display_options['relationships']['field_catalog_record_value']['table'] = 'field_data_field_catalog_record';
  $handler->display->display_options['relationships']['field_catalog_record_value']['field'] = 'field_catalog_record_value';
  $handler->display->display_options['relationships']['field_catalog_record_value']['required'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_transcription_value']['id'] = 'field_transcription_value';
  $handler->display->display_options['relationships']['field_transcription_value']['table'] = 'field_data_field_transcription';
  $handler->display->display_options['relationships']['field_transcription_value']['field'] = 'field_transcription_value';
  $handler->display->display_options['relationships']['field_transcription_value']['required'] = 0;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_translation_value']['id'] = 'field_translation_value';
  $handler->display->display_options['relationships']['field_translation_value']['table'] = 'field_data_field_translation';
  $handler->display->display_options['relationships']['field_translation_value']['field'] = 'field_translation_value';
  $handler->display->display_options['relationships']['field_translation_value']['required'] = 0;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = 'Media';
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_video']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_video']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_video']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_video']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_video']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['timestamp']['link_to_node'] = 0;
  $handler->display->display_options['fields']['timestamp']['comments'] = 0;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'Author';
  $handler->display->display_options['fields']['realname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['realname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['realname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['realname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['realname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['realname']['link_to_user'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y g:i a';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'M jS, Y g:i a';
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Node: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 1;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Bulk operations';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
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
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
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
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['multiple'] = FALSE;
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
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;

  /* Display: My Media */
  $handler = $view->new_display('page', 'My Media', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Media';
  $handler->display->display_options['display_description'] = 'Same as "My Stuff All" here for the parent item';
  $handler->display->display_options['path'] = 'my-stuff';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Media';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: My Media */
  $handler = $view->new_display('page', 'My Media', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Media';
  $handler->display->display_options['display_description'] = 'Same as "My Stuff All" here for the parent item';
  $handler->display->display_options['path'] = 'my-stuff/media';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'My Media';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['my_stuff'] = $view;

  $view = new view;
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
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
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Relationship: Content: Workflow (field_workflow) */
  $handler->display->display_options['relationships']['field_workflow_value']['id'] = 'field_workflow_value';
  $handler->display->display_options['relationships']['field_workflow_value']['table'] = 'field_data_field_workflow';
  $handler->display->display_options['relationships']['field_workflow_value']['field'] = 'field_workflow_value';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = 0;
  /* Relationship: OG membership: OG group gid */
  $handler->display->display_options['relationships']['group']['id'] = 'group';
  $handler->display->display_options['relationships']['group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['group']['field'] = 'group';
  $handler->display->display_options['relationships']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['group']['required'] = 0;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = 'Media';
  $handler->display->display_options['fields']['field_video']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_video']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_video']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_video']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_video']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_video']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_video']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['timestamp']['link_to_node'] = 0;
  $handler->display->display_options['fields']['timestamp']['comments'] = 0;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'Author';
  $handler->display->display_options['fields']['realname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['realname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['realname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['realname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['realname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['realname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['realname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['realname']['link_to_user'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M jS, Y g:i a';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'M jS, Y g:i a';
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Node: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: OG group gid */
  $handler->display->display_options['arguments']['group']['id'] = 'group';
  $handler->display->display_options['arguments']['group']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['group']['field'] = 'group';
  $handler->display->display_options['arguments']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['group']['default_action'] = 'default';
  $handler->display->display_options['arguments']['group']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['group']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['group']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['group']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group']['not'] = 0;
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
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  /* Filter criterion: Field collection item: Media Present (field_media_present) */
  $handler->display->display_options['filters']['field_media_present_value']['id'] = 'field_media_present_value';
  $handler->display->display_options['filters']['field_media_present_value']['table'] = 'field_data_field_media_present';
  $handler->display->display_options['filters']['field_media_present_value']['field'] = 'field_media_present_value';
  $handler->display->display_options['filters']['field_media_present_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_media_present_value']['group'] = 1;
  $handler->display->display_options['filters']['field_media_present_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_present_value']['expose']['operator_id'] = 'field_media_present_value_op';
  $handler->display->display_options['filters']['field_media_present_value']['expose']['label'] = 'Media Present';
  $handler->display->display_options['filters']['field_media_present_value']['expose']['operator'] = 'field_media_present_value_op';
  $handler->display->display_options['filters']['field_media_present_value']['expose']['identifier'] = 'field_media_present_value';
  $handler->display->display_options['filters']['field_media_present_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_video_quality_acceptable_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_audio_quality_acceptable_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_media_needs_recompression_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_media_needs_re_editing_value']['expose']['reduce'] = 0;
  /* Filter criterion: Field collection item: Logging files/EDLs archived (field_edls_archived) */
  $handler->display->display_options['filters']['field_edls_archived_value']['id'] = 'field_edls_archived_value';
  $handler->display->display_options['filters']['field_edls_archived_value']['table'] = 'field_data_field_edls_archived';
  $handler->display->display_options['filters']['field_edls_archived_value']['field'] = 'field_edls_archived_value';
  $handler->display->display_options['filters']['field_edls_archived_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_edls_archived_value']['group'] = 1;
  $handler->display->display_options['filters']['field_edls_archived_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['operator_id'] = 'field_edls_archived_value_op';
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['label'] = 'Logging files/EDLs archived (field_edls_archived)';
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['operator'] = 'field_edls_archived_value_op';
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['identifier'] = 'field_edls_archived_value';
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_edls_archived_value']['expose']['multiple'] = FALSE;
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
  $handler->display->display_options['filters']['field_masters_archived_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_media_problem_1_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_media_problem_2_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_media_problem_3_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_basic_cataloging_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_place_data_present_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_cataloging_proofed_value']['expose']['reduce'] = 0;
  /* Filter criterion: Field collection item: Extended Cataloging (field_extended_cataloging) */
  $handler->display->display_options['filters']['field_extended_cataloging_value']['id'] = 'field_extended_cataloging_value';
  $handler->display->display_options['filters']['field_extended_cataloging_value']['table'] = 'field_data_field_extended_cataloging';
  $handler->display->display_options['filters']['field_extended_cataloging_value']['field'] = 'field_extended_cataloging_value';
  $handler->display->display_options['filters']['field_extended_cataloging_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_extended_cataloging_value']['group'] = 1;
  $handler->display->display_options['filters']['field_extended_cataloging_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_extended_cataloging_value']['expose']['operator_id'] = 'field_extended_cataloging_value_op';
  $handler->display->display_options['filters']['field_extended_cataloging_value']['expose']['label'] = 'Extended Cataloging';
  $handler->display->display_options['filters']['field_extended_cataloging_value']['expose']['operator'] = 'field_extended_cataloging_value_op';
  $handler->display->display_options['filters']['field_extended_cataloging_value']['expose']['identifier'] = 'field_extended_cataloging_value';
  $handler->display->display_options['filters']['field_extended_cataloging_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_translation_language_1_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_translation_language_2_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_timecode_too_infrequent_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_timecoding_problem_1_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_timecoding_problem_2_value']['expose']['reduce'] = 0;
  /* Filter criterion: Field collection item: Transcript Input (field_transcript_input) */
  $handler->display->display_options['filters']['field_transcript_input_value']['id'] = 'field_transcript_input_value';
  $handler->display->display_options['filters']['field_transcript_input_value']['table'] = 'field_data_field_transcript_input';
  $handler->display->display_options['filters']['field_transcript_input_value']['field'] = 'field_transcript_input_value';
  $handler->display->display_options['filters']['field_transcript_input_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_transcript_input_value']['group'] = 1;
  $handler->display->display_options['filters']['field_transcript_input_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transcript_input_value']['expose']['operator_id'] = 'field_transcript_input_value_op';
  $handler->display->display_options['filters']['field_transcript_input_value']['expose']['label'] = 'Transcript Input';
  $handler->display->display_options['filters']['field_transcript_input_value']['expose']['operator'] = 'field_transcript_input_value_op';
  $handler->display->display_options['filters']['field_transcript_input_value']['expose']['identifier'] = 'field_transcript_input_value';
  $handler->display->display_options['filters']['field_transcript_input_value']['expose']['reduce'] = 0;
  /* Filter criterion: Field collection item: Transcript Proofed (field_transcript_proofed) */
  $handler->display->display_options['filters']['field_transcript_proofed_value']['id'] = 'field_transcript_proofed_value';
  $handler->display->display_options['filters']['field_transcript_proofed_value']['table'] = 'field_data_field_transcript_proofed';
  $handler->display->display_options['filters']['field_transcript_proofed_value']['field'] = 'field_transcript_proofed_value';
  $handler->display->display_options['filters']['field_transcript_proofed_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_transcript_proofed_value']['group'] = 1;
  $handler->display->display_options['filters']['field_transcript_proofed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transcript_proofed_value']['expose']['operator_id'] = 'field_transcript_proofed_value_op';
  $handler->display->display_options['filters']['field_transcript_proofed_value']['expose']['label'] = 'Transcript Proofed';
  $handler->display->display_options['filters']['field_transcript_proofed_value']['expose']['operator'] = 'field_transcript_proofed_value_op';
  $handler->display->display_options['filters']['field_transcript_proofed_value']['expose']['identifier'] = 'field_transcript_proofed_value';
  $handler->display->display_options['filters']['field_transcript_proofed_value']['expose']['reduce'] = 0;
  /* Filter criterion: Field collection item: Transcript Timecoded (field_transcript_timecoded) */
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['id'] = 'field_transcript_timecoded_value';
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['table'] = 'field_data_field_transcript_timecoded';
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['field'] = 'field_transcript_timecoded_value';
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['group'] = 1;
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['expose']['operator_id'] = 'field_transcript_timecoded_value_op';
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['expose']['label'] = 'Transcript Timecoded';
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['expose']['operator'] = 'field_transcript_timecoded_value_op';
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['expose']['identifier'] = 'field_transcript_timecoded_value';
  $handler->display->display_options['filters']['field_transcript_timecoded_value']['expose']['reduce'] = 0;
  /* Filter criterion: Field collection item: Translation Input Language 1 (field_translation_lang_1) */
  $handler->display->display_options['filters']['field_translation_lang_1_value']['id'] = 'field_translation_lang_1_value';
  $handler->display->display_options['filters']['field_translation_lang_1_value']['table'] = 'field_data_field_translation_lang_1';
  $handler->display->display_options['filters']['field_translation_lang_1_value']['field'] = 'field_translation_lang_1_value';
  $handler->display->display_options['filters']['field_translation_lang_1_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_translation_lang_1_value']['group'] = 1;
  $handler->display->display_options['filters']['field_translation_lang_1_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_translation_lang_1_value']['expose']['operator_id'] = 'field_translation_lang_1_value_op';
  $handler->display->display_options['filters']['field_translation_lang_1_value']['expose']['label'] = 'Translation Input Language 1';
  $handler->display->display_options['filters']['field_translation_lang_1_value']['expose']['operator'] = 'field_translation_lang_1_value_op';
  $handler->display->display_options['filters']['field_translation_lang_1_value']['expose']['identifier'] = 'field_translation_lang_1_value';
  $handler->display->display_options['filters']['field_translation_lang_1_value']['expose']['reduce'] = 0;
  /* Filter criterion: Field collection item: Translation Input Language 2 (field_translation_lang_2) */
  $handler->display->display_options['filters']['field_translation_lang_2_value']['id'] = 'field_translation_lang_2_value';
  $handler->display->display_options['filters']['field_translation_lang_2_value']['table'] = 'field_data_field_translation_lang_2';
  $handler->display->display_options['filters']['field_translation_lang_2_value']['field'] = 'field_translation_lang_2_value';
  $handler->display->display_options['filters']['field_translation_lang_2_value']['relationship'] = 'field_workflow_value';
  $handler->display->display_options['filters']['field_translation_lang_2_value']['group'] = 1;
  $handler->display->display_options['filters']['field_translation_lang_2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_translation_lang_2_value']['expose']['operator_id'] = 'field_translation_lang_2_value_op';
  $handler->display->display_options['filters']['field_translation_lang_2_value']['expose']['label'] = 'Translation Input Language 2';
  $handler->display->display_options['filters']['field_translation_lang_2_value']['expose']['operator'] = 'field_translation_lang_2_value_op';
  $handler->display->display_options['filters']['field_translation_lang_2_value']['expose']['identifier'] = 'field_translation_lang_2_value';
  $handler->display->display_options['filters']['field_translation_lang_2_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_translation_lang_3_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_trans_proofed_lang_1_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_trans_proofed_lang_2_value']['expose']['reduce'] = 0;
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
  $handler->display->display_options['filters']['field_trans_proofed_lang_3_value']['expose']['reduce'] = 0;

  /* Display: My Workflow */
  $handler = $view->new_display('page', 'My Workflow', 'page_2');
  $handler->display->display_options['path'] = 'my-stuff/workflow';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Workflow';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'My Workflow';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['my_workflow'] = $view;

  return $export;
}
