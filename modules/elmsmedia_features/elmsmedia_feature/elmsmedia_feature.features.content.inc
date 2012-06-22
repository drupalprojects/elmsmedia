<?php

/**
 * Implementation of hook_content_default_fields().
 */
function elmsmedia_feature_content_default_fields() {
  $fields = array();

  // Exported field: field_medium
  $fields['archived_media-field_medium'] = array(
    'field_name' => 'field_medium',
    'type_name' => 'archived_media',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Blu-ray
DVD
Harddrive / digital
Other',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Medium',
      'weight' => '1',
      'description' => 'What medium is the archive stored on',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_uniqueid
  $fields['archived_media-field_uniqueid'] = array(
    'field_name' => 'field_uniqueid',
    'type_name' => 'archived_media',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_uniqueid][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Unique ID',
      'weight' => '-2',
      'description' => 'the id that\'s placed on the label for the media',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_year
  $fields['archived_media-field_year'] = array(
    'field_name' => 'field_year',
    'type_name' => 'archived_media',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_details',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '1900',
    'max' => '3000',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_year][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Year Created',
      'weight' => '2',
      'description' => 'Enter the year this image was created',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_allowed_courses
  $fields['audio-field_allowed_courses'] = array(
    'field_name' => 'field_allowed_courses',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_allowed_courses][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Allowed Courses',
      'weight' => '14',
      'description' => 'Provide a space separated list of courses that can access this media.  This is used for rendering our players / playlists and will filter out videos in lists NOT allowed outside of these courses.  Only use this if "Protected to a specific course" is selected above
Example: art010 art020 music007',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_audio
  $fields['audio-field_audio'] = array(
    'field_name' => 'field_audio',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_media',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp3',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '100M',
      'max_filesize_per_node' => '',
      'label' => 'Audio',
      'weight' => '23',
      'description' => 'Audio Assets can only be MP3s',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_audiothumb
  $fields['audio-field_audiothumb'] = array(
    'field_name' => 'field_audiothumb',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_media',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__nodesize__original',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '10M',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'eli_placeholder_video.png',
        'filepath' => 'sites/default/files/imagefield_default_images/eli_placeholder_video_0.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/eli_placeholder_video_0.png',
        'filesize' => 28950,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1281021028,
        'origname' => '',
        'fid' => '34',
      ),
      'use_default_image' => 1,
      'label' => 'Audio Thumb',
      'weight' => '24',
      'description' => 'This is the thumbnail that will represent the audio clip when it\'s shown in players and playlists that have a viewer',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_caption_file
  $fields['audio-field_caption_file'] = array(
    'field_name' => 'field_caption_file',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '33',
      'parent' => 'group_media',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => '',
      'progress_indicator' => 'throbber',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'label' => 'Caption File',
      'weight' => '25',
      'description' => 'Use this to get caption\'s to load in the video.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_cc
  $fields['audio-field_cc'] = array(
    'field_name' => 'field_cc',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '11',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1|All Rights Reserved (None)
2|Attribution
3|Attribution-Share Alike
4|Attribution-No Derivatives
5|Attribution-Noncommercial
6|Attribution-Noncommercial-Share Alike
7|Attribution-Noncommercial No Derivative Works
8|Public Domain',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'All Rights Reserved (None)',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Creative Commons',
      'weight' => '11',
      'description' => 'The Creative Commons License on this work.  If unsure, leave as All Rights Reserved (None).',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_cc_job_status
  $fields['audio-field_cc_job_status'] = array(
    'field_name' => 'field_cc_job_status',
    'type_name' => 'audio',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'needs_transcribed|Needs Transcription (Need)
approved|Submit to 3playmedia for Transcription (Submitted)
sent|Sent to 3playmedia for Transcription (Sent)
processing|Transcription Being Processed (Processing)
complete|Files Received (Received)',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Transcription Status',
      'weight' => '28',
      'description' => 'The current status of the closed captioning / transcription job',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_citation
  $fields['audio-field_citation'] = array(
    'field_name' => 'field_citation',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '12',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_citation][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Citation',
      'weight' => '12',
      'description' => 'Authors name. name of work, date created. medium.  (if medium unknown, use "Digital file")
Example: Beethoven, Ludwig van. Moonlight Sonata. Crownstar, 2006. MP3.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_citation_file
  $fields['audio-field_citation_file'] = array(
    'field_name' => 'field_citation_file',
    'type_name' => 'audio',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'txt doc pdf',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Citation file',
      'weight' => '27',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_notes
  $fields['audio-field_notes'] = array(
    'field_name' => 'field_notes',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_details',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Additional Notes',
      'weight' => '15',
      'description' => 'Notes about this clip beyond the fields included',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_owner
  $fields['audio-field_owner'] = array(
    'field_name' => 'field_owner',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '10',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'College
Company
Creative Commons
Other',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Owner',
      'weight' => '10',
      'description' => 'Use this to categorize who created the work / owns the rights to the content',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_privacy
  $fields['audio-field_privacy'] = array(
    'field_name' => 'field_privacy',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Protected to courses
Protected to a specific course
Public',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Protected to courses',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Privacy',
      'weight' => '13',
      'description' => 'Protected to courses will ensure that the video can only appear on elearning.psu.edu/courses/
Protected to a specific course will ensure that the video can only appear on elearning.psu.edu/courses/[COURSENAME]
Public will ensure that the video can appear anywhere on elearning.psu.edu',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_trackbacks
  $fields['audio-field_trackbacks'] = array(
    'field_name' => 'field_trackbacks',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '20',
      'parent' => 'group_usage',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_trackbacks][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Trackbacks',
      'weight' => '20',
      'description' => 'This list will register where the embed code has been detected in the past',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_transcript_file
  $fields['audio-field_transcript_file'] = array(
    'field_name' => 'field_transcript_file',
    'type_name' => 'audio',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'txt',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'label' => 'Transcript file',
      'weight' => '26',
      'description' => 'Transcript of the audio used in this asset.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_year
  $fields['audio-field_year'] = array(
    'field_name' => 'field_year',
    'type_name' => 'audio',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_details',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '1900',
    'max' => '3000',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_year][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Year Created',
      'weight' => '14',
      'description' => 'Enter the year this video was created',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_file
  $fields['document-field_file'] = array(
    'field_name' => 'field_file',
    'type_name' => 'document',
    'display_settings' => array(
      'weight' => '3',
      'parent' => 'group_document',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'txt pdf doc docx rtf xls xlsx zip ppt pptx xml psd ai eps indd max 3dm otf ttf tar.gz kml kmz mp4 flv mov',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '200M',
      'max_filesize_per_node' => '',
      'label' => 'File',
      'weight' => '3',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_trackbacks
  $fields['document-field_trackbacks'] = array(
    'field_name' => 'field_trackbacks',
    'type_name' => 'document',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_usage',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_trackbacks][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Trackbacks',
      'weight' => '8',
      'description' => 'This list will register where the embed code has been detected in the past',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_notes
  $fields['external_video-field_notes'] = array(
    'field_name' => 'field_notes',
    'type_name' => 'external_video',
    'display_settings' => array(
      'weight' => '36',
      'parent' => 'group_details',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Additional Notes',
      'weight' => '36',
      'description' => 'Notes about this clip beyond the fields included',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_trackbacks
  $fields['external_video-field_trackbacks'] = array(
    'field_name' => 'field_trackbacks',
    'type_name' => 'external_video',
    'display_settings' => array(
      'weight' => '41',
      'parent' => 'group_usage',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_trackbacks][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Trackbacks',
      'weight' => '41',
      'description' => 'This list will register where the embed code has been detected in the past',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_video_url
  $fields['external_video-field_video_url'] = array(
    'field_name' => 'field_video_url',
    'type_name' => 'external_video',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '1',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => 0,
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
      'thumbnail_width' => '360',
      'thumbnail_height' => '270',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
        'archive' => 0,
        'bliptv' => 0,
        'google' => 0,
        'voicethread' => 0,
        'zzz_custom_url' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video URL',
      'weight' => '31',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_file
  $fields['flash-field_file'] = array(
    'field_name' => 'field_file',
    'type_name' => 'flash',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => 'group_flash',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'swf zip',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '500M',
      'max_filesize_per_node' => '',
      'label' => 'File',
      'weight' => '-3',
      'description' => 'This must be an swf file in order to be embedded correctly',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_height
  $fields['flash-field_height'] = array(
    'field_name' => 'field_height',
    'type_name' => 'flash',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_flash',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_height][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Height',
      'weight' => '-1',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_trackbacks
  $fields['flash-field_trackbacks'] = array(
    'field_name' => 'field_trackbacks',
    'type_name' => 'flash',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_usage',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_trackbacks][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Trackbacks',
      'weight' => '7',
      'description' => 'This list will register where the embed code has been detected in the past',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_width
  $fields['flash-field_width'] = array(
    'field_name' => 'field_width',
    'type_name' => 'flash',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => 'group_flash',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_width][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Width',
      'weight' => '-2',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_alttext
  $fields['image-field_alttext'] = array(
    'field_name' => 'field_alttext',
    'type_name' => 'image',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '80',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alttext][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Alt text',
      'weight' => '22',
      'description' => 'Remember to write descriptive alternate text for the image.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_associated_content
  $fields['image-field_associated_content'] = array(
    'field_name' => 'field_associated_content',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_details',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_associated_content][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Associated Content',
      'weight' => '23',
      'description' => 'This field can be used for things like artist statements or to describe what\'s pictured.  HTML is allowed.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_cc
  $fields['image-field_cc'] = array(
    'field_name' => 'field_cc',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1|All Rights Reserved (None)
2|Attribution
3|Attribution-Share Alike
4|Attribution-No Derivatives
5|Attribution-Noncommercial
6|Attribution-Noncommercial-Share Alike
7|Attribution-Noncommercial No Derivative Works
8|Public Domain',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Creative Commons',
      'weight' => '20',
      'description' => 'The Creative Commons License on this work.  If unsure, leave as All Rights Reserved (None).',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_citation
  $fields['image-field_citation'] = array(
    'field_name' => 'field_citation',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_citation][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Citation',
      'weight' => '21',
      'description' => 'Artist, location, date
Example:    Rembrandt Harmenszoon van Rijn, The Standard- Bearer, 1636',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_image
  $fields['image-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '3',
      'parent' => 'group_media',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__nodesize__original',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '3',
      'description' => 'Use this for better management of images as well as making building galleries easier',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_notes
  $fields['image-field_notes'] = array(
    'field_name' => 'field_notes',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '9',
      'parent' => 'group_details',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Additional Notes',
      'weight' => '25',
      'description' => 'Notes about this clip beyond the fields included',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_owner
  $fields['image-field_owner'] = array(
    'field_name' => 'field_owner',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'College
Company
Creative Commons
Other',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Owner',
      'weight' => '19',
      'description' => 'Use this to categorize who created the work / owns the rights to the content',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_trackbacks
  $fields['image-field_trackbacks'] = array(
    'field_name' => 'field_trackbacks',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_usage',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_trackbacks][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Trackbacks',
      'weight' => '14',
      'description' => 'This list will register where the embed code has been detected in the past',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_year
  $fields['image-field_year'] = array(
    'field_name' => 'field_year',
    'type_name' => 'image',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_details',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '1900',
    'max' => '3000',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_year][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Year Created',
      'weight' => '24',
      'description' => 'Enter the year this image was created',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_gallery_type
  $fields['image_gallery-field_gallery_type'] = array(
    'field_name' => 'field_gallery_type',
    'type_name' => 'image_gallery',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_gallery',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'basic|Basic
artist_artwork|Artist Artwork
galleria|Galleria
fancy_slide|Fancy Slide',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'basic',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Type',
      'weight' => '4',
      'description' => 'These are the different main ways of rendering the images.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_heading1
  $fields['image_gallery-field_heading1'] = array(
    'field_name' => 'field_heading1',
    'type_name' => 'image_gallery',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_heading1][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Heading 1',
      'weight' => '5',
      'description' => 'This is typically the Artist Name to be displayed as the Heading in the Artist Gallery pop up.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_heading2
  $fields['image_gallery-field_heading2'] = array(
    'field_name' => 'field_heading2',
    'type_name' => 'image_gallery',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_heading2][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Heading 2',
      'weight' => '6',
      'description' => 'This is typically used as a title for the gallery as a whole',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_images
  $fields['image_gallery-field_images'] = array(
    'field_name' => 'field_images',
    'type_name' => 'image_gallery',
    'display_settings' => array(
      'weight' => '31',
      'parent' => 'group_images',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'image' => 'image',
      'audio' => 0,
      'document' => 0,
      'external_video' => 0,
      'image_gallery' => 0,
      'image_treatment' => 0,
      'media_request_form' => 0,
      'playlist' => 0,
      'video' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '40',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_images][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Images',
      'weight' => '31',
      'description' => 'Start typing the name of the image you want to appear in the gallery.  Use the cross-hairs to drag them into the order you\'d like them to appear.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_trackbacks
  $fields['image_gallery-field_trackbacks'] = array(
    'field_name' => 'field_trackbacks',
    'type_name' => 'image_gallery',
    'display_settings' => array(
      'weight' => '35',
      'parent' => 'group_usage',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_trackbacks][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Trackbacks',
      'weight' => '35',
      'description' => 'This list will register where the embed code has been detected in the past',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_color
  $fields['image_treatment-field_color'] = array(
    'field_name' => 'field_color',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_color',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'colorpicker_cck_textfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'colorpicker_cck',
    'active' => '1',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '#fe0000',
          '_error_element' => 'default_value_widget][field_color][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Color',
      'weight' => '13',
      'description' => 'Click the eye dropper or text field to change the hex value.  Hex value must be present in the text field for the content to submit correctly.',
      'type' => 'colorpicker_cck',
      'module' => 'colorpicker_cck',
    ),
  );

  // Exported field: field_color_change
  $fields['image_treatment-field_color_change'] = array(
    'field_name' => 'field_color_change',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '12',
      'parent' => 'group_color',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'original|Original
imagecache_desaturate|Gray Scale
imagecache_inverse|Negative
sepia|Sepia
imagecache_colorshift|Color Shift',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'original',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Color Change',
      'weight' => '12',
      'description' => 'Select whether to perform any color transformations to the image.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_height
  $fields['image_treatment-field_height'] = array(
    'field_name' => 'field_height',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '11',
      'parent' => 'group_resize',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_height][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Height',
      'weight' => '11',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lightbox
  $fields['image_treatment-field_lightbox'] = array(
    'field_name' => 'field_lightbox',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_lightbox',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '1|Yes
0|No',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Lightbox',
      'weight' => '13',
      'description' => 'Where or not to apply lightbox on the image',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_name
  $fields['image_treatment-field_name'] = array(
    'field_name' => 'field_name',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '25',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Template Name',
      'weight' => '-4',
      'description' => 'Name of the template.  Make this something that\'s easy to read and know generally what it will look like.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_opacity
  $fields['image_treatment-field_opacity'] = array(
    'field_name' => 'field_opacity',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '25',
      'parent' => 'group_watermark',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '1',
    'max' => '100',
    'allowed_values' => '100
90
80
70
60
50
45
40
35
30
25
20
15
10
5
1',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '20',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Opacity',
      'weight' => '25',
      'description' => 'Set the Opacity of the watermarked image',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_position
  $fields['image_treatment-field_position'] = array(
    'field_name' => 'field_position',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '24',
      'parent' => 'group_watermark',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'bottom_right|Bottom Right
bottom_left|Bottom Left
center_center|Center
top_right|Top Right
top_left|Top Left',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'bottom_right',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Position',
      'weight' => '24',
      'description' => 'Where should the watermark be placed',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_scale_type
  $fields['image_treatment-field_scale_type'] = array(
    'field_name' => 'field_scale_type',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '9',
      'parent' => 'group_resize',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'none|None
imagecache_scale_and_crop|Scale and Crop
imagecache_scale|Scale
imagecache_resize|Resize
imagecache_crop|Crop',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'none',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Type of Scale',
      'weight' => '9',
      'description' => 'Scale -- Resize an image while maintaining aspect ratio<br />
Scale And Crop -- Resize an image while maintaining aspect ratio, then crop it to the specified dimensions.<br />
Resize - image is exact set of dimensions, ignoring aspect ratio.<br />
Crop - Crop an image to the rectangle specified by the set dimensions in the middle of the picture.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_template
  $fields['image_treatment-field_template'] = array(
    'field_name' => 'field_template',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => 'group_template',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '%image',
          '_error_element' => 'default_value_widget][field_template][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'HTML',
      'weight' => '-3',
      'description' => 'Use the following properties to get the replacements working correctly for your templates.<br />
%image - The image file.  This will also apply the light-box effect if it\'s activated by the user<br />
%title - Image title field<br />
%citation - The citation field<br />
%year - The year the image was created<br />
%notes - Notes associated with the image<br />
%footnote - Footnote association with context in page',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_treatment
  $fields['image_treatment-field_treatment'] = array(
    'field_name' => 'field_treatment',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '22',
      'parent' => 'group_effects',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'none|None
round_corners|Round Corners
picture_frame|Picture frame
tape|Taped to Page
drop_shadow|Drop Shadow',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'none',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Treatment',
      'weight' => '22',
      'description' => 'Treatments are special effects that are applied directly to the image.  Example: Round corners on just the image',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_units
  $fields['image_treatment-field_units'] = array(
    'field_name' => 'field_units',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '12',
      'parent' => 'group_resize',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'pixels|Pixels
percentage|Percentage',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'pixels',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Units',
      'weight' => '12',
      'description' => 'Whether to treat the width / height as percentage or exact pixels',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_watermark_image
  $fields['image_treatment-field_watermark_image'] = array(
    'field_name' => 'field_watermark_image',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '23',
      'parent' => 'group_watermark',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__nodesize__original',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '10M',
      'max_filesize_per_node' => '10M',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '23',
      'description' => 'Upload an image for use as the watermark for all images that have this template applied to them.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_width
  $fields['image_treatment-field_width'] = array(
    'field_name' => 'field_width',
    'type_name' => 'image_treatment',
    'display_settings' => array(
      'weight' => '10',
      'parent' => 'group_resize',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_width][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Width',
      'weight' => '10',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_assetlist
  $fields['playlist-field_assetlist'] = array(
    'field_name' => 'field_assetlist',
    'type_name' => 'playlist',
    'display_settings' => array(
      'weight' => '3',
      'parent' => 'group_playlist',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'audio' => 0,
      'document' => 0,
      'external_video' => 0,
      'image' => 0,
      'image_gallery' => 0,
      'image_treatment' => 0,
      'media_request_form' => 0,
      'playlist' => 0,
      'video' => 0,
    ),
    'advanced_view' => 'contenttypelists',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '40',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_assetlist][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Assets',
      'weight' => '3',
      'description' => 'Use this to select the assets you want to include in this play-list.  Once you save you\'ll be able to arrange them in the order you want the items to appear.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_trackbacks
  $fields['playlist-field_trackbacks'] = array(
    'field_name' => 'field_trackbacks',
    'type_name' => 'playlist',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_usage',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_trackbacks][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Trackbacks',
      'weight' => '8',
      'description' => 'This list will register where the embed code has been detected in the past',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_allowed_courses
  $fields['video-field_allowed_courses'] = array(
    'field_name' => 'field_allowed_courses',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '9',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_allowed_courses][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Allowed Courses',
      'weight' => '9',
      'description' => 'Provide a space separated list of courses that can access this media.  This is used for rendering our players / playlists and will filter out videos in lists NOT allowed outside of these courses.  Only use this if "Protected to a specific course" is selected above
Example: art010 art020 music007',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_caption_file
  $fields['video-field_caption_file'] = array(
    'field_name' => 'field_caption_file',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '33',
      'parent' => 'group_media',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => '',
      'progress_indicator' => 'throbber',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'label' => 'Caption File',
      'weight' => '37',
      'description' => 'Use this to get caption\'s to load in the video.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_cc
  $fields['video-field_cc'] = array(
    'field_name' => 'field_cc',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1|All Rights Reserved (None)
2|Attribution
3|Attribution-Share Alike
4|Attribution-No Derivatives
5|Attribution-Noncommercial
6|Attribution-Noncommercial-Share Alike
7|Attribution-Noncommercial No Derivative Works
8|Public Domain',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'All Rights Reserved (None)',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Creative Commons',
      'weight' => '6',
      'description' => 'The Creative Commons License on this work.  If unsure, leave as All Rights Reserved (None).',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_cc_job_status
  $fields['video-field_cc_job_status'] = array(
    'field_name' => 'field_cc_job_status',
    'type_name' => 'video',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'needs_transcribed|Needs Transcription (Need)
approved|Submit to 3playmedia for Transcription (Submitted)
sent|Sent to 3playmedia for Transcription (Sent)
processing|Transcription Being Processed (Processing)
complete|Files Received (Received)',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Transcription Status',
      'weight' => '40',
      'description' => 'The current status of the closed captioning / transcription job',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_citation
  $fields['video-field_citation'] = array(
    'field_name' => 'field_citation',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_citation][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Citation',
      'weight' => '7',
      'description' => 'Title of movie. Director (abbreviated as Dir.). Distributor, year of release. Medium.
Example:    Gallipoli. Dir. Peter Weir. Perf. Mel Gibson and Mark Lee. 1981.Paramount, 1999. DVD.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_citation_file
  $fields['video-field_citation_file'] = array(
    'field_name' => 'field_citation_file',
    'type_name' => 'video',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'txt doc pdf',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Citation file',
      'weight' => '39',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_notes
  $fields['video-field_notes'] = array(
    'field_name' => 'field_notes',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '48',
      'parent' => 'group_details',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Additional Notes',
      'weight' => '56',
      'description' => 'Notes about this clip beyond the fields included',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_owner
  $fields['video-field_owner'] = array(
    'field_name' => 'field_owner',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'College
Company
Creative Commons
Other',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Owner',
      'weight' => '5',
      'description' => 'Use this to categorize who created the work / owns the rights to the content',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_privacy
  $fields['video-field_privacy'] = array(
    'field_name' => 'field_privacy',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_copyright_info',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Protected to courses
Protected to a specific course
Public',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Protected to courses',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Privacy',
      'weight' => '8',
      'description' => 'Protected to courses will ensure that the video can only appear on elearning.psu.edu/courses/
Protected to a specific course will ensure that the video can only appear on elearning.psu.edu/courses/[COURSENAME]
Public will ensure that the video can appear anywhere on elearning.psu.edu',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_streaming_type
  $fields['video-field_streaming_type'] = array(
    'field_name' => 'field_streaming_type',
    'type_name' => 'video',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'On-demand Stream
Buffered Stream',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Streaming Type',
      'weight' => '34',
      'description' => 'Only change this value if you know why.  This is for specific scenarios of performance issues with global users.  The main example being troops who are deployed overseas.  In the case of that scenario, change this value to Buffered Stream and make sure the course above is marked as Progressive Download.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_trackbacks
  $fields['video-field_trackbacks'] = array(
    'field_name' => 'field_trackbacks',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '53',
      'parent' => 'group_usage',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_trackbacks][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Trackbacks',
      'weight' => '53',
      'description' => 'This list will register where the embed code has been detected in the past',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_transcript_file
  $fields['video-field_transcript_file'] = array(
    'field_name' => 'field_transcript_file',
    'type_name' => 'video',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'txt',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'label' => 'Transcript file',
      'weight' => '38',
      'description' => 'Transcript of the audio used in this asset.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_video
  $fields['video-field_video'] = array(
    'field_name' => 'field_video',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '31',
      'parent' => 'group_media',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp4 flv f4v mov',
      'file_path' => 'fmsvideo',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '1500M',
      'max_filesize_per_node' => '3000M',
      'label' => 'Video',
      'weight' => '35',
      'description' => 'Upload a prepared video to be active on the flash media interactive server',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_video_bitrate
  $fields['video-field_video_bitrate'] = array(
    'field_name' => 'field_video_bitrate',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '1',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_video_bitrate][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Bitrate',
      'weight' => '7',
      'description' => 'This helps the server know when you switch to different video qualities.  Make sure you order videos from highest to lowest',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_video_width
  $fields['video-field_video_width'] = array(
    'field_name' => 'field_video_width',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '1',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_video_width][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Width',
      'weight' => '8',
      'description' => 'This field will attempt to be automatically populated when you upload a video.  This is needed for performance and scalability reasons on the server.  If you don\'t know what to put, don\'t put anything and the system will guess.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_videothumb
  $fields['video-field_videothumb'] = array(
    'field_name' => 'field_videothumb',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '32',
      'parent' => 'group_media',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__nodesize__original',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '10M',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'eli_placeholder_video.png',
        'filepath' => 'sites/default/files/imagefield_default_images/eli_placeholder_video.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/eli_placeholder_video.png',
        'filesize' => 270242,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1282226449,
        'origname' => '',
        'fid' => '77',
      ),
      'use_default_image' => 1,
      'label' => 'Video Thumb',
      'weight' => '36',
      'description' => 'This is the thumbnail that will represent the video when it\'s shown in players and playlists',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_year
  $fields['video-field_year'] = array(
    'field_name' => 'field_year',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '45',
      'parent' => 'group_details',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '1900',
    'max' => '3000',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_year][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Year Created',
      'weight' => '55',
      'description' => 'Enter the year this video was created',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_webcam
  $fields['webcam-field_webcam'] = array(
    'field_name' => 'field_webcam',
    'type_name' => 'webcam',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'allow_video' => 1,
      'allow_snapshot' => 1,
      'default_value' => array(
        '0' => array(
          'fid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Webcam',
      'weight' => '-4',
      'description' => '',
      'type' => 'media_webcam',
      'module' => 'media_webcam',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Notes');
  t('Allowed Courses');
  t('Alt text');
  t('Assets');
  t('Associated Content');
  t('Audio');
  t('Audio Thumb');
  t('Bitrate');
  t('Caption File');
  t('Citation');
  t('Citation file');
  t('Color');
  t('Color Change');
  t('Creative Commons');
  t('File');
  t('HTML');
  t('Heading 1');
  t('Heading 2');
  t('Height');
  t('Image');
  t('Images');
  t('Lightbox');
  t('Medium');
  t('Opacity');
  t('Owner');
  t('Position');
  t('Privacy');
  t('Streaming Type');
  t('Template Name');
  t('Trackbacks');
  t('Transcript file');
  t('Transcription Status');
  t('Treatment');
  t('Type');
  t('Type of Scale');
  t('Unique ID');
  t('Units');
  t('Video');
  t('Video Thumb');
  t('Video URL');
  t('Webcam');
  t('Width');
  t('Year Created');

  return $fields;
}
