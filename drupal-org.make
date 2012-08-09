; ELMS Media make file
core = 7.x
api = 2
; Based on Ulmus starting point
; OG/features/context/spaces core and associated projects
projects[context][version] = "3.0-beta3"
projects[context][subdir] = "contrib"
projects[context_og][version] = "2.x-dev"
projects[context_og][subdir] = "contrib"
projects[features][version] = "1.0"
projects[features][subdir] = "contrib"
projects[og][version] = "2.0-beta1"
projects[og][subdir] = "contrib"
projects[og_views][version] = "1.0"
projects[og_views][subdir] = "contrib"
projects[og_theme][version] = "2.0"
projects[og_theme][subdir] = "contrib"
projects[og_extras][version] = "1.1"
projects[og_extras][subdir] = "contrib"
projects[views][version] = "3.3"
projects[views][subdir] = "contrib"

; Development best practices / addition required modules
projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"
projects[profiler_builder][version] = "1.x-dev"
projects[profiler_builder][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc3"
projects[admin_menu][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.0-rc1"
projects[views_bulk_operations][subdir] = "contrib"
projects[backup_migrate][version] = "2.4"
projects[backup_migrate][subdir] = "contrib"
projects[advanced_help][version] = "1.0"
projects[advanced_help][subdir] = "contrib"
projects[ctools][version] = "1.x-dev"
projects[ctools][subdir] = "contrib"
projects[entity][version] = "1.0-rc3"
projects[entity][subdir] = "contrib"
projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][subdir] = "contrib"
projects[jquery_update][version] = "2.2"
projects[jquery_update][subdir] = "contrib"
projects[libraries][version] = "2.x-dev"
projects[libraries][subdir] = "contrib"
projects[masquerade][version] = "1.0-rc4"
projects[masquerade][subdir] = "contrib"
projects[module_filter][version] = "1.7"
projects[module_filter][subdir] = "contrib"
projects[pathauto][version] = "1.1"
projects[pathauto][subdir] = "contrib"
projects[stringoverrides][version] = "1.8"
projects[stringoverrides][subdir] = "contrib"
projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"
projects[prepopulate][version] = "2.x-dev"
projects[prepopulate][subdir] = "contrib"
projects[requirement_dashboard][version] = "1.2"
projects[requirement_dashboard][subdir] = "contrib"
projects[token][version] = "1.1"
projects[token][subdir] = "contrib"
projects[entityreference_prepopulate][version] = "1.0"
projects[entityreference_prepopulate][subdir] = "contrib"

; UX projects to refine and manage UX above drupal
projects[omega_tools][version] = "3.0-rc4"
projects[omega_tools][subdir] = "contrib"
projects[delta][version] = "3.0-beta11"
projects[delta][subdir] = "contrib"
projects[wysiwyg][version] = "2.1"
projects[wysiwyg][subdir] = "contrib"

; Field / Common content enablers for content types / entities
projects[field_group][version] = "1.1"
projects[field_group][subdir] = "contrib"
projects[autocomplete_widgets][version] = "1.0-beta2"
projects[autocomplete_widgets][subdir] = "contrib"
projects[date][version] = "2.5"
projects[date][subdir] = "contrib"
projects[link][version] = "1.0"
projects[link][subdir] = "contrib"
projects[entityreference][version] = "1.0-rc3"
projects[entityreference][subdir] = "contrib"
projects[nodereference_url][version] = "1.12"
projects[nodereference_url][subdir] = "contrib"
projects[options_element][version] = "1.7"
projects[options_element][subdir] = "contrib"
projects[filefield_paths][version] = "1.0-beta3"
projects[filefield_paths][subdir] = "contrib"

; Data migration helpers for getting information in
projects[uuid][version] = "1.x-dev"
projects[uuid][subdir] = "contrib"

; Themes
projects[rubik][version] = "4.0-beta8"
projects[rubik][type] = "theme"
projects[rubik][subdir] = "contrib"

projects[tao][version] = "3.0-beta4"
projects[tao][type] = "theme"
projects[tao][subdir] = "contrib"

projects[omega][version] = "3.1"
projects[omega][type] = "theme"
projects[omega][subdir] = "contrib"

; Libraries
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"