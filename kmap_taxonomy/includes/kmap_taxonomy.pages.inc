<?php

define('KMAP_DETAIL_SERVICE_URI_VAR', 'kmap_detail_service_uri');
define('KMAP_REMOTE_LINK_VAR', 'kmap_remote_link');
define('KMAP_ROOT_ONLY_REMOTE_LINK_VAR', 'kmap_root_only_remote_link');

function kmap_detail_page ($kmap_id, $views_display = 'default') {
   module_load_include('inc', 'kmap_taxonomy', 'includes/kmap');
   $kmap = new Kmap($kmap_id);
   $term = $kmap->get_term();
   // TITLE IS SET LATER $title = t("Subject: !name", array('!name' => $term->name));
   // TITLE IS SET LATER drupal_set_title( $title );
   $output = render_full_kmap($kmap, $views_display);
   return $output;
}

/**
* Fetch kmap details from the server and render as html
* XML looks like: 
<category>
<id type="id">353</id>
<title>Tibetan Typologies of Beings</title>
<descriptions type="array">
<description language="eng" title="" id="1084" is_main="false">
<content>
<p>This typology concerns all manner of agents found within the Tibetan worldview.&nbsp; This includes humans and the various kinds of supernatural beings found within world, as well as the buddhas, bodhisattvas, and other enlightened beings that transcend cyclic existence.</p>
</content>
<authors>
<person id="9">Chris Bell</person>
</authors>
</description>
<description language="bod" title="" id="1081" is_main="true">
<content>
<p>འགྲོ་བའི་རིགས་ཞེས་རིགས་དྲུག་གི་སེམས་ཅན་ཐམས་ཅད་ལ་ཟེར།་དེའི་ནང་དུ་ལྷ་འདྲེ་མི་གསུམ་སོགས་སེམས་ཅན་གྱི་རིགས་ཐམས་ཅད་འདུས་ཡོད་པ་རེད།་རིག་པ་ཞེས་པ་ཞིབ་འཇུག་བྱ་ཡུལ་གྱི་རིག་གཞུང་བྱེ་བྲག་པ་ཞིག་མཚོན་བྱེད་ཅིག་སྟེ།་དཔེར་ན།་བཟོ་རིག་པ་གསོ་བ་རིག་པ་ལྟ་བུའོ།</p>
</content>
<authors>
<person id="20">Thubten Phuntsok</person>
</authors>
</description>
</descriptions>
<translated_titles type="array">
<translated_title id="1415" lang="Tibetan-THL Wylie">
<title>bod kyi srid zhi 'gro ba'i rig pa/</title>
<authors>
<person id="20">Thubten Phuntsok</person>
</authors>
</translated_title>
<translated_title id="1416" lang="bod">
<title>བོད་ཀྱི་སྲིད་༷༷ཞི་འགྲོ་བའི་རིག་པ།</title>
<authors>
<person id="20">Thubten Phuntsok</person>
</authors>
</translated_title>
</translated_titles>
</category> 
**/
function render_full_kmap( $kmap, $views_display = 'default')  {
   $non_std_lang_codes = array(
      'Tibetan-THL Wylie' => array( 'name' => 'Tibetan-THL Wylie' ),
      );
   module_load_include('inc', 'kmap_taxonomy', 'includes/lang_codes_iso_639_2_utf8');
   $langs = array_merge( get_lang_codes(), $non_std_lang_codes );  
   
   $kmap_detail_service_uri = variable_get(KMAP_DETAIL_SERVICE_URI_VAR, 'http://tmb.thlib.org/categories/%d/detailed.xml');
   
   $service_uri = sprintf($kmap_detail_service_uri, $kmap->get_kmap_id());
   
   if ( $strXml = file_get_contents($service_uri) ) {
      $simpleXml = simplexml_load_string($strXml);
      
      //Set the Page Title
      drupal_set_title((string)$simpleXml->title);
      
      //Set Kmap Crumbs
      $lineage = $kmap->get_kmap_lineage();
      $crumbs = array();
      $output = '';
      foreach ( $lineage as  $item ) {
         $kmap_id = $item['kmap_id'];
         $crumbs[] = l(  $item['name'], "subject/$kmap_id/detail");
      }
      $output .= sprintf('<div id="kmap-crumbs">%s</div>', implode(' > ', $crumbs));
      
      //Descriptions
      if ( isset($simpleXml->descriptions->description) ) {
         $output .= sprintf('<h2>%s</h2>', t('Descriptions') );
      }
      foreach ($simpleXml->descriptions->description as $description) {
         $iso_code = (string)$description['language'];
         $desc_lang = $langs[$iso_code]['name'];
         $desc_label = t( $desc_lang . ' description: ' );
         $output .= sprintf('<div class="kmap_field"><strong>%s</strong><br />%s', $desc_label, strip_tags($description->content) )  . PHP_EOL;
         if (isset($description->authors->person)) {
            $output .= sprintf('<br /><label>%s</label>: ', t('Author(s)'));
            foreach( $description->authors as $author) {
               $output .= sprintf('<span>%s</span>',$author->person) . PHP_EOL;
            }
         }
         $output .= '</div>';
      }
      
      //Titles
      if (isset($simpleXml->translated_titles->translated_title)) {
         $output .= sprintf('<h2>%s</h2>', t('Titles') );
      }
      foreach ($simpleXml->translated_titles->translated_title as $trans_title) {
         $iso_code = (string)$trans_title['lang'];
         $title_lang = $langs[$iso_code]['name'];
         $output .= sprintf('<div class="kmap_field"><strong>%s</strong><br />%s', t( $title_lang . ' title: ' ), $trans_title->title )  . PHP_EOL;
         
         if (isset($trans_title->authors->person)) {
            $output .= sprintf('<br /><label>%s</label>: ', t('Author(s)'));
            foreach( $trans_title->authors as $author) {
               $output .= sprintf('<span>%s</span>',$author->person) . PHP_EOL;
            }
         }
         $output .= '</div>';
      }
      
      // Remote Link back to kmap server
      // for root category: http://tmb.thlib.org/categories/20/children
      // for sub-category: http://tmb.thlib.org/categories/20/children/40
      $remote_kmap_link_tpl = variable_get(KMAP_REMOTE_LINK_VAR, 'http://tmb.thlib.org/categories/%d/children/%d');
      $remote_root_only_kmap_link_tpl = variable_get(KMAP_ROOT_ONLY_REMOTE_LINK_VAR, 'http://tmb.thlib.org/categories/%d/children');
      $remote_kmap_link = '';
      if ( sizeof($lineage) > 1 ) {
         $remote_kmap_link = sprintf($remote_kmap_link_tpl, $lineage[0]['kmap_id'], $lineage[sizeof($lineage)-1]['kmap_id']);
      }
      else if ( sizeof($lineage) == 1 ) {
         $remote_kmap_link = sprintf($remote_root_only_kmap_link_tpl, $lineage[0]['kmap_id']);
      }
      if ( !empty($remote_kmap_link) ) {
         $l_title = t('View more on <strong>@kmap_title</strong> at Shanti Knowledge Maps', array('@kmap_title' => (string)$simpleXml->title));
         $output .= '<div>' . l($l_title, $remote_kmap_link, array('attributes' => array('title' => $l_title, 'target' => '_blank'), 'html' => TRUE)) . '</div>';
      }
   }
   else {
      $output .= sprintf('<div>%s</div>', t('No knowledge map exists on the server matching id: ' . $kmap_id ));
   }
   
      // add a views view of the media for this subject
   if ( module_exists('audio_video') ) {
      $output .= audio_video_render_kmap_view($kmap_id, $views_display);
   }

   
   return $output;
}
