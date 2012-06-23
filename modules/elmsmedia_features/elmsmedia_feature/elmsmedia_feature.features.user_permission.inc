<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function elmsmedia_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: access backup and migrate
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access backup files
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: access devel information
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer backup and migrate
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer conditional fields
  $permissions['administer conditional fields'] = array(
    'name' => 'administer conditional fields',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer date tools
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer flags
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer jwplayermodule
  $permissions['administer jwplayermodule'] = array(
    'name' => 'administer jwplayermodule',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'media staff',
    ),
  );

  // Exported permission: administer lightbox2
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer masquerade
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer module filter
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer string overrides
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer theme assignments
  $permissions['administer theme assignments'] = array(
    'name' => 'administer theme assignments',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer themekey settings
  $permissions['administer themekey settings'] = array(
    'name' => 'administer themekey settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer user subscriptions
  $permissions['administer user subscriptions'] = array(
    'name' => 'administer user subscriptions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer views calc
  $permissions['administer views calc'] = array(
    'name' => 'administer views calc',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: assign node themes
  $permissions['assign node themes'] = array(
    'name' => 'assign node themes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: assign path alias themes
  $permissions['assign path alias themes'] = array(
    'name' => 'assign path alias themes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: assign theme to own nodes
  $permissions['assign theme to own nodes'] = array(
    'name' => 'assign theme to own nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: bulk-administer user subscriptions
  $permissions['bulk-administer user subscriptions'] = array(
    'name' => 'bulk-administer user subscriptions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: collapse format fieldset by default
  $permissions['collapse format fieldset by default'] = array(
    'name' => 'collapse format fieldset by default',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: collapsible format selection
  $permissions['collapsible format selection'] = array(
    'name' => 'collapsible format selection',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create archived_media content
  $permissions['create archived_media content'] = array(
    'name' => 'create archived_media content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: create audio content
  $permissions['create audio content'] = array(
    'name' => 'create audio content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: create document content
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: create external_video content
  $permissions['create external_video content'] = array(
    'name' => 'create external_video content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: create flash content
  $permissions['create flash content'] = array(
    'name' => 'create flash content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: create image content
  $permissions['create image content'] = array(
    'name' => 'create image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: create image_gallery content
  $permissions['create image_gallery content'] = array(
    'name' => 'create image_gallery content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: create image_treatment content
  $permissions['create image_treatment content'] = array(
    'name' => 'create image_treatment content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: create playlist content
  $permissions['create playlist content'] = array(
    'name' => 'create playlist content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: create video content
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: create views calc
  $permissions['create views calc'] = array(
    'name' => 'create views calc',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: create webcam content
  $permissions['create webcam content'] = array(
    'name' => 'create webcam content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
    ),
  );

  // Exported permission: delete any archived_media content
  $permissions['delete any archived_media content'] = array(
    'name' => 'delete any archived_media content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any audio content
  $permissions['delete any audio content'] = array(
    'name' => 'delete any audio content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any document content
  $permissions['delete any document content'] = array(
    'name' => 'delete any document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any external_video content
  $permissions['delete any external_video content'] = array(
    'name' => 'delete any external_video content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any flash content
  $permissions['delete any flash content'] = array(
    'name' => 'delete any flash content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any image content
  $permissions['delete any image content'] = array(
    'name' => 'delete any image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any image_gallery content
  $permissions['delete any image_gallery content'] = array(
    'name' => 'delete any image_gallery content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any image_treatment content
  $permissions['delete any image_treatment content'] = array(
    'name' => 'delete any image_treatment content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any playlist content
  $permissions['delete any playlist content'] = array(
    'name' => 'delete any playlist content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any video content
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'media staff',
    ),
  );

  // Exported permission: delete any webcam content
  $permissions['delete any webcam content'] = array(
    'name' => 'delete any webcam content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete backup files
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own archived_media content
  $permissions['delete own archived_media content'] = array(
    'name' => 'delete own archived_media content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete own audio content
  $permissions['delete own audio content'] = array(
    'name' => 'delete own audio content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: delete own document content
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: delete own external_video content
  $permissions['delete own external_video content'] = array(
    'name' => 'delete own external_video content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: delete own flash content
  $permissions['delete own flash content'] = array(
    'name' => 'delete own flash content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: delete own image content
  $permissions['delete own image content'] = array(
    'name' => 'delete own image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: delete own image_gallery content
  $permissions['delete own image_gallery content'] = array(
    'name' => 'delete own image_gallery content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: delete own image_treatment content
  $permissions['delete own image_treatment content'] = array(
    'name' => 'delete own image_treatment content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: delete own playlist content
  $permissions['delete own playlist content'] = array(
    'name' => 'delete own playlist content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: delete own video content
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: delete own webcam content
  $permissions['delete own webcam content'] = array(
    'name' => 'delete own webcam content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: display iconizer links
  $permissions['display iconizer links'] = array(
    'name' => 'display iconizer links',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: display source code
  $permissions['display source code'] = array(
    'name' => 'display source code',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: download original image
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: edit any archived_media content
  $permissions['edit any archived_media content'] = array(
    'name' => 'edit any archived_media content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any audio content
  $permissions['edit any audio content'] = array(
    'name' => 'edit any audio content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: edit any document content
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: edit any external_video content
  $permissions['edit any external_video content'] = array(
    'name' => 'edit any external_video content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: edit any flash content
  $permissions['edit any flash content'] = array(
    'name' => 'edit any flash content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: edit any image content
  $permissions['edit any image content'] = array(
    'name' => 'edit any image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: edit any image_gallery content
  $permissions['edit any image_gallery content'] = array(
    'name' => 'edit any image_gallery content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: edit any image_treatment content
  $permissions['edit any image_treatment content'] = array(
    'name' => 'edit any image_treatment content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: edit any playlist content
  $permissions['edit any playlist content'] = array(
    'name' => 'edit any playlist content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: edit any video content
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: edit any webcam content
  $permissions['edit any webcam content'] = array(
    'name' => 'edit any webcam content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
    ),
  );

  // Exported permission: edit own archived_media content
  $permissions['edit own archived_media content'] = array(
    'name' => 'edit own archived_media content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit own audio content
  $permissions['edit own audio content'] = array(
    'name' => 'edit own audio content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: edit own document content
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: edit own external_video content
  $permissions['edit own external_video content'] = array(
    'name' => 'edit own external_video content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: edit own flash content
  $permissions['edit own flash content'] = array(
    'name' => 'edit own flash content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: edit own image content
  $permissions['edit own image content'] = array(
    'name' => 'edit own image content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: edit own image_gallery content
  $permissions['edit own image_gallery content'] = array(
    'name' => 'edit own image_gallery content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: edit own image_treatment content
  $permissions['edit own image_treatment content'] = array(
    'name' => 'edit own image_treatment content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: edit own playlist content
  $permissions['edit own playlist content'] = array(
    'name' => 'edit own playlist content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: edit own video content
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: edit own webcam content
  $permissions['edit own webcam content'] = array(
    'name' => 'edit own webcam content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
    ),
  );

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: manage iconizer settings
  $permissions['manage iconizer settings'] = array(
    'name' => 'manage iconizer settings',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: masquerade as admin
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: masquerade as user
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: perform backup
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: restore from backup
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: show format selection for blocks
  $permissions['show format selection for blocks'] = array(
    'name' => 'show format selection for blocks',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format selection for comments
  $permissions['show format selection for comments'] = array(
    'name' => 'show format selection for comments',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format selection for nodes
  $permissions['show format selection for nodes'] = array(
    'name' => 'show format selection for nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: subscribe to all content types
  $permissions['subscribe to all content types'] = array(
    'name' => 'subscribe to all content types',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: subscribe to content
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: subscribe to content types
  $permissions['subscribe to content types'] = array(
    'name' => 'subscribe to content types',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: subscribe to taxonomy terms
  $permissions['subscribe to taxonomy terms'] = array(
    'name' => 'subscribe to taxonomy terms',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: suspend own subscriptions
  $permissions['suspend own subscriptions'] = array(
    'name' => 'suspend own subscriptions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: use PHP for title patterns
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use realname
  $permissions['use realname'] = array(
    'name' => 'use realname',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: view author options
  $permissions['view author options'] = array(
    'name' => 'view author options',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view body options
  $permissions['view body options'] = array(
    'name' => 'view body options',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view code review
  $permissions['view code review'] = array(
    'name' => 'view code review',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view code review all
  $permissions['view code review all'] = array(
    'name' => 'view code review all',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view comment preview button
  $permissions['view comment preview button'] = array(
    'name' => 'view comment preview button',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: view comment settings
  $permissions['view comment settings'] = array(
    'name' => 'view comment settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view delete button
  $permissions['view delete button'] = array(
    'name' => 'view delete button',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view diffs of changed files
  $permissions['view diffs of changed files'] = array(
    'name' => 'view diffs of changed files',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache basic
  $permissions['view imagecache basic'] = array(
    'name' => 'view imagecache basic',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: view imagecache citation
  $permissions['view imagecache citation'] = array(
    'name' => 'view imagecache citation',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache elms_column
  $permissions['view imagecache elms_column'] = array(
    'name' => 'view imagecache elms_column',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache elmsmedia_artistartwork
  $permissions['view imagecache elmsmedia_artistartwork'] = array(
    'name' => 'view imagecache elmsmedia_artistartwork',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: view imagecache elmsmedia_artistbigartwork
  $permissions['view imagecache elmsmedia_artistbigartwork'] = array(
    'name' => 'view imagecache elmsmedia_artistbigartwork',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: view imagecache elmsmedia_basic
  $permissions['view imagecache elmsmedia_basic'] = array(
    'name' => 'view imagecache elmsmedia_basic',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: view imagecache elmsmedia_fancyslide
  $permissions['view imagecache elmsmedia_fancyslide'] = array(
    'name' => 'view imagecache elmsmedia_fancyslide',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: view imagecache elmsmedia_galleria
  $permissions['view imagecache elmsmedia_galleria'] = array(
    'name' => 'view imagecache elmsmedia_galleria',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: view imagecache esg_t1
  $permissions['view imagecache esg_t1'] = array(
    'name' => 'view imagecache esg_t1',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache esg_t2
  $permissions['view imagecache esg_t2'] = array(
    'name' => 'view imagecache esg_t2',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache none
  $permissions['view imagecache none'] = array(
    'name' => 'view imagecache none',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: view imagecache playerthumb
  $permissions['view imagecache playerthumb'] = array(
    'name' => 'view imagecache playerthumb',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'media staff',
    ),
  );

  // Exported permission: view menu options
  $permissions['view menu options'] = array(
    'name' => 'view menu options',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view path options
  $permissions['view path options'] = array(
    'name' => 'view path options',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view preview button
  $permissions['view preview button'] = array(
    'name' => 'view preview button',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view revision information
  $permissions['view revision information'] = array(
    'name' => 'view revision information',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view revision log textarea
  $permissions['view revision log textarea'] = array(
    'name' => 'view revision log textarea',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
      '2' => 'instructional designer',
      '3' => 'instructor',
      '4' => 'media staff',
    ),
  );

  // Exported permission: view submit button
  $permissions['view submit button'] = array(
    'name' => 'view submit button',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view teaser controls
  $permissions['view teaser controls'] = array(
    'name' => 'view teaser controls',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view user delete button
  $permissions['view user delete button'] = array(
    'name' => 'view user delete button',
    'roles' => array(
      '0' => 'admin',
      '1' => 'administrator',
    ),
  );

  // Exported permission: view workflow tabs
  $permissions['view workflow tabs'] = array(
    'name' => 'view workflow tabs',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
