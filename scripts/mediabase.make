core = 7.x

api = 2
projects[drupal][version] = "7.13"
projects[drupal][type] = core

; CONTRIB MODULES
projects[views_bulk_operations][version] = "3.0-beta3"
projects[views_bulk_operations][subdir] = "contrib"

projects[admin_menu][version] = "3.0-rc3"
projects[admin_menu][subdir] = "contrib"

projects[apachesolr][version] = "1.0-rc3"
projects[apachesolr][subdir] = "contrib"

projects[backup_migrate][version] = "2.4"
projects[backup_migrate][subdir] = "contrib"

projects[context][version] = "3.0-beta3"
projects[context][subdir] = "contrib"

projects[ctools][version] = "1.1"
projects[ctools][subdir] = "contrib"

projects[date][version] = "2.5"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"

projects[diff][version] = "2.0"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.0-rc3"
projects[entity][subdir] = "contrib"

projects[entityreference][version] = "1.0-rc3"
projects[entityreference][subdir] = "contrib"

projects[facetapi][version] = "1.1"
projects[facetapi][subdir] = "contrib"

projects[facetapi_slider][version] = "1.x-dev"
projects[facetapi_slider][subdir] = "contrib"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"

projects[field_collection] = 1.x-dev
projects[field_collection][subdir] = "contrib"

projects[field_group][version] = "1.x-dev"
projects[field_group][subdir] = "contrib"

projects[filefield_sources][version] = 1.4
projects[filefield_sources][subdir] = "contrib"

projects[kaltura][version] = "2.0"
projects[kaltura][subdir] = "contrib"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][subdir] = "contrib"

projects[masquerade][version] = "1.0-rc4"
projects[masquerade][subdir] = "contrib"

projects[og][version] = "1.4"
projects[og][subdir] = "contrib"

projects[og_create_perms][version] = "1.0"
projects[og_create_perms][subdir] = "contrib"

projects[og_views][version] = "1.0"
projects[og_views][subdir] = "contrib"

projects[nice_menus][version] = "2.1"
projects[nice_menus][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[profile2][version] = "1.2"
projects[profile2][subdir] = "contrib"

projects[purl][version] = "1.0-beta1"
projects[purl][subdir] = "contrib"

projects[realname][version] = "1.0"
projects[realname][subdir] = "contrib"

projects[shib_auth][version] = "4.0"
projects[shib_auth][subdir] = "contrib"

projects[spaces][version] = "3.x-dev"
projects[spaces][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[subform][version] = "1.0-alpha1"
projects[subform][subdir] = "contrib"

projects[token][version] = "1.2"
projects[token][subdir] = "contrib"

projects[views][version] = "3.3"
projects[views][subdir] = "contrib"

; ADDED FOR JUNE 15TH LAUNCH
projects[fivestar][version] = "2.0-alpha2"
projects[fivestar][subdir] = "contrib"

projects[libraries][version] = "1.0"
projects[libraries][subdir] = "contrib"

projects[votingapi][version] = "2.6"
projects[votingapi][subdir] = "contrib"

projects[flag][version] = "2.0-beta8"
projects[flag][subdir] = "contrib"

projects[rules][version] = "2.1"
projects[rules][subdir] = "contrib"

projects[views_slideshow][version] = "3.0"
projects[views_slideshow][subdir] = "contrib"
; see libraries for jquery.cycle

projects[flexslider][version] = "1.0-rc3"
projects[flexslider][subdir] = "contrib"
; see libraries for flexslider

; ADDED FOR JULY 27TH LAUNCH
projects[views_datasource][version] = "1.x-dev"
projects[views_datasource][subdir] = "contrib"

projects[views_data_export][version] = "3.0-beta6"
projects[views_data_export][subdir] = "contrib"

projects[apachesolr_views][version] = "1.0-beta1"
projects[apachesolr_views][subdir] = "contrib"

projects[apachesolr_autocomplete][version] = "1.2"
projects[apachesolr_autocomplete][subdir] = "contrib"
projects[apachesolr_autocomplete][patch][] = "http://drupal.org/files/1444038-apachesolr_autocomplete-apachesolr_search-6.patch"

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
; libraries[saxon][download][url] = "https://raw.github.com/pinedrop/transcripts/master/transcripts.xsl"

libraries[jquery.cycle][download][type] = "file"
libraries[jquery.cycle][download][url] = "http://malsup.github.com/jquery.cycle.all.js"                         

libraries[flexslider][download][type] = "file"
libraries[flexslider][download][type] = "git"
libraries[flexslider][download][url] = "git://github.com/woothemes/FlexSlider.git"                         

; PATCHES
; projects[kaltura][patch][] = "https://raw.github.com/pinedrop/mediabase/master/patches/kaltura-dev-patch-20120615.patch"
projects[spaces][patch][] = "https://raw.github.com/pinedrop/mediabase/master/patches/spaces_og_use_a_different_space_type_plugin.patch"

; !!! IMPORTANT!!!! add patches for spaces_og.module and spaces_og.info

