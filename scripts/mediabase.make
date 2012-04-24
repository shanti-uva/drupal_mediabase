core = 7.x

api = 2
projects[drupal][version] = "7.12"
projects[drupal][type] = core

; CONTRIB MODULES
projects[views_bulk_operations][version] = "3.0-beta3"
projects[views_bulk_operations][subdir] = "contrib"

projects[admin_menu][version] = "3.0-rc1"
projects[admin_menu][subdir] = "contrib"

projects[apachesolr][version] = "1.0-beta16"
projects[apachesolr][subdir] = "contrib"

projects[backup_migrate][version] = "2.2"
projects[backup_migrate][subdir] = "contrib"

projects[ctools][version] = "1.x-dev"
projects[ctools][subdir] = "contrib"

projects[context][version] = "3.0-beta2"
projects[context][subdir] = "contrib"

projects[facetapi][version] = "1.0-rc2"
projects[facetapi][subdir] = "contrib"

projects[date][version] = "2.0-alpha4"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.2"
projects[devel][subdir] = "contrib"

projects[diff][version] = "2.0"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.x-dev"
projects[entity][subdir] = "contrib"

projects[entityreference][version] = "1.0-beta4"
projects[entityreference][subdir] = "contrib"

projects[facetapi_slider][version] = "1.x-dev"
projects[facetapi_slider][subdir] = "contrib"

projects[features][version] = "1.x-dev"
projects[features][subdir] = "contrib"

projects[field_collection] = 1.x-dev
projects[field_collection][subdir] = "contrib"

projects[field_group][version] = "1.x-dev"
projects[field_group][subdir] = "contrib"

projects[filefield_sources][version] = 1.4
projects[filefield_sources][subdir] = "contrib"

projects[kaltura][version] = "2.x-dev"
projects[kaltura][subdir] = "contrib"

projects[job_scheduler][version] = "2.0-alpha2"
projects[job_scheduler][subdir] = "contrib"

projects[masquerade][version] = "1.0-rc4"
projects[masquerade][subdir] = "contrib"

projects[og][version] = "1.3"
projects[og][subdir] = "contrib"

projects[og_create_perms][version] = "1.0"
projects[og_create_perms][subdir] = "contrib"

projects[og_views][version] = "1.0"
projects[og_views][subdir] = "contrib"

projects[pathauto][version] = "1.0"
projects[pathauto][subdir] = "contrib"

projects[profile2][version] = "1.2"
projects[profile2][subdir] = "contrib"

projects[purl][version] = "1.0-beta1"
projects[purl][subdir] = "contrib"

projects[realname][version] = "1.0-rc2"
projects[realname][subdir] = "contrib"

projects[shib_auth][version] = "4.0"
projects[shib_auth][subdir] = "contrib"

projects[spaces][version] = "3.x-dev"
projects[spaces][subdir] = "contrib"

projects[strongarm][version] = "2.0-beta4"
projects[strongarm][subdir] = "contrib"

projects[subform][version] = "1.0-alpha1"
projects[subform][subdir] = "contrib"

projects[token][version] = "1.0-beta7"
projects[token][subdir] = "contrib"

projects[views][version] = "3.2"
projects[views][subdir] = "contrib"

; CONTRIB THEMES
projects[omega][version] = "3.0"

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
libraries[saxon][download][url] = "http://superb-sea2.dl.sourceforge.net/project/saxon/Saxon-HE/9.4/SaxonHE9-4-0-3J.zip"

; PATCHES
projects[kaltura][patch][] = "http://drupal.org/files/kaltura-fix_for_some_field_settings_props-1538978-2.patch"
