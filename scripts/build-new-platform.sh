#!/bin/bash
# This script has been tested with drush version 4.5 and drush make version 6.x-2.3
the_date=`date +"%Y-%m-%d"`
mediabase_dir="mediabase-$the_date"
transcripts_dir="transcripts-$the_date"
$script_dir=`dirname "$0"`

#DOWNLOAD MODULES
drush make $script_dir/mediabase.make  $mediabase_dir

#CLONE THE MEDIABASE GIT REPOSITORY AND SUBMODULES
wget -O - --no-check-certificate "https://github.com/pinedrop/mediabase/zipball/master" > /tmp/$mediabase_dir.zip
mkdir -p $mediabase_dir/sites
cd $mediabase_dir/sites
unzip /tmp/$mediabase_dir.zip
mv pinedrop-mediabase-* mediabase

cd mediabase/modules
wget -O - --no-check-certificate "https://github.com/pinedrop/transcripts/zipball/master" > /tmp/$transcripts_dir.zip
unzip /tmp/$transcripts_dir.zip
mv pinedrop-transcripts-*/* transcripts/
rm -r pinedrop-transcripts-*

if [ `command -v say` ]; then
   say "Your platform build is finished."
else
   echo "Your platform build is finished."
fi
