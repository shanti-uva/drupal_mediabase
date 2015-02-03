core = 7.x

api = 2
projects[drupal][version] = "7.32"
projects[drupal][type] = core
projects[drupal][patch][] = "https://www.drupal.org/files/issues/1525176_1.patch"

; CONTRIB MODULES
; HOW TO FIND GIT REVISION IDS for -dev versions of modules: http://www.wizonesolutions.com/2011/12/19/drush-make-avoid-the-unexpected/ for 

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[apachesolr][version] = "1.x-dev"
projects[apachesolr][subdir] = "contrib"
;projects[apachesolr][patch][] = "http://drupal.org/files/apachesolr-field-name-truncates-1707404-9.patch"
;projects[apachesolr][patch][] = "http://drupal.org/files/apachesolr-18281014-indexing_order-39.patch"
projects[apachesolr][download][revision] = "329c47373b1c97d9b0314dee7a6ce51b1afa963c"

projects[apachesolr_views][version] = "1.0-beta2"
projects[apachesolr_views][subdir] = "contrib"
projects[apachesolr_views][patch][] = "https://drupal.org/files/use_arguments-1750952-13.patch"

projects[apachesolr_autocomplete][version] = "1.2"
projects[apachesolr_autocomplete][subdir] = "contrib"
projects[apachesolr_autocomplete][download][type] = "git" 
projects[apachesolr_autocomplete][patch][] = "http://drupal.org/files/1444038-apachesolr_autocomplete-apachesolr_search-6.patch"
;projects[apachesolr_autocomplete][patch][] = "http://drupal.org/files/1491068-jquery-autocomplete-collision-fix.patch"

projects[backup_migrate][version] = "2.4"
; projects[backup_migrate][download][type] = "git" 
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

projects[entity][version] = "1.3"
; was 1.x-dev, 1.3 is on drupal-dev, but on local dev have updated to 7.x-1.5
projects[entity][subdir] = "contrib"
;projects[entity][download][type] = "git" 
;projects[entity][download][revision] = "5731f741e3366889e95b5357f1f85b0acc51a9fe"

projects[entityreference][version] = "1.0-rc3"
; on local dev have updated to 7.x-1.1
projects[entityreference][subdir] = "contrib"

projects[expire][version] = "2.0-rc3"
projects[expire][subdir] = "contrib"

projects[facetapi][version] = "1.2"
projects[facetapi][subdir] = "contrib"

projects[facetapi_slider][version] = "1.x-dev"
projects[facetapi_slider][subdir] = "contrib"
projects[facetapi_slider][download][type] = "git" 
projects[facetapi_slider][download][revision] = "99b57fc670f6a5ca9dfcfaaa57acb6db93765b70"

projects[features][version] = "2.2"
projects[features][subdir] = "contrib"

projects[field_collection] = "1.x-dev"
; on local I have updated to 7.x-1.0-beta8
projects[field_collection][subdir] = "	contrib"
projects[field_collection][download][type] = "git" 
projects[field_collection][download][revision] = "4e0a52349a3f97b346622cda2e0e9ceb24787604"
projects[field_collection][patch][] = "https://raw.github.com/pinedrop/mediabase/master/patches/missing-bundle-patch-for-field-collection.patch"
projects[field_collection][patch][] = "https://drupal.org/files/issues/field_collection-non-object-field_collection_field_get_entity-1880312-9.patch"
projects[field_collection][patch][] = "https://www.drupal.org/files/field_collection-broken_beta5_upgrade-1877800-31.patch"

projects[field_group][version] = "1.x-dev"
projects[field_group][subdir] = "contrib"
projects[field_group][download][type] = "git" 
projects[field_group][download][revision] = "09f351080692305bd3447d61d0b18d021f0a72fb"

projects[filefield_sources][version] = "1.7"
projects[filefield_sources][subdir] = "contrib"

projects[fivestar][version] = "2.0-alpha2"
projects[fivestar][subdir] = "contrib"

projects[flag][version] = "2.0"
projects[flag][subdir] = "contrib"

projects[flexslider][version] = "1.0-rc3"
projects[flexslider][subdir] = "contrib"
; see libraries for flexslider

projects[forward][version] = "7.x-2.0"
projects[forward][subdir] = "contrib"

projects[i18n][version] = "1.11"
projects[i18n][subdir] = "contrib"
 
projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][subdir] = "contrib"

projects[jquery_update][version] = "2.4"
projects[jquery_update][subdir] = "contrib"

projects[kaltura][version] = "2.0"
projects[kaltura][subdir] = "contrib"
projects[kaltura][patch][] = "https://drupal.org/files/1567302-kaltura-field-view-notice-5.patch"
projects[kaltura][patch][] = "https://drupal.org/files/kaltura-undefined_variable-1547186.patch"
; if the following causes error, comment out and apply manually after set up
projects[kaltura][patch][] = "https://www.drupal.org/files/kaltura-array-to-string-conversion-1772120-6.patch"

projects[libraries][version] = "2.0"
projects[libraries][subdir] = "contrib"

projects[masquerade][version] = "1.0-rc4"
projects[masquerade][subdir] = "contrib"

projects[module_filter][version] = "1.7"
projects[module_filter][subdir] = "contrib"

projects[oauth][version] = "3.0"
projects[oauth][subdir] = "contrib"

projects[og][version] = "1.5"
projects[og][subdir] = "contrib"

projects[og_create_perms][version] = "1.0"
projects[og_create_perms][subdir] = "contrib"

projects[og_views][version] = "1.0"
projects[og_views][subdir] = "contrib"

projects[pagerer][version] = "1.1"
projects[pagerer][subdir] = "contrib"

projects[nice_menus][version] = "2.5"
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

projects[views][version] = "3.8"
projects[views][subdir] = "contrib"
projects[views][download][type] = "git" 
projects[views][download][revision] = "f7cb51aad6943973e22197d54d202453292d6a27"
projects[views][patch][] = "https://drupal.org/files/issues/views-check_ui_dialog_overlay-1995892-4.patch"
projects[views][patch][] = "https://www.drupal.org/files/issues/views-args_load_array-1924892-9.patch"

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
projects[wysiwyg][subdir] = "contrib"

; CUSTOM MODULES
projects[mediabase][download][type] = "git"
projects[mediabase][download][url] = "git://github.com/shanti-uva/drupal_mediabase.git"
projects[mediabase][download][branch] = "release"
projects[mediabase][type] = "module"

projects[kmaps_modules][download][type] = "git"
projects[kmaps_modules][download][url] = "git://github.com/shanti-uva/drupal_kmaps_modules.git" 
projects[kmaps_modules][download][branch] = "release"
projects[kmaps_modules][type] = "module"
projects[kmaps_modules][subdir] = "contrib/shanti"

projects[kmaps_navigator][download][type] = "git"
projects[kmaps_navigator][download][url] = "git://github.com/shanti-uva/drupal_kmaps_navigator.git" 
projects[kmaps_navigator][download][branch] = "release"
projects[kmaps_navigator][type] = "module"
projects[kmaps_navigator][subdir] = "contrib/shanti"

projects[sarvaka_modules][download][type] = "git"
projects[sarvaka_modules][download][url] = "git://github.com/shanti-uva/drupal_shanti_sarvaka_modules.git" 
projects[sarvaka_modules][download][branch] = "release"
projects[sarvaka_modules][type] = "module"
projects[sarvaka_modules][subdir] = "contrib/shanti"

projects[transcripts_apachesolr][download][type] = "git"
projects[transcripts_apachesolr][download][url] = "git://github.com/pinedrop/transcripts_apachesolr.git"
projects[transcripts_apachesolr][type] = "module"
projects[transcripts_apachesolr][subdir] = "transcripts"

projects[transcripts_ui][download][type] = "git"
projects[transcripts_ui][download][url] = "git://github.com/pinedrop/transcripts_ui.git"
projects[transcripts_ui][type] = "module"
projects[transcripts_ui][subdir] = "transcripts"


; CUSTOM THEMES

; Shanti Sarvaka Base Theme
projects[shanti-sarvaka][download][type] = "git"
projects[shanti-sarvaka][download][url] = "git://github.com/shanti-uva/drupal_shanti_sarvaka_theme.git"
projects[shanti-sarvaka][type] = "theme"

; Shanti Sarvaka Mediabase Sub Theme
projects[shanti-sarvaka-mb][download][type] = "git"
projects[shanti-sarvaka-mb][download][url] = "git://github.com/shanti-uva/drupal_shanti_sarvaka_mediabase.git"
projects[shanti-sarvaka-mb][type] = "theme"

; Old Mediabase Custom theme based on Omega
projects[mb-html5][download][type] = "git"
projects[mb-html5][download][url] = "git://github.com/shanti-uva/drupal_mediabase_theme_old.git"
projects[mb-html5][type] = "theme"

; Omega base theme for old mediabase theme
projects[omega][version] = "3.1"
projects[omega][type] = "theme"


; LIBRARIES

libraries[fancytree][download][type] = "git"
libraries[fancytree][dowload][url] = "git://github.com/mar10/fancytree/tree/master/dist"

libraries[flexslider][download][type] = "file"
libraries[flexslider][download][type] = "git"
libraries[flexslider][download][url] = "git://github.com/woothemes/FlexSlider.git"                         

libraries[jquery.cycle][download][type] = "file"
libraries[jquery.cycle][download][url] = "https://github.com/malsup/cycle/tarball/master"                         

libraries[json2][dowload][type] = "git"
libraries[json2][dowload][url] = "git://github.com/douglascrockford/JSON-js.git"

libraries[saxon][download][type] = "file"
libraries[saxon][download][url] = "http://downloads.sourceforge.net/project/saxon/Saxon-HE/9.4/SaxonHE9-4-0-3J.zip"

libraries[tinymce][download][type] = "file"
libraries[tinymce][download][url] = "http://download.moxiecode.com/tinymce/tinymce_3.5.8.zip"

