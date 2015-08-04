<?php

/**
*  @todo refactor this class to use the kmap_taxonomy
**/
class Kmap {
   
   const KMAP_LINEAGE_FIRST_LAST = 'first_last'; 
   const KMAP_LINEAGE_LAST = 'last';
   const KMAP_LINEAGE_LAST_PLUS_PARENT = 'last_plus_parent';
   const KMAP_LINEAGE_FULL = 'full';
   private $kmap_id = NULL;
   private $vid = NULL;
   private $term = NULL;
   private $lineage = NULL;
   
   /**
   * Kmap constructor
   **/
   public function __construct($kmap_id) {
      $this->kmap_id = $kmap_id;
      $this->vid = variable_get('kmap_taxonomy_vid', NULL);
      if ( null == $this->kmap_id ) {
      	 //ddebug_backtrace();
         throw new Exception( t('Could not create a Kmap node because no kmap id was specified'));
      }
      else if ( null == $this->vid ) {
         throw new Exception( t('Could not create a Kmap node because there is no vocabulary id specified'));
      }
   }
   
   /**
   * Construct a kmap from a tid
   **/
   public static function createKmapByTid($tid) {
      $term = taxonomy_term_load($tid);
      $kmap = new Kmap($term->kmap_id[LANGUAGE_NONE][0]['value']);   
      return $kmap;
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
   * Return a taxonomy term for a kmap id
   * populate function will fetch and store remote kmaps as taxonomy terms
   * if they are not already in there.
   **/
   public function get_kmap_id() {
      return $this->kmap_id;
   }

   public function get_kmap_lineage() {
      if ( !isset( $this->lineage ) ) {
         $this->lineage = $this->fetch_kmap_lineage($this->kmap_id);
      }
      return $this->lineage;
   }
   
   
   /**
   * Return the parents of a kmap id in order of ancestor->child. 
   * i.e. the passed in kmap_id is the last item in the returned array
   * Returned array values contains the kmap_id, kmap_parent_id and the taxonomy term_id
   * @todo Make this function a simple getter and move the work to a different function
   **/
   private function fetch_kmap_lineage($kmap_id, &$lineage = NULL) {    
      $kmap_id = empty($kmap_id) ? $this->kmap_id : $kmap_id;
         $term=null;
         $lineage = $lineage ? $lineage : array();
         
         $query = new EntityFieldQuery();
         $entities = $query->entityCondition('entity_type', 'taxonomy_term')
         ->entityCondition('bundle', 'kmap_taxonomy')
         ->fieldCondition('kmap_id', 'value', $kmap_id, '=')
         ->execute();
         
         if ( !empty($entities) ) {
            $tkeys = array_keys($entities['taxonomy_term']);
            $tid = array_pop($tkeys);
            $term = (array)taxonomy_term_load($tid);
            $kmap_parent_id = $term['kmap_parent_id']['und'][0]['value'];
            array_unshift($lineage, array(
               'kmap_id' => $kmap_id, 
               'kmap_parent_id' => $kmap_parent_id, 
               'tid' => $tid,
               'name' => $term['name']));
            if ($kmap_parent_id > 0) {
               $this->fetch_kmap_lineage($kmap_parent_id, $lineage); //Recurse up the tree
            }
         }
   return $lineage;
   }
   
   public function render_kmap_lineage( $lineage_format = Kmap::KMAP_LINEAGE_FIRST_LAST, $taxo_links = FALSE, $view_path = 'taxonomy/term/%tid') {
      if (! is_numeric($this->kmap_id) ) {
         return;
      }

      $lineage = $this->get_kmap_lineage();
      $rendered_lineage = array();
      switch ( $lineage_format ) {
      case Kmap::KMAP_LINEAGE_FULL:
         $rendered_lineage = $lineage;
         break;
      case Kmap::KMAP_LINEAGE_LAST:
         $rendered_lineage[] = array_pop($lineage);
         break;
      case Kmap::KMAP_LINEAGE_FIRST_LAST:
         $rendered_lineage[] = array_shift($lineage);
         if ( ! empty($lineage) ) {
            $rendered_lineage[] = array_pop($lineage);
         }
         break;
      case Kmap::KMAP_LINEAGE_LAST_PLUS_PARENT:
         $rendered_lineage[] = array_pop($lineage);
         if ( ! empty($lineage) ) {
            array_unshift($rendered_lineage, array_pop($lineage));
         }
         break;
      }
      
      $output='';
      foreach ( $rendered_lineage as $index => $term ) {
         $path_processed = variable_get('kmaps_site_subjects', 'http://badger.drupal-dev.shanti.virginia.edu/subjects');
				 $path_processed .= sprintf(variable_get('kmaps_site_path_format', '/%d/overview/nojs'), $term['kmap_id']);
         $output .= ! empty($output) ? ' > ' : ''; 
         $output .= $taxo_links ? l($term['name'], $path_processed) : $term['name'];
      }
      return $output;
   }
   
   public function get_lineage_types() {
      return array (
         Kmap::KMAP_LINEAGE_FIRST_LAST,
         Kmap::KMAP_LINEAGE_LAST,
         Kmap::KMAP_LINEAGE_LAST_PLUS_PARENT,
         Kmap::KMAP_LINEAGE_FULL,
         );
   }
   
/*    public function external_kmap_page_link($kmap_id) {
      //We need a path in this format tmb.thlib.org/categories/%d/children/%d where the first %d is the highest level parent
      $lineage = get_kmap_lineage();
      if (sizeof($lineage) > 1) {
         $ancestor = array_shift($lineage);
         $ancestor_id = $ancestor['kmap_id'];
         $external_kmap_path = sprintf('http://tmb.thlib.org/categories/%d/children/%d',$ancestor_id, $kmap_id);
      } else {
         $external_kmap_path = sprintf('http://tmb.thlib.org/categories/%d/children',$kmap_id);
      }
      return $external_kmap_path;
   }
    */
   
   private function populate() {
      
      // First look for existing term           
      $query = new EntityFieldQuery();
      $entities = $query->entityCondition('entity_type', 'taxonomy_term')
      ->entityCondition('bundle', 'kmap_taxonomy')
      ->fieldCondition('kmap_id', 'value', $this->kmap_id, '=')
      ->execute();
      
      if ( !empty($entities) ) {
         $tkeys = array_keys($entities['taxonomy_term']);
         $tid = array_pop($tkeys);
         $term = taxonomy_term_load($tid);
      }
      else {
         
         $term  = $this->add_to_taxonomy();
      }
      $this->term = $term;
   }
   
   private function add_to_taxonomy() {
      
      $xml = $this->get_remote_kmap_tree();
      // dpm((string)$xml, "xml");
      // dpm((string)$xml->category->id, "xml-cat-id");
      // dpm($this->kmap_id, "this->kmap_id");
      $results = $xml->xpath("//feature[@id=$this->kmap_id]/ancestor-or-self::feature"); 
      //$results = $xml->xpath("//category[id=$this->kmap_id]/ancestor-or-self::category"); 
      // dpm( $results , 'xml ancestor results');
      $results = $results ? $results : array();
      
      // Loop through the kmap lineage from ancestor to child
      // saving taxonomy terms as needed
      
      $kmap_parent_id = 0; //The top level kmap never has a parent
      $taxo_parent_tid = null; //The top level kmap never has a parent
     // dpm($results, 'results in add to tax of kmap.inc (ln. 200)');
      foreach ($results as $category) {
        //dpm($category->asXML(), 'category xml');
        $kmap_node_id = $category->attributes()->id;
        $kmap_header = $category->attributes()->header;

         $query = new EntityFieldQuery();
         $entities = $query->entityCondition('entity_type', 'taxonomy_term')
         ->entityCondition('bundle', 'kmap_taxonomy')
         ->fieldCondition('kmap_id', 'value', $kmap_node_id, '=')
         ->execute();
         
         if ( empty($entities) ) {
               $term = array(
                  'tid' => null,
                  'vid' => $this->vid,
                  'name' => $kmap_header,
                  'vocabulary_machine_name' => 'kmap_taxonomy',
                  'parent' => $taxo_parent_tid,
                  );
            $term['kmap_id']['und'][0]['value'] = $kmap_node_id;
            $term['kmap_parent_id']['und'][0]['value'] = $kmap_parent_id;
            $term = (object)$term;
            taxonomy_term_save($term);  
         }
         else {
            $term = array_shift( $entities['taxonomy_term'] );
         }
         $kmap_parent_id = $kmap_node_id;
         $taxo_parent_tid = $term->tid;
      }
      return $term;
   }

   private function get_remote_kmap_tree() {
      $tree = &drupal_static(__FUNCTION__);
      if (!isset($tree)) {
         $uri = trim(variable_get('kmap_server', 'http://subjects.kmaps.virginia.edu') . '/features/all.xml');
         //$uri = trim(variable_get('kmap_server', 'http://tmb.thlib.org') . '/categories/all.xml');
         $response = drupal_http_request($uri); // get the full kmap tree
         $tree = simplexml_load_string($response->data);
      }
      return $tree;
   }
}
