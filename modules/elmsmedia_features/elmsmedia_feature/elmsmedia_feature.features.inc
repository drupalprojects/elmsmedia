<?php

/**
 * Implementation of hook_flag_default_flags().
 */
function elmsmedia_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "ID Approval".
  $flags['id_review'] = array(
    'content_type' => 'node',
    'title' => 'ID Approval',
    'global' => '0',
    'types' => array(
      '0' => 'video',
      '1' => 'image',
      '2' => 'audio',
    ),
    'flag_short' => 'Unapproved',
    'flag_long' => 'Mark this content as approved',
    'flag_message' => '',
    'unflag_short' => 'Approved',
    'unflag_long' => 'Undo your approval',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => 3,
        '1' => 6,
      ),
      'unflag' => array(
        '0' => 3,
        '1' => 6,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'elmsmedia_feature',
    'locked' => array(
      '0' => 'name',
    ),
  );
  // Exported flag: "Media Approval".
  $flags['media_review'] = array(
    'content_type' => 'node',
    'title' => 'Media Approval',
    'global' => '0',
    'types' => array(
      '0' => 'video',
      '1' => 'image',
      '2' => 'audio',
    ),
    'flag_short' => 'Unapproved',
    'flag_long' => 'Mark this content as approved',
    'flag_message' => '',
    'unflag_short' => 'Approved',
    'unflag_long' => 'Undo your approval',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => 3,
        '1' => 4,
      ),
      'unflag' => array(
        '0' => 3,
        '1' => 4,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'elmsmedia_feature',
    'locked' => array(
      '0' => 'name',
    ),
  );
  return $flags;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function elmsmedia_feature_imagecache_default_presets() {
  $items = array(
    'basic' => array(
      'presetname' => 'basic',
      'actions' => array(
        '0' => array(
          'weight' => '-1',
          'module' => 'elmsmedia',
          'action' => 'none',
          'data' => array(
            'width' => '200',
            'height' => '150',
          ),
        ),
        '1' => array(
          'weight' => '-1',
          'module' => 'elmsmedia',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '200',
            'height' => '100',
          ),
        ),
        '2' => array(
          'weight' => '9',
          'module' => 'elmsmedia',
          'action' => 'imagecache_convert',
          'data' => array(
            'format' => 'image/png',
          ),
        ),
        '3' => array(
          'weight' => '10',
          'module' => 'elmsmedia',
          'action' => 'dropshadow',
          'data' => array(
            'path' => 'sites/all/modules/imagecache_dropshadow/image',
            'background_color' => '#FFFFFF',
          ),
        ),
      ),
    ),
    'citation' => array(
      'presetname' => 'citation',
      'actions' => array(
        '0' => array(
          'weight' => '-1',
          'module' => 'elmsmedia',
          'action' => 'none',
          'data' => array(
            'width' => '0',
            'height' => '0',
          ),
        ),
        '1' => array(
          'weight' => '-1',
          'module' => 'elmsmedia',
          'action' => 'none',
          'data' => array(
            'width' => '0',
            'height' => '0',
          ),
        ),
        '2' => array(
          'weight' => '-1',
          'module' => 'elmsmedia',
          'action' => 'none',
          'data' => array(
            'width' => '0',
            'height' => '0',
          ),
        ),
      ),
    ),
    'elmsmedia_artistartwork' => array(
      'presetname' => 'elmsmedia_artistartwork',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '50',
            'height' => '75',
          ),
        ),
      ),
    ),
    'elmsmedia_artistbigartwork' => array(
      'presetname' => 'elmsmedia_artistbigartwork',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '250',
            'height' => '250',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'elmsmedia_basic' => array(
      'presetname' => 'elmsmedia_basic',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '100',
          ),
        ),
      ),
    ),
    'elmsmedia_fancyslide' => array(
      'presetname' => 'elmsmedia_fancyslide',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '400',
            'height' => '225',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'elmsmedia_galleria' => array(
      'presetname' => 'elmsmedia_galleria',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '200',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'elms_column' => array(
      'presetname' => 'elms_column',
      'actions' => array(
        '0' => array(
          'weight' => '-1',
          'module' => 'elmsmedia',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '220',
            'height' => '180',
          ),
        ),
        '1' => array(
          'weight' => '9',
          'module' => 'elmsmedia',
          'action' => 'imagecache_convert',
          'data' => array(
            'format' => 'image/png',
          ),
        ),
        '2' => array(
          'weight' => '10',
          'module' => 'elmsmedia',
          'action' => 'dropshadow',
          'data' => array(
            'path' => 'sites/all/modules/imagecache_dropshadow/image',
            'background_color' => '#FFFFFF',
          ),
        ),
      ),
    ),
    'esg_t1' => array(
      'presetname' => 'esg_t1',
      'actions' => array(
        '0' => array(
          'weight' => '-1',
          'module' => 'elmsmedia',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '216',
            'height' => '0',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '9',
          'module' => 'elmsmedia',
          'action' => 'imagecache_convert',
          'data' => array(
            'format' => 'image/png',
          ),
        ),
        '2' => array(
          'weight' => '10',
          'module' => 'elmsmedia',
          'action' => 'canvasactions_roundedcorners',
          'data' => array(
            'radius' => '8',
            'independent_corners_set' => array(
              'independent_corners' => 0,
              'radii' => array(
                'tl' => '',
                'tr' => '',
                'bl' => '',
                'br' => '',
              ),
            ),
          ),
        ),
      ),
    ),
    'esg_t2' => array(
      'presetname' => 'esg_t2',
      'actions' => array(
        '0' => array(
          'weight' => '-1',
          'module' => 'elmsmedia',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '216',
            'height' => '0',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '9',
          'module' => 'elmsmedia',
          'action' => 'imagecache_convert',
          'data' => array(
            'format' => 'image/png',
          ),
        ),
        '2' => array(
          'weight' => '10',
          'module' => 'elmsmedia',
          'action' => 'canvasactions_roundedcorners',
          'data' => array(
            'radius' => '8',
            'independent_corners_set' => array(
              'independent_corners' => 0,
              'radii' => array(
                'tl' => '',
                'tr' => '',
                'bl' => '',
                'br' => '',
              ),
            ),
          ),
        ),
      ),
    ),
    'none' => array(
      'presetname' => 'none',
      'actions' => array(
        '0' => array(
          'weight' => '-1',
          'module' => 'elmsmedia',
          'action' => 'none',
          'data' => array(
            'width' => '0',
            'height' => '0',
          ),
        ),
      ),
    ),
    'playerthumb' => array(
      'presetname' => 'playerthumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '640',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function elmsmedia_feature_node_info() {
  $items = array(
    'archived_media' => array(
      'name' => t('Archived Media'),
      'module' => 'features',
      'description' => t('Use this to store a record of media that\'s been ripped to a DVD / BlurRay disk and archived'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'audio' => array(
      'name' => t('Audio'),
      'module' => 'features',
      'description' => t('Add an MP3 audio asset to the system.  This can be either embedded directly in a course or added to a playlist of media pieces.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'document' => array(
      'name' => t('Document'),
      'module' => 'features',
      'description' => t('Add a file asset to the system.  This helps streamline embedding, downloading and tracking of where the file has been placed in the course.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'external_video' => array(
      'name' => t('External Video'),
      'module' => 'features',
      'description' => t('Add a YouTube video asset to the system.  This can be either embedded directly in a course or added to a playlist of media pieces.  You can embed youtube video without this but it helps streamline development.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'flash' => array(
      'name' => t('Flash'),
      'module' => 'features',
      'description' => t('Add a flash asset to the system.  This helps streamline the embedding of the flash object in a course.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'image' => array(
      'name' => t('Image'),
      'module' => 'features',
      'description' => t('Add an image asset to the system.  This can be either embedded directly in a course, manipulated via image treatments or included as part of an image gallery.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'image_gallery' => array(
      'name' => t('Image Gallery'),
      'module' => 'features',
      'description' => t('Assemble an image gallery asset in the system.  This is a collection of images with a variety of different display configurations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'image_treatment' => array(
      'name' => t('Image Treatment'),
      'module' => 'features',
      'description' => t('Use this to create different ways of handling images.  This allows you to either write HTML or select how you\'d like images handled.  Typically these will be created by the media staff.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'playlist' => array(
      'name' => t('Media Playlist'),
      'module' => 'features',
      'description' => t('Assemble a media playlist asset in the system.  This can be made up of Audio, Video or YouTube Video assets for easy embedding in a course.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('This will create a play-list that can be referenced in courses'),
    ),
    'video' => array(
      'name' => t('Video'),
      'module' => 'features',
      'description' => t('Add a video asset to the system.  This can be either embedded directly in a course or added to a playlist of media pieces.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('The description field is used in playlists to provide additional information about the video clip.'),
    ),
    'webcam' => array(
      'name' => t('Webcam'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function elmsmedia_feature_views_api() {
  return array(
    'api' => '2',
  );
}
