#!/bin/bash
drush_alias="@mediabase.drupal.shanti.virginia.edu"
drush_status=`drush $drush_alias status drupal_root --pipe`
drupal_root="${drush_status//[[:space:]]/}" # use parameter expansion and trim whitespace
echo RUNNING: rsync aegir@drupal.shanti.virginia.edu:$drupal_root/sites/mediabase.drupal.shanti.virginia.edu/files/transcripts/* $drupal_root/sites/mediabase.drupal.shanti.virginia.edu/files/transcripts/
#rsync aegir@drupal.shanti.virginia.edu:$drupal_root/sites/mediabase.drupal.shanti.virginia.edu/files/transcripts/* $drupal_root/sites/mediabase.drupal.shanti.virginia.edu/files/transcripts/

