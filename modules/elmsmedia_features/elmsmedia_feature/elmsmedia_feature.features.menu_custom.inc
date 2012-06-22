<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function elmsmedia_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-3rdlevel
  $menus['menu-3rdlevel'] = array(
    'menu_name' => 'menu-3rdlevel',
    'title' => 'Third Menu level',
    'description' => 'Use this for the asset area right under the upload region',
  );
  // Exported menu: menu-sysadmin
  $menus['menu-sysadmin'] = array(
    'menu_name' => 'menu-sysadmin',
    'title' => 'Admin Tasks',
    'description' => 'Tasks for system admins',
  );
  // Exported menu: primary-links
  $menus['primary-links'] = array(
    'menu_name' => 'primary-links',
    'title' => 'Primary links',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Exported menu: secondary-links
  $menus['secondary-links'] = array(
    'menu_name' => 'secondary-links',
    'title' => 'Secondary links',
    'description' => 'Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Tasks');
  t('Primary links');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('Secondary links');
  t('Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links');
  t('Tasks for system admins');
  t('Third Menu level');
  t('Use this for the asset area right under the upload region');


  return $menus;
}
