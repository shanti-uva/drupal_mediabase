<?php
/**
 * Mediabase Thumbnail Variables:
 * 	$result:
 * 		bundle: 	'audio' or 'video'
 * 		link: 		the link to the node
 * 		title: 		title of the node
 * 		thumb_url: thumbnail for the node
 * 		fields:		result['fields']
 * 			im_media_create_date or created
 * 		duration:
 * 		place_link
 * 
 * 	$coll: object for the collection it belongs to
 * 		title: 	title of collection
 * 		url: 		url for collection
 * 		
 */
 
 //dpm($result, 'result in template');
?>
<li class="shanti-thumbnail <?php print $result['thumbnail_classes']; ?>"> 
    <div class="shanti-thumbnail-image shanti-field-<?php print $result['bundle']; ?>"> 
      <a href="<?php print $result['link']; ?>" class="shanti-thumbnail-link">
         <span class="overlay">
            <span class="icon"></span>
         </span>
         <img title="<?php print htmlentities($result['title']); ?>" 
             alt="<?php print htmlentities($result['title']); ?>" 
             src="<?php if(isset($result['thumb_url'])) { print $result['thumb_url']; } ?>" 
             typeof="foaf:Image" class="k-no-rotate">
         <i class="icon shanticon-<?php if($result['bundle'] == 'video') { print 'video'; } else { print 'audio'; } ?>"></i> 
      </a>
    </div>
    <div class="shanti-thumbnail-info">      
     <div class="body-wrap">
      <div class="shanti-thumbnail-field shanti-field-title">        
         <span class="field-content"><a href="<?php print $result['link']; ?>" 
             class="shanti-thumbnail-link"><?php print $result['title']; ?></a></span>  
      </div>  
      
      <div class="shanti-thumbnail-field shanti-field-created">       
          <span class="shanti-field-content"><?php 
          	if(!empty($result['fields']['im_media_create_date'])) {
          		print date('j F Y', $result['fields']['im_media_create_date'][0]);
						} else {
          		print date('j F Y', $result['fields']['created']);
						} 
					?></span>  
      </div>  
      
      <?php if(isset($result['duration'])): ?>
        <div class="shanti-thumbnail-field shanti-field-duration">        
         <span class="field-content"> <?php print $result['duration']['formatted'] ?></span>
        </div>
      <?php endif; ?>

      <?php if($result['has_transcript']): ?>
        <div class="shanti-thumbnail-field shanti-field-languages">
         <span class="field-content"> <?php print $result['transcript_tiers'] ?></span>
        </div>
      <?php endif; ?>
            
      <?php if($coll): ?>
        <div class="shanti-field shanti-field-group-audience">    
            <!--<span class="shanti-label shanti-label-group-audience">in </span>    -->
            <div class="shanti-field-content"><a href="<?php print $coll->url; ?>" 
              class="shanti-thumbnail-link"><?php print $coll->title; ?></a>
            </div>  
        </div>  
      <?php endif; ?>
    </div> <!-- end body-wrap -->
    
    <div class="footer-wrap">  
      <?php if(isset($result['place_link']) && count($result['place_link']) > 0): ?>
        <div class="shanti-thumbnail-field shanti-field-place">        
         <span class="field-content"><i class="shanticon shanticon-places"></i> 
           <?php print $result['place_link']; ?>
         </span>
        </div>
      <?php endif; ?>
    </div> <!-- end footer -->  
   </div> <!-- end shanti-thumbnail-info -->
</li> <!-- end shanti-thumbnail -->
