core = 7.x

api = 2
projects[drupal][version] = "7.22"
projects[drupal][type] = core

; CONTRIB MODULES
; HOW TO FIND GIT REVISION IDS for -dev versions of modules: http://www.wizonesolutions.com/2011/12/19/drush-make-avoid-the-unexpected/ for 

projects[admin_menu][version] = "3.0-rc3"
projects[admin_menu][subdir] = "contrib"

projects[apachesolr][version] = "1.x-dev"
projects[apachesolr][subdir] = "contrib"
projects[apachesolr][patch][] = "http://drupal.org/files/apachesolr-field-name-truncates-1707404-9.patch"
projects[apachesolr][patch][] = "http://drupal.org/files/apachesolr-18281014-indexing_order-39.patch"
projects[apachesolr][download][revision] = "419151190caf8871af4a9d78b431b3bd1eeb3bbf"

projects[apachesolr_views][version] = "1.0-beta1"
projects[apachesolr_views][subdir] = "contrib"

projects[apachesolr_autocomplete][version] = "1.2"
projects[apachesolr_autocomplete][subdir] = "contrib"
projects[apachesolr_autocomplete][download][type] = "git" 
projects[apachesolr_autocomplete][patch][] = "http://drupal.org/files/1444038-apachesolr_autocomplete-apachesolr_search-6.patch"
projects[apachesolr_autocomplete][patch][] = "http://drupal.org/files/1491068-jquery-autocomplete-collision-fix.patch"

projects[backup_migrate][version] = "2.4"
projects[backup_migrate][download][type] = "git" 
projects[backup_migrate][subdir] = "contrib"

projects[better_exposed_filters][version] = "3.0-beta3"
projects[better_exposed_filters][subdir] = "contrib"
   
projects[context][version] = "3.0-beta6"
projects[context][subdir] = "contrib"

projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.x-dev"
projects[entity][subdir] = "contrib"
projects[entity][download][type] = "git" 
projects[entity][download][revision] = "5731f741e3366889e95b5357f1f85b0acc51a9fe"

projects[entityreference][version] = "1.0-rc3"
projects[entityreference][subdir] = "contrib"

projects[facetapi][version] = "1.2"
projects[facetapi][subdir] = "contrib"

projects[facetapi_slider][version] = "1.x-dev"
projects[facetapi_slider][subdir] = "contrib"
projects[facetapi_slider][download][type] = "git" 
projects[facetapi_slider][download][revision] = "99b57fc670f6a5ca9dfcfaaa57acb6db93765b70"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"

projects[field_collection] = 1.x-dev
projects[field_collection][subdir] = "contrib"
projects[field_collection][download][type] = "git" 
projects[field_collection][download][revision] = "4e0a52349a3f97b346622cda2e0e9ceb24787604"
projects[field_collection][patch][] = "https://raw.github.com/pinedrop/mediabase/master/patches/missing-bundle-patch-for-field-collection.patch"

projects[field_group][version] = "1.x-dev"
projects[field_group][subdir] = "contrib"
projects[field_group][download][type] = "git" 
projects[field_group][download][revision] = "09f351080692305bd3447d61d0b18d021f0a72fb"

projects[filefield_sources][version] = 1.7
projects[filefield_sources][subdir] = "contrib"

projects[fivestar][version] = "2.0-alpha2"
projects[fivestar][subdir] = "contrib"

projects[flag][version] = "2.0"
projects[flag][subdir] = "contrib"

projects[flexslider][version] = "1.0-rc3"
projects[flexslider][subdir] = "contrib"
; see libraries for flexslider

projects[kaltura][version] = "2.0"
projects[kaltura][subdir] = "contrib"
projects[kaltura][patch][] = "http://drupal.org/files/1567302-kaltura-field-view-notice-5.patch"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][subdir] = "contrib"

projects[jquery_update][version] = "2.3"
projects[jquery_update][subdir] = "contrib"

projects[libraries][version] = "2.0"
projects[libraries][subdir] = "contrib"

projects[masquerade][version] = "1.0-rc4"
projects[masquerade][subdir] = "contrib"

projects[oauth][version] = "3.0"
projects[oauth][subdir] = "contrib"

projects[og][version] = "1.5"
projects[og][subdir] = "contrib"

projects[og_create_perms][version] = "1.0"
projects[og_create_perms][subdir] = "contrib"

projects[og_views][version] = "1.0"
projects[og_views][subdir] = "contrib"

projects[pagerer][version] = "1.0-beta2"
projects[pagerer][subdir] = "contrib"

projects[nice_menus][version] = "2.1"
projects[nice_menus][subdir] = "contrib"

projects[panels][version] = "3.3"
projects[panels][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[profile2][version] = "1.2"
projects[profile2][subdir] = "contrib"

projects[purl][version] = "1.0-beta1"
projects[purl][subdir] = "contrib"

projects[realname][version] = "1.0"
projects[realname][subdir] = "contrib"

projects[rules][version] = "2.1"
projects[rules][subdir] = "contrib"

projects[services][version] = "3.3"
projects[services][subdir] = "contrib"

projects[services_views][version] = "1.0-beta2"
projects[services_views][subdir] = "contrib"

projects[shib_auth][version] = "4.0"
projects[shib_auth][subdir] = "contrib"

projects[spaces][version] = "3.x-dev"
projects[spaces][subdir] = "contrib"
projects[spaces][download][type] = "git" 
projects[spaces][download][revision] = "eac3a7ed7cda08edf80d3946dfa55bcc9dec1ca7"
projects[spaces][patch][] = "https://raw.github.com/pinedrop/mediabase/master/patches/spaces_og_use_a_different_space_type_plugin.patch"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[subform][version] = "1.0-alpha1"
projects[subform][subdir] = "contrib"

projects[token][version] = "1.4"
projects[token][subdir] = "contrib"

projects[views][version] = "3.x-dev"
projects[views][subdir] = "contrib"
projects[views][download][type] = "git" 
projects[views][download][revision] = "f7cb51aad6943973e22197d54d202453292d6a27"

projects[views_bulk_operations][version] = "3.0-beta3"
projects[views_bulk_operations][subdir] = "contrib"

projects[views_slideshow][version] = "3.0"
projects[views_slideshow][subdir] = "contrib"
; see libraries for jquery.cycle

projects[views_datasource][version] = "1.x-dev"
projects[views_datasource][subdir] = "contrib"
projects[views_datasource][download][type] = "git" 
projects[views_datasource][download][revision] = "f6faa7cde45ae56b86ce31c49c4aa71225e3c436"

projects[views_data_export][version] = "3.0-beta6"
projects[views_data_export][subdir] = "contrib"
projects[views_data_export][patch][] = "http://drupal.org/files/views_data_export-Fix_Mysql_specific_code-1690438-4.patch"

projects[votingapi][version] = "2.6"
projects[votingapi][subdir] = "contrib"

projects[wysiwyg][version] = "2.2"
projects[votingapi][subdir] = "contrib"

; CONTRIB THEMES
projects[omega][version] = "3.1"
projects[omega][patch][] = "https://raw.github.com/pinedrop/mediabase/master/patches/rename-omega_pager-func-for-pagerer-module.patch"

; CUSTOM MODULES
projects[mediabase][download][type] = "git"
projects[mediabase][download][url] = "git://github.com/pinedrop/mediabase.git"
projects[mediabase][type] = "module"

projects[transcripts][download][type] = "git"
projects[transcripts][download][url] = "git://github.com/pinedrop/transcripts.git"
projects[transcripts][type] = "module"

; CUSTOM THEMES
projects[mb-html5][download][type] = "git"
projects[mb-html5][download][url] = "git://github.com/pinedrop/mediabase-theme.git"
projects[mb-html5][type] = "theme"

; LIBRARIES
libraries[saxon][download][type] = "file"
libraries[saxon][download][url] = "http://downloads.sourceforge.net/project/saxon/Saxon-HE/9.4/SaxonHE9-4-0-3J.zip"
;libraries[saxon][download][url] = "https://raw.github.com/pinedrop/transcripts/master/transcripts.xsl"

libraries[jquery.cycle][download][type] = "file"
libraries[jquery.cycle][download][url] = "https://github.com/malsup/cycle/tarball/master"                         

libraries[flexslider][download][type] = "file"
libraries[flexslider][download][type] = "git"
libraries[flexslider][download][url] = "git://github.com/woothemes/FlexSlider.git"                         

libraries[tinymce][download][type] = "file"
libraries[tinymce][download][url] = "http://download.moxiecode.com/tinymce/tinymce_3.5.8.zip"
