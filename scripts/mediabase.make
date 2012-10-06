core = 7.x

api = 2
projects[drupal][version] = "7.15"
projects[drupal][type] = core

; CONTRIB MODULES
; See http://www.wizonesolutions.com/2011/12/19/drush-make-avoid-the-unexpected/ for how to find git revs for -dev versions of modules

projects[admin_menu][version] = "3.0-rc3"
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][download][type] = "git" 

projects[apachesolr][version] = "1.0-rc3"
projects[apachesolr][subdir] = "contrib"
projects[apachesolr][download][type] = "git" 

projects[apachesolr_views][version] = "1.0-beta1"
projects[apachesolr_views][subdir] = "contrib"
projects[apachesolr_views][download][type] = "git" 

projects[apachesolr_autocomplete][version] = "1.2"
projects[apachesolr_autocomplete][subdir] = "contrib"
projects[apachesolr_autocomplete][download][type] = "git" 
projects[apachesolr_autocomplete][patch][] = "http://drupal.org/files/1444038-apachesolr_autocomplete-apachesolr_search-6.patch"

projects[backup_migrate][version] = "2.4"
projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate][download][type] = "git" 

projects[context][version] = "3.0-beta4"
projects[context][subdir] = "contrib"
projects[context][download][type] = "git" 

projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"
projects[ctools][download][type] = "git" 

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"
projects[date][download][type] = "git" 

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"
projects[devel][download][type] = "git" 

projects[diff][version] = "2.0"
projects[diff][subdir] = "contrib"
projects[diff][download][type] = "git" 

projects[entity][version] = "1.0-rc3"
projects[entity][subdir] = "contrib"
projects[entity][download][type] = "git" 

projects[entityreference][version] = "1.0-rc3"
projects[entityreference][subdir] = "contrib"
projects[entityreference][download][type] = "git" 

projects[facetapi][version] = "1.1"
projects[facetapi][subdir] = "contrib"
projects[facetapi][download][type] = "git" 

projects[facetapi_slider][version] = "1.x-dev"
projects[facetapi_slider][subdir] = "contrib"
projects[facetapi_slider][download][type] = "git" 
projects[facetapi_slider][download][revision] = "99b57fc670f6a5ca9dfcfaaa57acb6db93765b70"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"
projects[features][download][type] = "git" 

projects[field_collection] = 1.x-dev
projects[field_collection][subdir] = "contrib"
projects[field_collection][download][type] = "git" 
projects[field_collection][download][revision] = "1b68602571a43642e01f0182288355177c99cbf3"

projects[field_group][version] = "1.x-dev"
projects[field_group][subdir] = "contrib"
projects[field_group][download][type] = "git" 
projects[field_group][download][revision] = "09f351080692305bd3447d61d0b18d021f0a72fb"

projects[filefield_sources][version] = 1.6
projects[filefield_sources][subdir] = "contrib"
projects[filefield_sources][download][type] = "git" 

projects[fivestar][version] = "2.0-alpha2"
projects[fivestar][subdir] = "contrib"
projects[fivestar][download][type] = "git" 

projects[flag][version] = "2.0-beta8"
projects[flag][subdir] = "contrib"
projects[flag][download][type] = "git" 

projects[flexslider][version] = "1.0-rc3"
projects[flexslider][subdir] = "contrib"
projects[flexslider][download][type] = "git" 
; see libraries for flexslider

projects[kaltura][version] = "2.0"
projects[kaltura][subdir] = "contrib"
projects[kaltura][download][type] = "git" 

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][download][type] = "git" 

projects[libraries][version] = "1.0"
projects[libraries][subdir] = "contrib"
projects[libraries][download][type] = "git" 

projects[masquerade][version] = "1.0-rc4"
projects[masquerade][subdir] = "contrib"
projects[masquerade][download][type] = "git" 

projects[og][version] = "1.5"
projects[og][subdir] = "contrib"
projects[og][download][type] = "git" 

projects[og_create_perms][version] = "1.0"
projects[og_create_perms][subdir] = "contrib"
projects[og_create_perms][download][type] = "git" 

projects[og_views][version] = "1.0"
projects[og_views][subdir] = "contrib"
projects[og_views][download][type] = "git" 

projects[nice_menus][version] = "2.1"
projects[nice_menus][subdir] = "contrib"
projects[nice_menus][download][type] = "git" 

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"
projects[pathauto][download][type] = "git" 

projects[profile2][version] = "1.2"
projects[profile2][subdir] = "contrib"
projects[profile2][download][type] = "git" 

projects[purl][version] = "1.0-beta1"
projects[purl][subdir] = "contrib"
projects[purl][download][type] = "git" 

projects[realname][version] = "1.0"
projects[realname][subdir] = "contrib"
projects[realname][download][type] = "git" 

projects[rules][version] = "2.1"
projects[rules][subdir] = "contrib"
projects[rules][download][type] = "git" 

projects[shib_auth][version] = "4.0"
projects[shib_auth][subdir] = "contrib"
projects[shib_auth][download][type] = "git" 

projects[spaces][version] = "3.x-dev"
projects[spaces][subdir] = "contrib"
projects[spaces][download][type] = "git" 
projects[spaces][download][revision] = "eac3a7ed7cda08edf80d3946dfa55bcc9dec1ca7"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"
projects[strongarm][download][type] = "git" 

projects[subform][version] = "1.0-alpha1"
projects[subform][subdir] = "contrib"
projects[subform][download][type] = "git" 

projects[token][version] = "1.4"
projects[token][subdir] = "contrib"
projects[token][download][type] = "git" 

projects[views][version] = "3.3"
projects[views][subdir] = "contrib"
projects[views][download][type] = "git" 

projects[views_bulk_operations][version] = "3.0-beta3"
projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][download][type] = "git" 

projects[views_slideshow][version] = "3.0"
projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][download][type] = "git" 
; see libraries for jquery.cycle

projects[views_datasource][version] = "1.x-dev"
projects[views_datasource][subdir] = "contrib"
projects[views_datasource][download][type] = "git" 
projects[views_datasource][download][revision] = "f6faa7cde45ae56b86ce31c49c4aa71225e3c436"

projects[views_data_export][version] = "3.0-beta6"
projects[views_data_export][subdir] = "contrib"
projects[views_data_export][download][type] = "git" 

projects[votingapi][version] = "2.6"
projects[votingapi][subdir] = "contrib"
projects[votingapi][download][type] = "git" 

; CONTRIB THEMES
projects[omega][version] = "3.1"

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

; PATCHES
;projects[kaltura][patch][] = "https://raw.github.com/pinedrop/mediabase/master/patches/kaltura-dev-patch-20120615.patch"
projects[spaces][patch][] = "https://raw.github.com/pinedrop/mediabase/master/patches/spaces_og_use_a_different_space_type_plugin.patch"

