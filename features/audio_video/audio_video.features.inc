<?php
/**
 * @file
 * audio_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function audio_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function audio_video_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function audio_video_flag_default_flags() {
  $flags = array();
  // Exported flag: "Editor&#039;s pick".
  $flags['editors_pick'] = array(
    'content_type' => 'node',
    'title' => 'Editor\'s pick',
    'global' => 1,
    'types' => array(
      0 => 'audio',
      1 => 'video',
    ),
    'flag_short' => 'Flag as Editor\'s Pick',
    'flag_long' => 'Flag this item as an editor\'s pick mking it eleigble to appear on the home page.',
    'flag_message' => 'This item was marked as an Editor\'s Pick allowing it to appear on the home page.',
    'unflag_short' => 'Unflag as Editor\'s Pick',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 4,
      ),
      'unflag' => array(
        0 => 4,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'audio_video',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Favorites".
  $flags['favorites'] = array(
    'content_type' => 'node',
    'title' => 'Favorites',
    'global' => 0,
    'types' => array(
      0 => 'audio',
      1 => 'video',
    ),
    'flag_short' => 'Add to my favorites',
    'flag_long' => 'Add this post to your favorites',
    'flag_message' => 'This post has been added to your favorites',
    'unflag_short' => 'Remove from my favorites',
    'unflag_long' => 'Remove this post from my favorites',
    'unflag_message' => 'This post has been removed from my favorites',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'audio_video',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Loanable".
  $flags['loanable'] = array(
    'content_type' => 'node',
    'title' => 'Loanable',
    'global' => 1,
    'types' => array(
      0 => 'audio',
      1 => 'video',
    ),
    'flag_short' => 'Mark media as loanable',
    'flag_long' => 'Making this item loanable lets other collections "borrow" it for inclusion in their own collection.',
    'flag_message' => 'Marked as loanable; managers of other collections can add this to their collections. Edit rights are <b>not</b> transferred.',
    'unflag_short' => 'Mark media as not loanable',
    'unflag_long' => 'Making this item not loanable prevents other collections from "borrowing" it for inclusion in their own collection.',
    'unflag_message' => 'Marked as not loanable; managers of other collections can not add this to their collections.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => 'own',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'audio_video',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function audio_video_image_default_styles() {
  $styles = array();

  // Exported image style: carousel_image.
  $styles['carousel_image'] = array(
    'name' => 'carousel_image',
    'label' => 'Carousel Image',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 300,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: gallery_thumb.
  $styles['gallery_thumb'] = array(
    'name' => 'gallery_thumb',
    'label' => 'Gallery Thumb',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 104,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function audio_video_node_info() {
  $items = array(
    'audio' => array(
      'name' => t('Audio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
