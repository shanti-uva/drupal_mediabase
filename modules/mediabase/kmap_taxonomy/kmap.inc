<?php

/**
*  @todo refactor this class to use the kmap_taxonomy
**/
class Kmap {
   
   const KMAP_PARENTAGE_FIRST_LAST = 'first_last'; 
   const KMAP_PARENTAGE_LAST = 'last';
   const KMAP_PARENTAGE_LAST_PLUS_PARENT = 'last_plus_parent';
   const KMAP_PARENTAGE_FULL = 'full';
   
   private $kmap_id = NULL;
   private $vid = NULL;
   private $term = NULL;
   
   /**
   * Kmap constructor
   **/
   public function __construct($kmap_id) {
      $this->kmap_id = $kmap_id;
      $this->vid = variable_get('kmap_taxonomy_vid', NULL);
      if ( null == $this->kmap_id ) {
         throw new Exception( t('Could not create a Kmap node because no kmap id was specified'));
      }
      else if ( null == $this->vid ) {
         throw new Exception( t('Could not create a Kmap node because there is no vocabulary id specified'));
      }
   }

   
   /**
   * Return a taxonomy term for a kmap id
   * populate function will fetch and store remote kmaps as taxonomy terms
   * if they are not already in there.
   **/
   public function get_term() {
      // lazy-load the term
      if (! isset( $this->term ) ) {
         $this->populate();
      }
      return $this->term;
   }
   
   /**
   * Return the parents of a kmap id in order of ancestor->child. 
   * i.e. the passed in kmap_id is the last item in the returned array
   * Returned array values contains the kmap_id, kmap_parent_id and the taxonomy term_id
   **/
   public function get_kmap_parentage($kmap_id, &$lineage = NULL) {
      $lineage = $lineage ? $lineage : array();
      $row = db_fetch_array(db_query("SELECT kmap_parent_id, term_id FROM {kmap_taxonomy} WHERE kmap_id = %d", $kmap_id));
      
      //TODO START HERE
      //need an array where $kmap_id => $kmap_titles
      
      array_unshift($lineage, array('kmap_id' => $kmap_id, 
         'kmap_parent_id' => $row['kmap_parent_id'], 
         'term_id' => $row['term_id']));
      if ($row['kmap_parent_id'] > 0) {
         get_kmap_parentage($row['kmap_parent_id'], $lineage); //Recurse up the tree
      }
      return $lineage;
   }
   
   
   public function render_kmap_parentage( $taxo_links = FALSE, $parentage_format = KMAP_PARENTAGE_FIRST_LAST) {
      if (! is_numeric($kmap_id) ) {
         return;
      }
      $lineage = get_kmap_parentage($this->kmap_id);
      $render_lineage = array();
      switch ( $parentage_format ) {
      case KMAP_PARENTAGE_FULL:
         $render_lineage = $lineage;
         break;
      case KMAP_PARENTAGE_LAST:
         $render_lineage[] = array_pop($lineage);
         break;
      case KMAP_PARENTAGE_FIRST_LAST:
         $render_lineage[] = array_shift($lineage);
         if ( ! empty($lineage) ) {
            $render_lineage[] = array_pop($lineage);
         }
         break;
      case KMAP_PARENTAGE_LAST_PLUS_PARENT:
         $render_lineage[] = array_pop($lineage);
         if ( ! empty($lineage) ) {
            array_unshift($render_lineage, array_pop($lineage));
         }
         break;
      }
      $output='';
      
      foreach ( $render_lineage as $index => $term ) {
         $output .= ! empty($output) ? ' > ' : ''; 
         $output .= $taxo_links ? l($term->name, "taxonomy/term/$term->tid") : $term->name;
      }
      return $output;
   }
   
   public function external_kmap_page_link($kmap_id) {
      //We need a path in this format tmb.thlib.org/categories/%d/children/%d where the first %d is the highest level parent
      $lineage = get_kmap_parentage($kmap_id);
      if (sizeof($lineage) > 1) {
         $ancestor = array_shift($lineage);
         $ancestor_id = $ancestor['kmap_id'];
         $external_kmap_path = sprintf('http://tmb.thlib.org/categories/%d/children/%d',$ancestor_id, $kmap_id);
      } else {
         $external_kmap_path = sprintf('http://tmb.thlib.org/categories/%d/children',$kmap_id);
      }
      return $external_kmap_path;
   }
   
   
   private function populate() {
      
      // First look for existing term           
      $query = new EntityFieldQuery();
      $entities = $query->entityCondition('entity_type', 'taxonomy_term')
      ->entityCondition('bundle', 'kmap_taxonomy')
      ->fieldCondition('kmap_id', 'value', $this->kmap_id, '=')
      ->execute();
      
      if ( !empty($entities) ) {
         // dpm("AAA", "expr");
         $tid = array_pop(array_keys($entities['taxonomy_term']));
         $term = taxonomy_term_load($tid);
      }
      else {
         // dpm("BBB", "");
         
         $term  = $this->add_to_taxonomy();
      }
      $this->term = $term;
      // dpm($term, "term B" );
   }
   
   private function add_to_taxonomy() {
      
      $xml = $this->get_remote_kmap_tree();
      // dpm((string)$xml, "xml");
      // dpm((string)$xml->category->id, "xml-cat-id");
      // dpm($this->kmap_id, "this->kmap_id");
      $results = $xml->xpath("//category[id=$this->kmap_id]/ancestor-or-self::category"); 
      // dpm( $results , 'xml ancestor results');
      $results = $results ? $results : array();
      
      // Loop through the kmap parentage from ancestor to child
      // saving taxonomy terms as needed
      
      $kmap_parent_id = 0; //The top level kmap never has a parent
      $taxo_parent_tid = null; //The top level kmap never has a parent
      foreach ($results as $category) {
         $query = new EntityFieldQuery();
         $entities = $query->entityCondition('entity_type', 'taxonomy_term')
         ->entityCondition('bundle', 'kmap_taxonomy')
         ->fieldCondition('kmap_id', 'value', $category->id, '=')
         ->execute();
         
         if ( empty($entities) ) {
            $term = array(
               'tid' => null,
               'vid' => $this->vid,
               'name' => $category->title,
               'vocabulary_machine_name' => 'kmap_taxonomy',
               'parent' => $taxo_parent_tid,
               );
            $term['kmap_id']['und'][0]['value'] = $category->id;
            $term['kmap_parent_id']['und'][0]['value'] = $kmap_parent_id;
            $term = (object)$term;
            taxonomy_term_save($term);
         }
         else {
            $term = array_shift( $entities['taxonomy_term'] );
         }
         
         $kmap_parent_id = $category->id;
         $taxo_parent_tid = $term->tid;
      }
      return $term;
   }
   
   private function get_remote_kmap_tree() {
      $tree = &drupal_static(__FUNCTION__);
      if (!isset($tree)) {
         //Get the full Kmap tree
         $uri = 'http://tmb.thlib.org/categories/all.xml';
         $str_xml = file_get_contents($uri);
         // dpm($str_xml, "str_xm");
         
         $tree = simplexml_load_string($str_xml);
      }
      return $tree;
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
   function render_full_kmap($kmap_id) {
      $non_std_lang_codes = array(
         'Tibetan-THL Wylie' => array( 'name' => 'Tibetan-THL Wylie' ),
         );
      module_load_include('inc', 'mediabase', 'includes/lang_codes_iso_639_2_utf8');
      $langs = array_merge( get_lang_codes(), $non_std_lang_codes );  
      
      $service_uri = sprintf('http://tmb.thlib.org/categories/%d/detailed.xml', $kmap_id);
      if ( $strXml = file_get_contents($service_uri) ) {
         $simpleXml = simplexml_load_string($strXml);
         
         //Set the Page Title
         drupal_set_title((string)$simpleXml->title);
         
         //Set Kmap Crumbs
         $terms = get_kmap_parentage_with_terms($kmap_id);
         $crumbs = array();
         foreach ( $terms as $kid => $term ) {
            $crumbs[] = l(  $term->name, "kmap/$kid/detail");
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
}

