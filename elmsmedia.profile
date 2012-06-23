<?php

/**
 * Return an array of the modules to be enabled when this profile is installed.
 *
 * @return
 *   An array of modules to enable.
 */
function elmsmedia_profile_modules() {
  $elmsmedia = array(
    'masquerade',
    'advanced_help',
    'backup_migrate',
    'dhtml_menu',
    'diff',
    'elmsmedia',
    'iconizer',
    'lightbox2',
    'realname',
    'stringoverrides',
    'pathauto',
    'auto_nodetitle',
    'token',
    'better_formats',
    'block',
    'filter',
    'node',
    'system',
    'user',
    'dblog',
    'help',
    'menu',
    'path',
    'php',
    'profile',
    'taxonomy',
    'trigger',
    'update',
    'adminrole',
    'module_filter',
    'protect_critical_users',
    'admin',
    'jcalendar',
    'date',
    'date_api',
    'date_popup',
    'date_timezone',
    'date_tools',
    'calendar',
    'content',
    'nodereference',
    'number',
    'optionwidgets',
    'text',
    'userreference',
    'colorpicker_cck',
    'emvideo',
    'emfield',
    'filefield',
    'imagefield',
    'fieldgroup',
    'conditional_fields',
    'devel',
    'colorpicker',
    'elmsmedia_feature',
    'features',
    'elmsmedia',
    'elms_styles',
    'elms_media_helper',
    'jwplayermodule',
    'media_webcam',
    'filefield_paths',
    'flag',
    'flag_actions',
    'hover_preview',
    'imageapi',
    'imageapi_gd',
    'imagecache',
    'imagecache_ui',
    'imagecache_autorotate',
    'imagecache_canvasactions',
    'imagecache_coloractions',
    'imagecache_customactions',
    'imagecache_textactions',
    'imagecache_scale9actions',
    'jammer',
    'jammer_feed_icon',
    'wysiwyg',
    'wysiwyg_template',
    'jquery_update',
    'vertical_tabs',
    'subscriptions',
    'subscriptions_mail',
    'subscriptions_taxonomy',
    'subscriptions_ui',
    'subscriptions_content',
    'themekey',
    'themekey_ui',
    'module_weights',
    'util',
    'views_ui',
    'views_bonus_export',
    'views_bulk_operations',
    'views_calc',
    'views_fluid_grid',
    'views',
    'nodeformcols',
  );
  return $elmsmedia;
}

/**
 * Return a description of the profile for the initial installation screen.
 *
 * @return
 *   An array with keys 'name' and 'description' describing this profile,
 *   and optional 'language' to override the language selection for
 *   language-specific profiles.
 */
function elmsmedia_profile_details() {
  return array(
    'name' => 'ELMS Media',
    'description' => 'Install the award winning ELMS Media asset management system.'
  );
}

/**
 * Return a list of tasks that this profile supports.
 *
 * @return
 *   A keyed array of tasks the profile will perform during
 *   the final stage. The keys of the array will be used internally,
 *   while the values will be displayed to the user in the installer
 *   task list.
 */
function elmsmedia_profile_task_list() {
}

/**
 * Perform any final installation tasks for this profile.
 *
 * The installer goes through the profile-select -> locale-select
 * -> requirements -> database -> profile-install-batch
 * -> locale-initial-batch -> configure -> locale-remaining-batch
 * -> finished -> done tasks, in this order, if you don't implement
 * this function in your profile.
 *
 * If this function is implemented, you can have any number of
 * custom tasks to perform after 'configure', implementing a state
 * machine here to walk the user through those tasks. First time,
 * this function gets called with $task set to 'profile', and you
 * can advance to further tasks by setting $task to your tasks'
 * identifiers, used as array keys in the hook_profile_task_list()
 * above. You must avoid the reserved tasks listed in
 * install_reserved_tasks(). If you implement your custom tasks,
 * this function will get called in every HTTP request (for form
 * processing, printing your information screens and so on) until
 * you advance to the 'profile-finished' task, with which you
 * hand control back to the installer. Each custom page you
 * return needs to provide a way to continue, such as a form
 * submission or a link. You should also set custom page titles.
 *
 * You should define the list of custom tasks you implement by
 * returning an array of them in hook_profile_task_list(), as these
 * show up in the list of tasks on the installer user interface.
 *
 * Remember that the user will be able to reload the pages multiple
 * times, so you might want to use variable_set() and variable_get()
 * to remember your data and control further processing, if $task
 * is insufficient. Should a profile want to display a form here,
 * it can; the form should set '#redirect' to FALSE, and rely on
 * an action in the submit handler, such as variable_set(), to
 * detect submission and proceed to further tasks. See the configuration
 * form handling code in install_tasks() for an example.
 *
 * Important: Any temporary variables should be removed using
 * variable_del() before advancing to the 'profile-finished' phase.
 *
 * @param $task
 *   The current $task of the install system. When hook_profile_tasks()
 *   is first called, this is 'profile'.
 * @param $url
 *   Complete URL to be used for a link or form action on a custom page,
 *   if providing any, to allow the user to proceed with the installation.
 *
 * @return
 *   An optional HTML string to display to the user. Only used if you
 *   modify the $task, otherwise discarded.
 */
function elmsmedia_profile_tasks(&$task, $url) {
  // set default admin theme
  variable_set('admin_theme', 'rubik');
  // enable default theme
  variable_set('theme_default', 'blackleaf');
  // now its safe to enable jquery_ui
  module_enable(array('jquery_ui'));
  // revert the feature to build out the whole thing
  features_revert(array('elmsmedia_feature' => array('content', 'fieldgroup', 'node', 'views', 'variable', 'permissions')));
  // Update the menu router information.
  menu_rebuild();
}

/**
 * Implementation of hook_form_alter().
 *
 * Allows the profile to alter the site-configuration form. This is
 * called through custom invocation, so $form_state is not populated.
 */
function elmsmedia_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'install_configure') {
    // Set default for site name field.
    $form['site_information']['site_name']['#elmsmedia_value'] = $_SERVER['SERVER_NAME'];
  }
}
