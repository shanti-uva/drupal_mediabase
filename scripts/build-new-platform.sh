#!/bin/bash
# This script has been tested with drush version 4.5 and drush make version 6.x-2.3
the_date=`date +"%Y-%m-%d"`
mediabase_dir="mediabase-$the_date"
transcripts_dir="transcripts-$the_date"
script_dir=`dirname "$0"`

#DOWNLOAD MODULES
cmd="drush make $script_dir/mediabase.make  $mediabase_dir --force-complete"
echo "RUNNING: $cmd"
`$cmd`



