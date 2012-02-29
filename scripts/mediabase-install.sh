#!/bin/bash

# This script has been tested with drush version 4.5 and drush make version 6.x-2.3

#DOWNLOAD MODULES
drush make ~/Sites/mb7/sites/mediabase/scripts/mediabase.make  drupal_mediabase  --force-complete --no-clean

#CLONE THE MEDIABASE GIT REPOSITORY AND SUBMODULES
cd drupal_mediabase/sites
git clone ssh://git@github.com/pinedrop/mediabase.git mediabase
cd mediabase
git submodule init
git submodule update
cd modules/transcripts
git checkout master
cd ../../

#SITE INSTALL
#   db-su params should be a user/pass with drop create grant perms on the db below
#   the user:pass in the --db-url do not need to be the super user; and should not be the super user
drush --yes site-install \
--account-mail=travis@pinedrop.com  \
--account-name=travis  \
--account-pass=password  \
--site-mail=travis@pinedrop.com  \
--site-name="Shanti Mediabase" \
--db-su=root  \
--db-su-pw=root  \
--db-url=mysql://root:root@127.0.0.1/mediabase_db \
--sites-subdir=mediabase

#ENABLE MB MODULES
drush --yes pm-enable  mediabase
drush --yes pm-enable  mb_kaltura
drush --yes pm-enable  mb_metadata
drush --yes pm-enable  mb_shibboleth
drush --yes pm-enable  mb_structure

#ENABLE MB  FEATURES
drush --yes pm-enable  profile2   #features bug? this is required by user_config feature but needs to be installed before user_config can be enabled; features bug?

# drush --yes pm-enable mediabase_config
# drush --yes features-revert mediabase_config

ln -s mediabase/ ../localhost.drupal_mediabase

drush --yes pm-enable audio_video 
drush --yes pm-enable  collection 
drush --yes pm-enable  site_config
# drush --yes pm-enable  user_config
# drush --yes pm-enable  solr_search_site_transcripts

#REVERT FEATURES SO DB MATCHES FEATURES IN CODE
drush --yes features-revert audio_video 
drush --yes features-revert  collection 
drush --yes features-revert  site_config
# drush --yes features-revert  user_config 
# drush --yes features-revert  solr_search_site_transcripts 

#ENABLE OTHER BITS
drush --yes pm-enable  diff admin_menu

if [ `command -v say` ]; then
   say "Your mediabase install is finished"
fi

# TRANSCRIPTS
# See sites/mediabase/modules/transcripts/README for info on setting up saxon and XSLT transformations of transcripts

# NEXT STEPS TO CONFIGURE MANUALLY
# admin/config/media/kaltura
# admin/config/media/mediabase - here, you set a key-value pair for partner data prefixes to urls to be used in the pbcore identifier field
# admin/content/mediabase/import?filter=<partner-data-prefix>
# admin/structure/types/manage/video/fields/field_video  
#     Set the Content Ingestion to "Use Existing Only"
#     Set the Media Player to Mediabase Video Player
# admin/structure/types/manage/audio/fields/field_audio  
#     Set the Content Ingestion to "Use Existing Only"
#     Set the Media Player to Mediabase Audio Player
# admin/config/search/apachesolr/transcripts
# admin/config/search/apachesolr/settings

