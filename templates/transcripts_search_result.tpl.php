<?php

/**
 * @file
 * Default theme implementation for displaying a single search result.
 *
 * This template renders a single search result and is collected into
 * search-results.tpl.php. This and the parent template are
 * dependent to one another sharing the markup for definition lists.
 *
 * Available variables:
 * - $url: URL of the result.
 * - $title: Title of the result.
 * - $snippet: A small preview of the result. Does not apply to user searches.
 * - $info: String of all the meta information ready for print. Does not apply
 *   to user searches.
 * - $info_split: Contains same data as $info, split into a keyed array.
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Default keys within $info_split:
 * - $info_split['module']: The module that implemented the search query.
 * - $info_split['user']: Author of the node linked to users profile. Depends
 *   on permission.
 * - $info_split['date']: Last update of the node. Short formatted.
 * - $info_split['comment']: Number of comments output as "% comments", %
 *   being the count. Depends on comment.module.
 *
 * Other variables:
 * - $classes_array: Array of HTML class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $title_attributes_array: Array of HTML attributes for the title. It is
 *   flattened into a string within the variable $title_attributes.
 * - $content_attributes_array: Array of HTML attributes for the content. It is
 *   flattened into a string within the variable $content_attributes.
 *
 * Since $info_split is keyed, a direct print of the item is possible.
 * This array does not apply to user searches so it is recommended to check
 * for its existence before printing. The default keys of 'type', 'user' and
 * 'date' always exist for node searches. Modules may provide other data.
 * @code
 *   <?php if (isset($info_split['comment'])): ?>
 *     <span class="info-comment">
 *       <?php print $info_split['comment']; ?>
 *     </span>
 *   <?php endif; ?>
 * @endcode
 *
 * To check for all available data within $info_split, use the code below.
 * @code
 *   <?php print '<pre>'. check_plain(print_r($info_split, 1)) .'</pre>'; ?>
 * @endcode
 *
 * @see template_preprocess()
 * @see template_preprocess_search_result()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<li class="list-group-item <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php $parent = $result['transcripts_node']; ?>
  <div class='clearfix transcript-search-result'>

    <div class="shanti-thumbnail-image shanti-field-<?php print $parent['bundle']; ?>">
      <a href="<?php print $parent['link']; ?>" class="shanti-thumbnail-link">
         <span class="overlay">
            <span class="icon"></span>
         </span>
         <img title="<?php print $parent['title']; ?>"
             alt="<?php print $parent['title']; ?>"
             src="<?php if(isset($parent['thumb_url'])) { print $parent['thumb_url']; } ?>"
             typeof="foaf:Image" class="k-no-rotate">
         <i class="icon shanticon-<?php if($parent['bundle'] == 'video') { print 'video'; } else { print 'audio'; } ?>"></i>
      </a>
    </div>

  <div class="search-snippet-info">
    <?php if ($snippet): ?>
      <p class="search-snippet <?php print $content_attributes; ?>"><?php print $snippet; ?></p>
    <?php endif; ?>
    <?php if ($info): ?>
      <p class="search-info"><?php print $info; ?></p>
    <?php endif; ?>
  </div>

    <div class="shanti-thumbnail-info">
     <div class="body-wrap">
      <div class="shanti-thumbnail-field shanti-field-title">
         <span class="field-content"><?php print $parent['title']; ?></span>
      </div>
      <div class="shanti-thumbnail-field shanti-field-created">
          <span class="shanti-field-content"><?php
                if(!empty($result['fields']['im_media_create_date'])) {
                        print date('j F Y', $result['fields']['im_media_create_date'][0]);
                                                } else {
                        print date('j F Y', $parent['created']);
                                                }
                                        ?></span>
      </div>
      <?php if(isset($parent['duration'])): ?>
        <div class="shanti-thumbnail-field shanti-field-duration">
         <span class="field-content"> <?php print $parent['duration']['formatted'] ?></span>
        </div>
      <?php endif; ?>
      <?php if($parent['coll']): ?>
        <div class="shanti-field shanti-field-group-audience">
            <!--<span class="shanti-label shanti-label-group-audience">in </span>    -->
            <div class="shanti-field-content"><a href="<?php print $parent['coll']->url; ?>"
              class="shanti-thumbnail-link"><a href="<?php print $parent['coll']->url; ?>"><?php print $parent['coll']->title; ?></a>
            </div>
        </div>
      <?php endif; ?>
	<div>
                <a class="btn btn-default" role="button"
                        href="<?php print $parent['link']; ?>"
                        class="shanti-thumbnail-link">
                        <span class="glyphicon glyphicon-play"></span>
                        Media Resource
                </a>
        </div>
      </div>
     </div>

  </div>
</li>
