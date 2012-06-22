<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function elmsmedia_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-3rdlevel:node/add/document
  $menu_links['menu-3rdlevel:node/add/document'] = array(
    'menu_name' => 'menu-3rdlevel',
    'link_path' => 'node/add/document',
    'router_path' => 'node/add/document',
    'link_title' => 'Add Document',
    'options' => array(
      'attributes' => array(
        'title' => 'Upload a document to the system',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-3rdlevel:node/add/external-video
  $menu_links['menu-3rdlevel:node/add/external-video'] = array(
    'menu_name' => 'menu-3rdlevel',
    'link_path' => 'node/add/external-video',
    'router_path' => 'node/add/external-video',
    'link_title' => 'Add External Video',
    'options' => array(
      'attributes' => array(
        'title' => 'Use this for making use of external video sources like YouTube and Vimeo',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-3rdlevel:node/add/image-gallery
  $menu_links['menu-3rdlevel:node/add/image-gallery'] = array(
    'menu_name' => 'menu-3rdlevel',
    'link_path' => 'node/add/image-gallery',
    'router_path' => 'node/add/image-gallery',
    'link_title' => 'Create Image Gallery',
    'options' => array(
      'attributes' => array(
        'title' => 'Build an image gallery out of image assets',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-3rdlevel:node/add/image-treatment
  $menu_links['menu-3rdlevel:node/add/image-treatment'] = array(
    'menu_name' => 'menu-3rdlevel',
    'link_path' => 'node/add/image-treatment',
    'router_path' => 'node/add/image-treatment',
    'link_title' => 'Add Image Treatment',
    'options' => array(
      'attributes' => array(
        'title' => 'Use this to create new treatments for rendering images',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-3rdlevel:node/add/media-request-form
  $menu_links['menu-3rdlevel:node/add/media-request-form'] = array(
    'menu_name' => 'menu-3rdlevel',
    'link_path' => 'node/add/media-request-form',
    'router_path' => 'node/add/media-request-form',
    'link_title' => 'Create Media Request',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a media request in the system',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-3rdlevel:node/add/playlist
  $menu_links['menu-3rdlevel:node/add/playlist'] = array(
    'menu_name' => 'menu-3rdlevel',
    'link_path' => 'node/add/playlist',
    'router_path' => 'node/add/playlist',
    'link_title' => 'Create Media Playlist',
    'options' => array(
      'attributes' => array(
        'title' => 'Make a new playlist based on video and audio assets',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-sysadmin:admin/content/taxonomy/1
  $menu_links['menu-sysadmin:admin/content/taxonomy/1'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'admin/content/taxonomy/1',
    'router_path' => 'admin/content/taxonomy/%',
    'link_title' => 'Change course list',
    'options' => array(
      'attributes' => array(
        'title' => 'List of courses that media can be associated to',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-sysadmin:asset_trackbacks
  $menu_links['menu-sysadmin:asset_trackbacks'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'asset_trackbacks',
    'router_path' => 'asset_trackbacks',
    'link_title' => 'Asset Trackbacks',
    'options' => array(
      'attributes' => array(
        'title' => 'Search through trackbacks',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-sysadmin:assetlist
  $menu_links['menu-sysadmin:assetlist'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'assetlist',
    'router_path' => 'assetlist',
    'link_title' => 'Video Asset List File',
    'options' => array(
      'attributes' => array(
        'title' => 'This will download the list of all Video assets in the system',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-sysadmin:course_asset_audit
  $menu_links['menu-sysadmin:course_asset_audit'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'course_asset_audit',
    'router_path' => 'course_asset_audit',
    'link_title' => 'Asset Audit',
    'options' => array(
      'attributes' => array(
        'title' => 'An audit of all assets by course',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-sysadmin:login
  $menu_links['menu-sysadmin:login'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'login',
    'router_path' => 'login',
    'link_title' => 'login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-sysadmin:login/cosign
  $menu_links['menu-sysadmin:login/cosign'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'login/cosign',
    'router_path' => 'login/cosign',
    'link_title' => '',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
  );
  // Exported menu link: menu-sysadmin:logout
  $menu_links['menu-sysadmin:logout'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-sysadmin:missing_citations
  $menu_links['menu-sysadmin:missing_citations'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'missing_citations',
    'router_path' => 'missing_citations',
    'link_title' => 'Citation Listing',
    'options' => array(
      'attributes' => array(
        'title' => 'Use this to help complete citations',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-sysadmin:reboot_fmis
  $menu_links['menu-sysadmin:reboot_fmis'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'reboot_fmis',
    'router_path' => 'reboot_fmis',
    'link_title' => 'Reboot FMIS',
    'options' => array(
      'attributes' => array(
        'title' => 'Reboot the Flash Media Interactive Server',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: menu-sysadmin:transcription_workflow
  $menu_links['menu-sysadmin:transcription_workflow'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'transcription_workflow',
    'router_path' => 'transcription_workflow',
    'link_title' => 'Transcription Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Workflow for processing transcription files',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-sysadmin:user
  $menu_links['menu-sysadmin:user'] = array(
    'menu_name' => 'menu-sysadmin',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Profile',
    'options' => array(
      'attributes' => array(
        'title' => 'User profile',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: primary-links:node/add/audio
  $menu_links['primary-links:node/add/audio'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/audio',
    'router_path' => 'node/add/audio',
    'link_title' => 'Audio',
    'options' => array(
      'attributes' => array(
        'title' => 'Add Audio asset for streaming on the server',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:node/add/flash
  $menu_links['primary-links:node/add/flash'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/flash',
    'router_path' => 'node/add/flash',
    'link_title' => 'Flash',
    'options' => array(
      'attributes' => array(
        'title' => 'Use this for embedding flash',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: primary-links:node/add/image
  $menu_links['primary-links:node/add/image'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/image',
    'router_path' => 'node/add/image',
    'link_title' => 'Image',
    'options' => array(
      'attributes' => array(
        'title' => 'Add Image Asset for embedding in courses',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: primary-links:node/add/video
  $menu_links['primary-links:node/add/video'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/video',
    'router_path' => 'node/add/video',
    'link_title' => 'Video',
    'options' => array(
      'attributes' => array(
        'title' => 'Add video of different bit-rates for streaming',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: primary-links:node/add/webcam
  $menu_links['primary-links:node/add/webcam'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/webcam',
    'router_path' => 'node/add/webcam',
    'link_title' => 'Webcam',
    'options' => array(
      'attributes' => array(
        'title' => 'Record video from your webcam',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: secondary-links:mediarequests
  $menu_links['secondary-links:mediarequests'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'mediarequests',
    'router_path' => 'mediarequests',
    'link_title' => 'Search Media Requests',
    'options' => array(
      'attributes' => array(
        'title' => 'Search Media Requests',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: secondary-links:searchassets
  $menu_links['secondary-links:searchassets'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'searchassets',
    'router_path' => 'searchassets',
    'link_title' => 'Search Assets',
    'options' => array(
      'attributes' => array(
        'title' => 'Search media assets',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Document');
  t('Add External Video');
  t('Add Image Treatment');
  t('Asset Audit');
  t('Asset Trackbacks');
  t('Audio');
  t('Change course list');
  t('Citation Listing');
  t('Create Image Gallery');
  t('Create Media Playlist');
  t('Create Media Request');
  t('Flash');
  t('Image');
  t('Profile');
  t('Reboot FMIS');
  t('Search Assets');
  t('Search Media Requests');
  t('Transcription Workflow');
  t('Video');
  t('Video Asset List File');
  t('Webcam');
  t('login');
  t('logout');


  return $menu_links;
}
