<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function elmsmedia_feature_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_gallery_type',
  'field_name' => 'field_heading2',
  'type' => 'image_gallery',
  'trigger_values' => 
  array (
    'artist_artwork' => 'artist_artwork',
  ),
);
$items[] = array (
  'control_field_name' => 'field_gallery_type',
  'field_name' => 'field_heading1',
  'type' => 'image_gallery',
  'trigger_values' => 
  array (
    'artist_artwork' => 'artist_artwork',
  ),
);
return $items;
}
