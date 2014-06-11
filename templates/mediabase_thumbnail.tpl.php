<div class="shanti-thumbnail">
    <div class="shanti-thumbnail-field shanti-field-<?php print $result['bundle']; ?>">    
      <div class="shanti-field-content"><a href="<?php print $result['link']; ?>" 
        class="shanti-thumbnail-link">
        <div class="kaltura">
            <div class="kaltura-thumb"><img title="<?php print $result['title']; ?>" alt="<?php print $result['title']; ?>" 
          src="<?php print $result['thumb_url']; ?>" 
          typeof="foaf:Image" class="k-no-rotate"></div>
        </div></a></div> 
    </div>  
    <div class="shanti-thumbnail-field shanti-field-title">        
       <span class="field-content"><a href="<?php print $result['link']; ?>" 
           class="shanti-thumbnail-link"><?php print $result['title']; ?></a></span>  
    </div>  
    <div class="shanti-field shanti-field-created">    
        <span class="shanti-label shanti-label-created">Posted</span>    
        <span class="shanti-field-content"><?php print date('M jS, Y', $result['fields']['created']); ?></span>  
    </div>  
    <?php if($coll): ?>
      <div class="shanti-field shanti-field-group-audience">    
          <span class="shanti-label shanti-label-group-audience">in </span>    
          <div class="shanti-field-content"><a href="<?php print $coll->url; ?>" 
            class="shanti-thumbnail-link"><a href="<?php print $coll->url; ?>"><?php print $coll->title; ?></a>
          </div>  
      </div>  
    <?php endif; ?>
</div>