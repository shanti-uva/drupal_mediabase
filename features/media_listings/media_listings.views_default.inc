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
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '24,48,96';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'shanti-thumbnail';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'shanti-gallery';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Subject (field_characteristic) */
  $handler->display->display_options['relationships']['field_characteristic_tid']['id'] = 'field_characteristic_tid';
  $handler->display->display_options['relationships']['field_characteristic_tid']['table'] = 'field_data_field_characteristic';
  $handler->display->display_options['relationships']['field_characteristic_tid']['field'] = 'field_characteristic_tid';
  /* Relationship: Content: Subcollection (field_subcollection) */
  $handler->display->display_options['relationships']['field_subcollection_tid']['id'] = 'field_subcollection_tid';
  $handler->display->display_options['relationships']['field_subcollection_tid']['table'] = 'field_data_field_subcollection';
  $handler->display->display_options['relationships']['field_subcollection_tid']['field'] = 'field_subcollection_tid';
  /* Relationship: Content: Location (field_pbcore_coverage_spatial) */
  $handler->display->display_options['relationships']['field_pbcore_coverage_spatial_tid']['id'] = 'field_pbcore_coverage_spatial_tid';
  $handler->display->display_options['relationships']['field_pbcore_coverage_spatial_tid']['table'] = 'field_data_field_pbcore_coverage_spatial';
  $handler->display->display_options['relationships']['field_pbcore_coverage_spatial_tid']['field'] = 'field_pbcore_coverage_spatial_tid';
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
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
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
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Field: Field: Collection */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = '';
  $handler->display->display_options['fields']['group_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['group_audience']['alter']['text'] = '[field_video]
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
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['group_audience']['click_sort_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['delta_offset'] = '0';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_characteristic']['id'] = 'field_characteristic';
  $handler->display->display_options['fields']['field_characteristic']['table'] = 'field_data_field_characteristic';
  $handler->display->display_options['fields']['field_characteristic']['field'] = 'field_characteristic';
  $handler->display->display_options['fields']['field_characteristic']['label'] = '';
  $handler->display->display_options['fields']['field_characteristic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_characteristic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_characteristic']['alter']['text'] = '%1';
  $handler->display->display_options['fields']['field_characteristic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_characteristic']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_characteristic']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Kmap Id (kmap_id) */
  $handler->display->display_options['arguments']['kmap_id_value']['id'] = 'kmap_id_value';
  $handler->display->display_options['arguments']['kmap_id_value']['table'] = 'field_data_kmap_id';
  $handler->display->display_options['arguments']['kmap_id_value']['field'] = 'kmap_id_value';
  $handler->display->display_options['arguments']['kmap_id_value']['relationship'] = 'field_characteristic_tid';
  $handler->display->display_options['arguments']['kmap_id_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['kmap_id_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['kmap_id_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['kmap_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['kmap_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['kmap_id_value']['summary_options']['items_per_page'] = '25';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<?php
module_load_include(\'inc\',\'kmap_taxonomy\',\'includes/kmap\');
$kmap = new Kmap(%1);
$t = $kmap->get_term();
print \'<h1>Subject: <span class="kmap-name">\' . $t->name . \'</span></h1>\';
?>';
  $handler->display->display_options['header']['area_1']['format'] = 'php_code';
  $handler->display->display_options['header']['area_1']['tokenize'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '(Displaying @start - @end of @total)';
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
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
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
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Field: Field: Collection */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = '';
  $handler->display->display_options['fields']['group_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['group_audience']['alter']['text'] = '[field_video]
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
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['group_audience']['click_sort_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['delta_offset'] = '0';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_characteristic']['id'] = 'field_characteristic';
  $handler->display->display_options['fields']['field_characteristic']['table'] = 'field_data_field_characteristic';
  $handler->display->display_options['fields']['field_characteristic']['field'] = 'field_characteristic';
  $handler->display->display_options['fields']['field_characteristic']['label'] = '';
  $handler->display->display_options['fields']['field_characteristic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_characteristic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_characteristic']['alter']['text'] = '%1';
  $handler->display->display_options['fields']['field_characteristic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_characteristic']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_characteristic']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Kmap Id (kmap_id) */
  $handler->display->display_options['arguments']['kmap_id_value']['id'] = 'kmap_id_value';
  $handler->display->display_options['arguments']['kmap_id_value']['table'] = 'field_data_kmap_id';
  $handler->display->display_options['arguments']['kmap_id_value']['field'] = 'kmap_id_value';
  $handler->display->display_options['arguments']['kmap_id_value']['relationship'] = 'field_characteristic_tid';
  $handler->display->display_options['arguments']['kmap_id_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['kmap_id_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['kmap_id_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['kmap_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['kmap_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['kmap_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'list/subjects/%';

  /* Display: Subcollection List */
  $handler = $view->new_display('page', 'Subcollection List', 'list_subcollections');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Media By Subcollection';
  $handler->display->display_options['display_description'] = 'List of Nodes by Kmap Subcollection';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<?php
module_load_include(\'inc\',\'kmap_taxonomy\',\'includes/kmap\');
$kmid = arg(2);
$kmap = new Kmap($kmid);
$t = $kmap->get_term();
print \'<h1>Subcollection: <span class="kmap-name">\' . $t->name . \'</span></h1>\';
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '(Displaying @start - @end of @total)';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Kmap Id (kmap_id) */
  $handler->display->display_options['arguments']['kmap_id_value']['id'] = 'kmap_id_value';
  $handler->display->display_options['arguments']['kmap_id_value']['table'] = 'field_data_kmap_id';
  $handler->display->display_options['arguments']['kmap_id_value']['field'] = 'kmap_id_value';
  $handler->display->display_options['arguments']['kmap_id_value']['relationship'] = 'field_subcollection_tid';
  $handler->display->display_options['arguments']['kmap_id_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['kmap_id_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['kmap_id_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['kmap_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['kmap_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['kmap_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'list/subcollections/%';

  /* Display: Location List */
  $handler = $view->new_display('page', 'Location List', 'list_places');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Media By Location';
  $handler->display->display_options['display_description'] = 'List of Nodes by Kmap Location';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<?php
module_load_include(\'inc\',\'mb_location\',\'mb_location\');
$kmid = arg(2);
$place =_get_kmap_place($kmid);
print \'<h1>Location: <span class="kmap-name">\' . $place->header . \'</span></h1>\';
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
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
  /* Relationship: Content: Location (field_pbcore_coverage_spatial) */
  $handler->display->display_options['relationships']['field_pbcore_coverage_spatial_tid']['id'] = 'field_pbcore_coverage_spatial_tid';
  $handler->display->display_options['relationships']['field_pbcore_coverage_spatial_tid']['table'] = 'field_data_field_pbcore_coverage_spatial';
  $handler->display->display_options['relationships']['field_pbcore_coverage_spatial_tid']['field'] = 'field_pbcore_coverage_spatial_tid';
  /* Relationship: Content: Subject (field_characteristic) */
  $handler->display->display_options['relationships']['field_characteristic_tid']['id'] = 'field_characteristic_tid';
  $handler->display->display_options['relationships']['field_characteristic_tid']['table'] = 'field_data_field_characteristic';
  $handler->display->display_options['relationships']['field_characteristic_tid']['field'] = 'field_characteristic_tid';
  /* Relationship: Content: Subcollection (field_subcollection) */
  $handler->display->display_options['relationships']['field_subcollection_tid']['id'] = 'field_subcollection_tid';
  $handler->display->display_options['relationships']['field_subcollection_tid']['table'] = 'field_data_field_subcollection';
  $handler->display->display_options['relationships']['field_subcollection_tid']['field'] = 'field_subcollection_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Place Dictionary Id (place_dictionary_id) */
  $handler->display->display_options['arguments']['place_dictionary_id_value']['id'] = 'place_dictionary_id_value';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['table'] = 'field_data_place_dictionary_id';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['field'] = 'place_dictionary_id_value';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['relationship'] = 'field_pbcore_coverage_spatial_tid';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'list/places/%';
  $translatables['media_by_kmap'] = array(
    t('Master'),
    t('Media By Category'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹'),
    t('›'),
    t('last »'),
    t('author'),
    t('term from field_characteristic'),
    t('term from field_subcollection'),
    t('term from field_pbcore_coverage_spatial'),
    t('<div class="shanti-thumbnail-image shanti-field-audio"> <a href="[path]" class="shanti-thumbnail-link">
    <span class="overlay">
        <span class="icon"></span>
    </span>
    [field_audio]
    <span class="icon shanticon-audio"></span>  
</a>
</div>'),
    t('<div class="shanti-thumbnail-image shanti-field-video"> <a href="[path]" class="shanti-thumbnail-link">
    <span class="overlay">
        <span class="icon"></span>
    </span>
    [field_video]
    <span class="icon shanticon-video"></span>  
</a>
</div>'),
    t('[field_audio]'),
    t('[field_video]
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
   </div>'),
    t('.'),
    t(','),
    t('%1'),
    t('All'),
    t('Tags (field_tags)'),
    t('Subject List'),
    t('List of A/V nodes tagged with a KMap subject'),
    t('<?php
module_load_include(\'inc\',\'kmap_taxonomy\',\'includes/kmap\');
$kmap = new Kmap(%1);
$t = $kmap->get_term();
print \'<h1>Subject: <span class="kmap-name">\' . $t->name . \'</span></h1>\';
?>'),
    t('(Displaying @start - @end of @total)'),
    t('Subcollection List'),
    t('Media By Subcollection'),
    t('List of Nodes by Kmap Subcollection'),
    t('<?php
module_load_include(\'inc\',\'kmap_taxonomy\',\'includes/kmap\');
$kmid = arg(2);
$kmap = new Kmap($kmid);
$t = $kmap->get_term();
print \'<h1>Subcollection: <span class="kmap-name">\' . $t->name . \'</span></h1>\';
?>'),
    t('Location List'),
    t('Media By Location'),
    t('List of Nodes by Kmap Location'),
    t('<?php
module_load_include(\'inc\',\'mb_location\',\'mb_location\');
$kmid = arg(2);
$place =_get_kmap_place($kmid);
print \'<h1>Location: <span class="kmap-name">\' . $place->header . \'</span></h1>\';
?>'),
  );
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '12,24,48,96';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'shanti-teaser';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Location (field_pbcore_coverage_spatial) */
  $handler->display->display_options['relationships']['field_pbcore_coverage_spatial_tid']['id'] = 'field_pbcore_coverage_spatial_tid';
  $handler->display->display_options['relationships']['field_pbcore_coverage_spatial_tid']['table'] = 'field_data_field_pbcore_coverage_spatial';
  $handler->display->display_options['relationships']['field_pbcore_coverage_spatial_tid']['field'] = 'field_pbcore_coverage_spatial_tid';
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
  /* Contextual filter: Taxonomy term: Place Dictionary Id (place_dictionary_id) */
  $handler->display->display_options['arguments']['place_dictionary_id_value']['id'] = 'place_dictionary_id_value';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['table'] = 'field_data_place_dictionary_id';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['field'] = 'place_dictionary_id_value';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['relationship'] = 'field_pbcore_coverage_spatial_tid';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['place_dictionary_id_value']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'shanti-teaser';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['media_by_location'] = array(
    t('Master'),
    t('Media By Location'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('term from field_pbcore_coverage_spatial'),
    t('<a href="[path]"><span class="play-icon-overlay"></span>
[field_audio]</a>'),
    t('<a href="[path]"><span class="play-icon-overlay"></span>
[field_video]</a>'),
    t('Posted'),
    t('by'),
    t('in '),
    t('Comments'),
    t('.'),
    t(','),
    t('All'),
    t('Tags (field_tags)'),
    t('Block'),
  );
  $export['media_by_location'] = $view;

  $view = new view();
  $view->name = 'recent_media';
  $view->description = '';
  $view->tag = 'mediabase';
  $view->base_table = 'node';
  $view->human_name = 'Recent Media';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More recent media';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '60';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['field_video']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_video']['alter']['absolute'] = TRUE;
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
    'dispaly_metadata' => 0,
    'delivery' => 'HTTP',
    'custom_player' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
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
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '6';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['path'] = 'recent/media';
  $translatables['recent_media'] = array(
    t('Master'),
    t('More recent media'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('author'),
    t('<a href="[path]"><span class="play-icon-overlay"></span>
[field_audio]</a>'),
    t('<a href="[path]"><span class="play-icon-overlay"></span>
[field_video]</a>'),
    t('Posted'),
    t('by'),
    t('in '),
    t('Comments'),
    t('.'),
    t(','),
    t('Tags (field_tags)'),
    t('Block'),
    t('more'),
    t('Page'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
  );
  $export['recent_media'] = $view;

  return $export;
}
