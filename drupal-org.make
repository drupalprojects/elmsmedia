; ELMS Media make file
core = 6.x
api = 2

; Modules
projects[views_bulk_operations][version] = "1.13"
projects[views_bulk_operations][subdir] = "contrib"

projects[admin][version] = "2.0"
projects[admin][subdir] = "contrib"

projects[adminrole][version] = "1.3"
projects[adminrole][subdir] = "contrib"

projects[advanced_help][version] = "1.2"
projects[advanced_help][subdir] = "contrib"

projects[auto_nodetitle][version] = "1.2"
projects[auto_nodetitle][subdir] = "contrib"

projects[hacked][version] = "2.0-beta8"
projects[hacked][subdir] = "contrib"

projects[coder][version] = "2.0-rc1"
projects[coder][subdir] = "contrib"

projects[backup_migrate][version] = "2.6"
projects[backup_migrate][subdir] = "contrib"

projects[better_formats][version] = "1.2"
projects[better_formats][subdir] = "contrib"

projects[calendar][version] = "2.4"
projects[calendar][subdir] = "contrib"

projects[colorpicker][version] = "2.1"
projects[colorpicker][subdir] = "contrib"

projects[util][version] = "3.0"
projects[util][subdir] = "contrib"

projects[conditional_fields][version] = "2.0"
projects[conditional_fields][subdir] = "contrib"

projects[context][version] = "3.x-dev"
projects[context][subdir] = "contrib"

projects[ctools][version] = "1.8"
projects[ctools][subdir] = "contrib"

projects[cck][version] = "2.9"
projects[cck][subdir] = "contrib"

projects[date][version] = "2.9"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.27"
projects[devel][subdir] = "contrib"

projects[dhtml_menu][version] = "3.5"
projects[dhtml_menu][subdir] = "contrib"

projects[diff][version] = "2.3"
projects[diff][subdir] = "contrib"

projects[emfield][version] = "1.26"
projects[emfield][subdir] = "contrib"

projects[features][version] = "1.2"
projects[features][subdir] = "contrib"

projects[filefield][version] = "3.10"
projects[filefield][subdir] = "contrib"

projects[filefield_paths][version] = "1.4"
projects[filefield_paths][subdir] = "contrib"

projects[flag][version] = "2.0-beta6"
projects[flag][subdir] = "contrib"

projects[hover_preview][version] = "1.0"
projects[hover_preview][subdir] = "contrib"

projects[iconizer][version] = "1.3"
projects[iconizer][subdir] = "contrib"

projects[imageapi][version] = "1.10"
projects[imageapi][subdir] = "contrib"

projects[imagecache][version] = "2.0-rc1"
projects[imagecache][subdir] = "contrib"

projects[imagecache_actions][version] = "1.8"
projects[imagecache_actions][subdir] = "contrib"

projects[imagecache_scale9actions][version] = "1.02"
projects[imagecache_scale9actions][subdir] = "contrib"

projects[imagefield][version] = "3.10"
projects[imagefield][subdir] = "contrib"

projects[jammer][version] = "1.7"
projects[jammer][subdir] = "contrib"

projects[jquery_ui][version] = "1.5"
projects[jquery_ui][subdir] = "contrib"

projects[jquery_update][version] = "2.0-alpha1"
projects[jquery_update][subdir] = "contrib"

projects[jwplayermodule][version] = "1.7"
projects[jwplayermodule][subdir] = "contrib"

projects[lightbox2][version] = "1.11"
projects[lightbox2][subdir] = "contrib"

projects[masquerade][version] = "1.7"
projects[masquerade][subdir] = "contrib"

projects[media_webcam][version] = "1.0-beta2"
projects[media_webcam][subdir] = "contrib"

projects[module_filter][version] = "1.7"
projects[module_filter][subdir] = "contrib"

projects[nodeformcols][version] = "1.6"
projects[nodeformcols][subdir] = "contrib"

projects[pathauto][version] = "1.6"
projects[pathauto][subdir] = "contrib"

projects[protect_critical_users][version] = "1.1"
projects[protect_critical_users][subdir] = "contrib"

projects[realname][version] = "1.5"
projects[realname][subdir] = "contrib"

projects[stringoverrides][version] = "1.8"
projects[stringoverrides][subdir] = "contrib"

projects[strongarm][version] = "2.2"
projects[strongarm][subdir] = "contrib"

projects[subscriptions][version] = "1.5"
projects[subscriptions][subdir] = "contrib"

projects[themekey][version] = "3.6"
projects[themekey][subdir] = "contrib"

projects[token][version] = "1.18"
projects[token][subdir] = "contrib"

projects[vertical_tabs][version] = "1.0-rc2"
projects[vertical_tabs][subdir] = "contrib"

projects[views][version] = "2.16"
projects[views][subdir] = "contrib"

projects[views_bonus][version] = "1.1"
projects[views_bonus][subdir] = "contrib"

projects[views_calc][version] = "1.3"
projects[views_calc][subdir] = "contrib"

projects[libraries][version] = "1.0"
projects[libraries][subdir] = "contrib"

projects[views_fluid_grid][version] = "1.1"
projects[views_fluid_grid][subdir] = "contrib"

projects[wysiwyg][version] = "2.4"
projects[wysiwyg][subdir] = "contrib"

projects[wysiwyg_template][version] = "2.6"
projects[wysiwyg_template][subdir] = "contrib"

; Themes
projects[rubik][version] = "3.0-beta3"
projects[rubik][subdir] = "contrib"

projects[tao][version] = "3.3"
projects[tao][subdir] = "contrib"

projects[sky][version] = "3.11"
projects[sky][subdir] = "contrib"

; Libraries
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"

libraries[jquery.ui][download][type] = "get"
libraries[jquery.ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery.ui-1.6.zip"
libraries[jquery.ui][directory_name] = "jquery.ui"
libraries[jquery.ui][type] = "library"
libraries[jquery.ui][destination] = "libraries"

; Patches
projects[context][patch][] = "http://drupal.org/files/issues/context-expose-weights.patch"