<div class="shanti-thumbnail <?php print $result['bundle']; ?> col-lg-2 col-md-3 col-sm-4 col-xs-12"> 
    <div class="shanti-thumbnail-image shanti-field-<?php print $result['bundle']; ?>"> 
      <a href="<?php print $result['link']; ?>" class="shanti-thumbnail-link">
         <img title="<?php print $result['title']; ?>" 
             alt="<?php print $result['title']; ?>" 
             src="<?php print $result['thumb_url']; ?>" 
             typeof="foaf:Image" class="k-no-rotate">
         <i class="shanticon-<?php if($result['bundle'] == 'video') { print 'video'; } else { print 'audio'; } ?>"></i> <!-- Need to switch icon based on bundle -->
      </a>
    </div>
    <div class="shanti-thumbnail-info">
      <div class="shanti-field shanti-field-created">       
          <span class="shanti-field-content"><?php print date('j F Y', $result['fields']['created']); ?></span>  
      </div>  
      <div class="shanti-thumbnail-field shanti-field-title">        
         <span class="field-content"><a href="<?php print $result['link']; ?>" 
             class="shanti-thumbnail-link"><?php print $result['title']; ?></a></span>  
      </div>  
      <?php if($coll && 2==1): ?>
        <div class="shanti-field shanti-field-group-audience">    
            <span class="shanti-label shanti-label-group-audience">in </span>    
            <div class="shanti-field-content"><a href="<?php print $coll->url; ?>" 
              class="shanti-thumbnail-link"><a href="<?php print $coll->url; ?>"><?php print $coll->title; ?></a>
            </div>  
        </div>  
      <?php endif; ?>
    </div>  
</div>