<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function elmsmedia_feature_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_copyright_info
  $groups['audio-group_copyright_info'] = array(
    'group_type' => 'standard',
    'type_name' => 'audio',
    'group_name' => 'group_copyright_info',
    'label' => 'Copyright Info',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_owner',
      '1' => 'field_cc',
      '2' => 'field_citation',
      '3' => 'field_privacy',
      '4' => 'field_allowed_courses',
    ),
  );

  // Exported group: group_details
  $groups['audio-group_details'] = array(
    'group_type' => 'standard',
    'type_name' => 'audio',
    'group_name' => 'group_details',
    'label' => 'Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '8',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '4',
    'fields' => array(
      '0' => 'field_year',
      '1' => 'field_notes',
    ),
  );

  // Exported group: group_media
  $groups['audio-group_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'audio',
    'group_name' => 'group_media',
    'label' => 'Media',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_audio',
      '1' => 'field_audiothumb',
      '2' => 'field_caption_file',
      '3' => 'field_transcript_file',
      '4' => 'field_citation_file',
      '5' => 'field_cc_job_status',
    ),
  );

  // Exported group: group_usage
  $groups['audio-group_usage'] = array(
    'group_type' => 'standard',
    'type_name' => 'audio',
    'group_name' => 'group_usage',
    'label' => 'Usage',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '18',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_trackbacks',
    ),
  );

  // Exported group: group_document
  $groups['document-group_document'] = array(
    'group_type' => 'standard',
    'type_name' => 'document',
    'group_name' => 'group_document',
    'label' => 'Document',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_vertical_tab',
        'description' => '',
      ),
      'display' => array(
        'weight' => '1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_file',
    ),
  );

  // Exported group: group_usage
  $groups['document-group_usage'] = array(
    'group_type' => 'standard',
    'type_name' => 'document',
    'group_name' => 'group_usage',
    'label' => 'Usage',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '6',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_trackbacks',
    ),
  );

  // Exported group: group_details
  $groups['external_video-group_details'] = array(
    'group_type' => 'standard',
    'type_name' => 'external_video',
    'group_name' => 'group_details',
    'label' => 'Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '34',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '34',
    'fields' => array(
      '0' => 'field_notes',
    ),
  );

  // Exported group: group_usage
  $groups['external_video-group_usage'] = array(
    'group_type' => 'standard',
    'type_name' => 'external_video',
    'group_name' => 'group_usage',
    'label' => 'Usage',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '39',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '39',
    'fields' => array(
      '0' => 'field_trackbacks',
    ),
  );

  // Exported group: group_flash
  $groups['flash-group_flash'] = array(
    'group_type' => 'standard',
    'type_name' => 'flash',
    'group_name' => 'group_flash',
    'label' => 'Flash',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_file',
      '1' => 'field_width',
      '2' => 'field_height',
    ),
  );

  // Exported group: group_usage
  $groups['flash-group_usage'] = array(
    'group_type' => 'standard',
    'type_name' => 'flash',
    'group_name' => 'group_usage',
    'label' => 'Usage',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_trackbacks',
    ),
  );

  // Exported group: group_copyright_info
  $groups['image-group_copyright_info'] = array(
    'group_type' => 'standard',
    'type_name' => 'image',
    'group_name' => 'group_copyright_info',
    'label' => 'Copyright Info',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_owner',
      '1' => 'field_cc',
      '2' => 'field_citation',
    ),
  );

  // Exported group: group_details
  $groups['image-group_details'] = array(
    'group_type' => 'standard',
    'type_name' => 'image',
    'group_name' => 'group_details',
    'label' => 'Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '4',
    'fields' => array(
      '0' => 'field_alttext',
      '1' => 'field_associated_content',
      '2' => 'field_year',
      '3' => 'field_notes',
    ),
  );

  // Exported group: group_media
  $groups['image-group_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'image',
    'group_name' => 'group_media',
    'label' => 'Media',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_image',
    ),
  );

  // Exported group: group_usage
  $groups['image-group_usage'] = array(
    'group_type' => 'standard',
    'type_name' => 'image',
    'group_name' => 'group_usage',
    'label' => 'Usage',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '12',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '12',
    'fields' => array(
      '0' => 'field_trackbacks',
    ),
  );

  // Exported group: group_gallery
  $groups['image_gallery-group_gallery'] = array(
    'group_type' => 'standard',
    'type_name' => 'image_gallery',
    'group_name' => 'group_gallery',
    'label' => 'Gallery',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_gallery_type',
      '1' => 'field_heading1',
      '2' => 'field_heading2',
    ),
  );

  // Exported group: group_images
  $groups['image_gallery-group_images'] = array(
    'group_type' => 'standard',
    'type_name' => 'image_gallery',
    'group_name' => 'group_images',
    'label' => 'Images',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_images',
    ),
  );

  // Exported group: group_usage
  $groups['image_gallery-group_usage'] = array(
    'group_type' => 'standard',
    'type_name' => 'image_gallery',
    'group_name' => 'group_usage',
    'label' => 'Usage',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '4',
    'fields' => array(
      '0' => 'field_trackbacks',
    ),
  );

  // Exported group: group_color
  $groups['image_treatment-group_color'] = array(
    'group_type' => 'standard',
    'type_name' => 'image_treatment',
    'group_name' => 'group_color',
    'label' => 'Color Manipulation',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '5',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '5',
    'fields' => array(
      '0' => 'field_color_change',
      '1' => 'field_color',
    ),
  );

  // Exported group: group_effects
  $groups['image_treatment-group_effects'] = array(
    'group_type' => 'standard',
    'type_name' => 'image_treatment',
    'group_name' => 'group_effects',
    'label' => 'Special Effects',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '21',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '21',
    'fields' => array(
      '0' => 'field_treatment',
    ),
  );

  // Exported group: group_lightbox
  $groups['image_treatment-group_lightbox'] = array(
    'group_type' => 'standard',
    'type_name' => 'image_treatment',
    'group_name' => 'group_lightbox',
    'label' => 'Lightbox',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '6',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_lightbox',
    ),
  );

  // Exported group: group_resize
  $groups['image_treatment-group_resize'] = array(
    'group_type' => 'standard',
    'type_name' => 'image_treatment',
    'group_name' => 'group_resize',
    'label' => 'Resize Options',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '4',
    'fields' => array(
      '0' => 'field_scale_type',
      '1' => 'field_width',
      '2' => 'field_height',
      '3' => 'field_units',
    ),
  );

  // Exported group: group_template
  $groups['image_treatment-group_template'] = array(
    'group_type' => 'standard',
    'type_name' => 'image_treatment',
    'group_name' => 'group_template',
    'label' => 'Template',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_vertical_tab',
        'description' => '',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_template',
    ),
  );

  // Exported group: group_watermark
  $groups['image_treatment-group_watermark'] = array(
    'group_type' => 'standard',
    'type_name' => 'image_treatment',
    'group_name' => 'group_watermark',
    'label' => 'Watermark',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_vertical_tab',
        'description' => '',
      ),
      'display' => array(
        'weight' => '27',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '27',
    'fields' => array(
      '0' => 'field_watermark_image',
      '1' => 'field_position',
      '2' => 'field_opacity',
    ),
  );

  // Exported group: group_playlist
  $groups['playlist-group_playlist'] = array(
    'group_type' => 'standard',
    'type_name' => 'playlist',
    'group_name' => 'group_playlist',
    'label' => 'Playlist',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_assetlist',
    ),
  );

  // Exported group: group_usage
  $groups['playlist-group_usage'] = array(
    'group_type' => 'standard',
    'type_name' => 'playlist',
    'group_name' => 'group_usage',
    'label' => 'Usage',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '6',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_trackbacks',
    ),
  );

  // Exported group: group_copyright_info
  $groups['video-group_copyright_info'] = array(
    'group_type' => 'standard',
    'type_name' => 'video',
    'group_name' => 'group_copyright_info',
    'label' => 'Copyright Info',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_owner',
      '1' => 'field_cc',
      '2' => 'field_citation',
      '3' => 'field_privacy',
      '4' => 'field_allowed_courses',
    ),
  );

  // Exported group: group_details
  $groups['video-group_details'] = array(
    'group_type' => 'standard',
    'type_name' => 'video',
    'group_name' => 'group_details',
    'label' => 'Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '5',
    'fields' => array(
      '0' => 'field_year',
      '1' => 'field_notes',
    ),
  );

  // Exported group: group_media
  $groups['video-group_media'] = array(
    'group_type' => 'standard',
    'type_name' => 'video',
    'group_name' => 'group_media',
    'label' => 'Media',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_streaming_type',
      '1' => 'field_video',
      '2' => 'field_videothumb',
      '3' => 'field_caption_file',
      '4' => 'field_transcript_file',
      '5' => 'field_citation_file',
      '6' => 'field_cc_job_status',
    ),
  );

  // Exported group: group_usage
  $groups['video-group_usage'] = array(
    'group_type' => 'standard',
    'type_name' => 'video',
    'group_name' => 'group_usage',
    'label' => 'Usage',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '51',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_trackbacks',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Color Manipulation');
  t('Copyright Info');
  t('Details');
  t('Document');
  t('Flash');
  t('Gallery');
  t('Images');
  t('Lightbox');
  t('Media');
  t('Playlist');
  t('Resize Options');
  t('Special Effects');
  t('Template');
  t('Usage');
  t('Watermark');

  return $groups;
}
