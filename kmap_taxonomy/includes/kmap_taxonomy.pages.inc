<?php

function kmap_detail_page ($kmap_id) {
   module_load_include('inc', 'kmap_taxonomy', 'includes/kmap');
   $kmap = new Kmap($kmap_id);
   $term = $kmap->get_term();
   $title = t("Characteristic: !name", array('!name' => $term->name));
   drupal_set_title( $title );
   $output = render_full_kmap($kmap);
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
function render_full_kmap( $kmap) {
   $non_std_lang_codes = array(
      'Tibetan-THL Wylie' => array( 'name' => 'Tibetan-THL Wylie' ),
      );
   module_load_include('inc', 'kmap_taxonomy', 'includes/lang_codes_iso_639_2_utf8');
   $langs = array_merge( get_lang_codes(), $non_std_lang_codes );  
   
   $service_uri = sprintf('http://tmb.thlib.org/categories/%d/detailed.xml', $kmap->get_kmap_id());
   dpm($service_uri, "service_uri");
   
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
         $crumbs[] = l(  $item['name'], "characteristic/$kmap_id/detail");
      }
      $output .= sprintf('<div id="kmap-crumbs">%s</div>', implode(' > ', $crumbs));
      
      //Descriptions
      if (sizeof($simpleXml->descriptions) > 0 ) {
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
      if (sizeof($simpleXml->translated_titles) > 0 ) {
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
   }
   else {
      $output .= sprintf('<div>%s</div>', t('No knowledge map exists on the server matching id: ' . $kmap_id ));
   }
   
   return $output;
}
