#!/bin/bash
# This script is a workaround for a problem with drush_make in aegir 1.3                                                                                                                                        
# which prevents patches specified in makefiles from being applied. It 
# relies on a newer version of drush / drush/make to make the platform

# config for dev env
home="/Users/travis"
git_repo="$home/Sites/mb7/sites/all/modules/mediabase"
git_repo_theme="$home/Sites/mb7/sites/all/themes/mb-html5"
aegir_cmd=""
main_drush_path="/Users/travis/bin/drush-7.x-5.1/drush.php"
newer_drush_path="/Users/travis/bin/drush-7.x-5.1/drush.php"
platforms_dir="/Users/travis/Sites"

# config for drupal-manager.shanti
#home="/var/aegir"
#git_repo="$home/git/mediabase"
#git_repo_theme="$home/git/mediabase-theme"
#aegir_cmd="sudo -u aegir"
#main_drush_path="$aegir_cmd /usr/bin/php /lv1/drupal/drush/drush.php --php='/usr/bin/php'"
#newer_drush_path="$aegir_cmd $home/bin/drush-5.1/drush.php"
#platforms_dir="/var/aegir/platforms"

makefile="$git_repo/scripts/mediabase.make"

#  store arguments  in special array
args=("$@")

# check args
num=$#
if [ $num -lt 1 ]; then
   echo "
Error: arguments were not correctly specified
   
Usage: build-aegir-platforms.sh platform-name @server_alias [/optional/path/to/mediabase.make]

Example: build-aegir-platforms.sh mbase-20120328-7.12-test @drupal_test

Available Platforms: 
@server_drupalshantivirginiaedu
@server_drupalstagingshantivirginiaedu
@server_drupaltestshantivirginiaedu
"

   exit
fi

#  config after args are processed
platform=${args[0]}
platform_alias="@$platform"
platform_root="$platforms_dir/$platform"
platform_tmp="/tmp/$platform"

# if directory already exists, do nothing
if [ -d $platform_root ]; then
	echo "Error: the directory, $platform_root, already exists. Please specify a new platform name."
	exit
fi

# do a git clone
cd $git_repo
$aegir_cmd git pull
cd -
cd $git_repo_theme
$aegir_cmd git pull
cd -

# check for a valid optional makefile
if [ ${args[2]} ] && [ -d ${args[2]} ]; then
	makefile=${args[2]}
	echo "Using specified makefile, $makefile"
elif [ ${args[2]} ] ; then
	echo "Error: The makefile, $makefile, was not found. Please specify a valid makefile path or leave the argument out to use the default"
	exit
else
   echo "Using default makefile, $makefile"
fi

echo "Main Drush Path: $main_drush_path"
echo "Newer Drush Path for running make: $newer_drush_path"
echo "Web Server for platform: $web_server_alias"

# BUILD THE PLATFORM FROM MAKE FILE USING NEWER DRUSH
echo "RUNNING: $newer_drush_path make --concurrency=1 $makefile $platform_root --no-cache"
$newer_drush_path make --concurrency=1 $makefile $platform_root --no-cache
#$aegir_cmd cp -r $platform_tmp $platforms_dir/

# Fetch spyc.php for services rest_server since netsed make files are broken in current drush http://drupal.org/node/1355952
$aegir_cmd wget http://spyc.googlecode.com/svn/trunk/spyc.php -O /tmp/spyc.php
$aegir_cmd cp /tmp/spyc.php $platform_root/sites/all/modules/contrib/services/servers/rest_server/lib/

# COPY crossdomain.xml TO PLATFORM ROOT
$aegir_cmd cp $platform_root/sites/all/modules/contrib/kaltura/crossdomain.xml $platform_root/

#EXIT HERE IF EXPERIENCING ANY PROBLEMS AND LOOK FOR THE PLATFORM IN /var/aegir/platforms
echo "EXITING"
exit

#SET THE WEBSERVER ALIAS FOR PROVISION
web_server_alias=${args[1]}

# CREATE THE ALIAS USING MAIN DRUSH
echo "RUNNING: $main_drush_path --root=$platform_root provision-save \"$platform_alias\" --context_type='platform'  --web_server=$web_server_alias"
$main_drush_path --root=$platform_root provision-save "$platform_alias" --context_type='platform' --web_server=$web_server_alias

# VERIFY THE PLATFORM USING MAIN DRUSH
echo "RUNNING: $main_drush_path $platform_alias provision-verify"
$main_drush_path $platform_alias provision-verify

#IMPORT THE PLATFORM INTO HOSTMASTER  USING MAIN DRUSH
echo "RUNNING: $main_drush_path @hostmaster hosting-import $platform_alias"
$main_drush_path @hostmaster hosting-import $platform_alias

