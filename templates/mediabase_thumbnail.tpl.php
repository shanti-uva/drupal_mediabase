<div class="shanti-thumbnail">
    <div class="shanti-thumbnail-field shanti-field-<?php print $entity['bundle']; ?>">        
      <div class="shanti-field-content"><a href="<?php print $entity['link']; ?>" 
        class="shanti-thumbnail-link">
        <div class="kaltura">
            <div class="kaltura-thumb"><img title="<?php print $entity['title']; ?>" alt="<?php print $entity['title']; ?>" 
          src="<?php print $entity['thumb_url']; ?>" 
          typeof="foaf:Image" class="k-no-rotate"></div>
        </div></a></div> 
    </div>  
    <div class="shanti-thumbnail-field shanti-field-title">        
       <span class="field-content"><a href="<?php print $entity['link']; ?>" 
           class="shanti-thumbnail-link"><?php print $entity['title']; ?></a></span>  
    </div>  
    <div class="shanti-field shanti-field-created">    
        <span class="shanti-label shanti-label-created">Posted</span>    
        <span class="shanti-field-content"><?php print date('M jS, Y', $entity['fields']['created']); ?></span>  
    </div>  
    <div class="shanti-field shanti-field-group-audience">    
        <span class="shanti-label shanti-label-group-audience">in </span>    
        <div class="shanti-field-content"><a href="<?php print $coll->url; ?>" 
          class="shanti-thumbnail-link"><a href="<?php print $coll->url; ?>"><?php print $coll->title; ?></a>
        </div>  
    </div>  
</div>