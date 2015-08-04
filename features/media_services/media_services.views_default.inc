<?php
/**
 * @file
 * media_services.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function media_services_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'media_by_kmap_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Media By Kmap Count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_xml_style';
  $handler->display->display_options['style_options']['root_element'] = 'data';
  $handler->display->display_options['style_options']['top_child_object'] = 'count';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['header'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Field: Kmap Id */
  $handler->display->display_options['fields']['kmap_id']['id'] = 'kmap_id';
  $handler->display->display_options['fields']['kmap_id']['table'] = 'field_data_kmap_id';
  $handler->display->display_options['fields']['kmap_id']['field'] = 'kmap_id';
  $handler->display->display_options['fields']['kmap_id']['label'] = '';
  $handler->display->display_options['fields']['kmap_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['kmap_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'kmap_name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'kmap_count';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'view_uri';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'taxonomy/term/[tid]';
  /* Contextual filter: Field: Kmap Id (kmap_id) */
  $handler->display->display_options['arguments']['kmap_id_value']['id'] = 'kmap_id_value';
  $handler->display->display_options['arguments']['kmap_id_value']['table'] = 'field_data_kmap_id';
  $handler->display->display_options['arguments']['kmap_id_value']['field'] = 'kmap_id_value';
  $handler->display->display_options['arguments']['kmap_id_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['kmap_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['kmap_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['kmap_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['kmap_id_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'kmap_taxonomy' => 'kmap_taxonomy',
  );

  /* Display: JSON Service */
  $handler = $view->new_display('page', 'JSON Service', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'data';
  $handler->display->display_options['style_options']['top_child_object'] = 'count';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'service/media/count/by_kmap_id/%/json';

  /* Display: XML Service */
  $handler = $view->new_display('page', 'XML Service', 'page_2');
  $handler->display->display_options['path'] = 'service/media/count/by_kmap_id/%/xml';

  /* Display: JSONP Service */
  $handler = $view->new_display('page', 'JSONP Service', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'data';
  $handler->display->display_options['style_options']['top_child_object'] = 'count';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = 'process_remote_kmap_counts';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'service/media/count/by_kmap_id/%/jsonp';
  $export['media_by_kmap_count'] = $view;

  $view = new view();
  $view->name = 'media_by_kmap_rss_feed';
  $view->description = '';
  $view->tag = 'mediabase';
  $view->base_table = 'node';
  $view->human_name = 'Media By Kmap RSS Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media By Characteristic';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '24,48,96';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'grid-9 mb-thumbnail-grid-row';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['field_audio']['type'] = 'field_kaltura_thumbnail_only';
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
    'thumbsize_width' => '142',
    'thumbsize_height' => '80',
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
  /* Field: Field: Collection */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = 'in ';
  $handler->display->display_options['fields']['group_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['group_audience']['click_sort_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['delta_offset'] = '0';
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

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'media/by-kmap/%/rss.xml';
  $export['media_by_kmap_rss_feed'] = $view;

  $view = new view();
  $view->name = 'media_by_place_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Media By Place Count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_xml_style';
  $handler->display->display_options['style_options']['root_element'] = 'data';
  $handler->display->display_options['style_options']['top_child_object'] = 'count';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['header'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Taxonomy term: Place Dictionary Id */
  $handler->display->display_options['fields']['place_dictionary_id']['id'] = 'place_dictionary_id';
  $handler->display->display_options['fields']['place_dictionary_id']['table'] = 'field_data_place_dictionary_id';
  $handler->display->display_options['fields']['place_dictionary_id']['field'] = 'place_dictionary_id';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'place_name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = 'place_count';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'view_uri';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'taxonomy/term/[tid]';
  /* Contextual filter: Taxonomy term: Place Dictionary Id (place_dictionary_id) */
  $handler->display->display_options['arguments']['place_dictionary_id_value']['id'] = 'place_dictionary_id_value';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['table'] = 'field_data_place_dictionary_id';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['field'] = 'place_dictionary_id_value';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'mb_location' => 'mb_location',
  );

  /* Display: JSON Service */
  $handler = $view->new_display('page', 'JSON Service', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'data';
  $handler->display->display_options['style_options']['top_child_object'] = 'count';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'service/media/count/by_location_id/%/json';

  /* Display: XML Service */
  $handler = $view->new_display('page', 'XML Service', 'page_2');
  $handler->display->display_options['path'] = 'service/media/count/by_location_id/%/xml';

  /* Display: JSONP Service */
  $handler = $view->new_display('page', 'JSONP Service', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'data';
  $handler->display->display_options['style_options']['top_child_object'] = 'count';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = 'process_remote_place_counts';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'service/media/count/by_location_id/%/jsonp';
  $export['media_by_place_count'] = $view;

  $view = new view();
  $view->name = 'media_service';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media Service';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  /* Field: Content: Transcript */
  $handler->display->display_options['fields']['field_transcript']['id'] = 'field_transcript';
  $handler->display->display_options['fields']['field_transcript']['table'] = 'field_data_field_transcript';
  $handler->display->display_options['fields']['field_transcript']['field'] = 'field_transcript';
  /* Field: Content: Transformer */
  $handler->display->display_options['fields']['field_transcripts_xsl']['id'] = 'field_transcripts_xsl';
  $handler->display->display_options['fields']['field_transcripts_xsl']['table'] = 'field_data_field_transcripts_xsl';
  $handler->display->display_options['fields']['field_transcripts_xsl']['field'] = 'field_transcripts_xsl';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_pbcore_description']['id'] = 'field_pbcore_description';
  $handler->display->display_options['fields']['field_pbcore_description']['table'] = 'field_data_field_pbcore_description';
  $handler->display->display_options['fields']['field_pbcore_description']['field'] = 'field_pbcore_description';
  $handler->display->display_options['fields']['field_pbcore_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_pbcore_description']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_pbcore_description']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_pbcore_description']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_pbcore_description']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'services';
  $handler->display->display_options['fields']['field_tags']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_tags']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Available From (date) */
  $handler->display->display_options['fields']['field_available_from']['id'] = 'field_available_from';
  $handler->display->display_options['fields']['field_available_from']['table'] = 'field_data_field_available_from';
  $handler->display->display_options['fields']['field_available_from']['field'] = 'field_available_from';
  /* Field: Content: Available From (date) (field_available_from:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_available_from';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* Field: Content: Contributor */
  $handler->display->display_options['fields']['field_pbcore_contributor']['id'] = 'field_pbcore_contributor';
  $handler->display->display_options['fields']['field_pbcore_contributor']['table'] = 'field_data_field_pbcore_contributor';
  $handler->display->display_options['fields']['field_pbcore_contributor']['field'] = 'field_pbcore_contributor';
  $handler->display->display_options['fields']['field_pbcore_contributor']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_pbcore_contributor']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_pbcore_contributor']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_pbcore_contributor']['delta_offset'] = '0';
  /* Field: Content: Copyright Owner */
  $handler->display->display_options['fields']['field_copyright_owner']['id'] = 'field_copyright_owner';
  $handler->display->display_options['fields']['field_copyright_owner']['table'] = 'field_data_field_copyright_owner';
  $handler->display->display_options['fields']['field_copyright_owner']['field'] = 'field_copyright_owner';
  /* Field: Content: Creator */
  $handler->display->display_options['fields']['field_pbcore_creator']['id'] = 'field_pbcore_creator';
  $handler->display->display_options['fields']['field_pbcore_creator']['table'] = 'field_data_field_pbcore_creator';
  $handler->display->display_options['fields']['field_pbcore_creator']['field'] = 'field_pbcore_creator';
  /* Field: Content: Extension */
  $handler->display->display_options['fields']['field_pbcore_extension']['id'] = 'field_pbcore_extension';
  $handler->display->display_options['fields']['field_pbcore_extension']['table'] = 'field_data_field_pbcore_extension';
  $handler->display->display_options['fields']['field_pbcore_extension']['field'] = 'field_pbcore_extension';
  /* Field: Content: Identifier */
  $handler->display->display_options['fields']['field_pbcore_identifier']['id'] = 'field_pbcore_identifier';
  $handler->display->display_options['fields']['field_pbcore_identifier']['table'] = 'field_data_field_pbcore_identifier';
  $handler->display->display_options['fields']['field_pbcore_identifier']['field'] = 'field_pbcore_identifier';
  /* Field: Content: Kmap Annotation */
  $handler->display->display_options['fields']['field_kmap_annotation']['id'] = 'field_kmap_annotation';
  $handler->display->display_options['fields']['field_kmap_annotation']['table'] = 'field_data_field_kmap_annotation';
  $handler->display->display_options['fields']['field_kmap_annotation']['field'] = 'field_kmap_annotation';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'raw';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'target' => '_blank',
  );
  $handler->display->display_options['fields']['field_location']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_pbcore_publisher']['id'] = 'field_pbcore_publisher';
  $handler->display->display_options['fields']['field_pbcore_publisher']['table'] = 'field_data_field_pbcore_publisher';
  $handler->display->display_options['fields']['field_pbcore_publisher']['field'] = 'field_pbcore_publisher';
  /* Field: Content: Recording Location */
  $handler->display->display_options['fields']['field_recording_location_new']['id'] = 'field_recording_location_new';
  $handler->display->display_options['fields']['field_recording_location_new']['table'] = 'field_data_field_recording_location_new';
  $handler->display->display_options['fields']['field_recording_location_new']['field'] = 'field_recording_location_new';
  $handler->display->display_options['fields']['field_recording_location_new']['click_sort_column'] = 'raw';
  $handler->display->display_options['fields']['field_recording_location_new']['settings'] = array(
    'target' => '_blank',
  );
  $handler->display->display_options['fields']['field_recording_location_new']['delta_offset'] = '0';
  /* Field: Content: Redistribution License */
  $handler->display->display_options['fields']['field_license']['id'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['table'] = 'field_data_field_license';
  $handler->display->display_options['fields']['field_license']['field'] = 'field_license';
  /* Field: Content: Related Media */
  $handler->display->display_options['fields']['field_pbcore_relation']['id'] = 'field_pbcore_relation';
  $handler->display->display_options['fields']['field_pbcore_relation']['table'] = 'field_data_field_pbcore_relation';
  $handler->display->display_options['fields']['field_pbcore_relation']['field'] = 'field_pbcore_relation';
  /* Field: Content: Rights Summary */
  $handler->display->display_options['fields']['field_pbcore_rights_summary']['id'] = 'field_pbcore_rights_summary';
  $handler->display->display_options['fields']['field_pbcore_rights_summary']['table'] = 'field_data_field_pbcore_rights_summary';
  $handler->display->display_options['fields']['field_pbcore_rights_summary']['field'] = 'field_pbcore_rights_summary';
  /* Field: Content: Subcollection */
  $handler->display->display_options['fields']['field_subcollection_new']['id'] = 'field_subcollection_new';
  $handler->display->display_options['fields']['field_subcollection_new']['table'] = 'field_data_field_subcollection_new';
  $handler->display->display_options['fields']['field_subcollection_new']['field'] = 'field_subcollection_new';
  $handler->display->display_options['fields']['field_subcollection_new']['click_sort_column'] = 'raw';
  $handler->display->display_options['fields']['field_subcollection_new']['settings'] = array(
    'target' => '_blank',
  );
  $handler->display->display_options['fields']['field_subcollection_new']['delta_offset'] = '0';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['click_sort_column'] = 'raw';
  $handler->display->display_options['fields']['field_subject']['settings'] = array(
    'target' => '_blank',
  );
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_pbcore_coverage']['id'] = 'field_pbcore_coverage';
  $handler->display->display_options['fields']['field_pbcore_coverage']['table'] = 'field_data_field_pbcore_coverage';
  $handler->display->display_options['fields']['field_pbcore_coverage']['field'] = 'field_pbcore_coverage';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_pbcore_title']['id'] = 'field_pbcore_title';
  $handler->display->display_options['fields']['field_pbcore_title']['table'] = 'field_data_field_pbcore_title';
  $handler->display->display_options['fields']['field_pbcore_title']['field'] = 'field_pbcore_title';
  /* Field: Content: Versions */
  $handler->display->display_options['fields']['field_pbcore_instantiation']['id'] = 'field_pbcore_instantiation';
  $handler->display->display_options['fields']['field_pbcore_instantiation']['table'] = 'field_data_field_pbcore_instantiation';
  $handler->display->display_options['fields']['field_pbcore_instantiation']['field'] = 'field_pbcore_instantiation';
  /* Field: Content: Year Published */
  $handler->display->display_options['fields']['field_year_published']['id'] = 'field_year_published';
  $handler->display->display_options['fields']['field_year_published']['table'] = 'field_data_field_year_published';
  $handler->display->display_options['fields']['field_year_published']['field'] = 'field_year_published';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'entryid';
  $handler->display->display_options['fields']['field_video']['type'] = 'services';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
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
    'audio' => 'audio',
    'video' => 'video',
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'collection/%';
  $export['media_service'] = $view;

  return $export;
}
