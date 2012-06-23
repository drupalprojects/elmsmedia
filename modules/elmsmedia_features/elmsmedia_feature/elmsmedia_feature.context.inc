<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function elmsmedia_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'elmsmedia-gallery';
  $context->description = 'Gallery mini search block';
  $context->tag = 'ELMS Media';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'image_gallery' => 'image_gallery',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-imagegalleryhelper-block_1' => array(
          'module' => 'views',
          'delta' => 'imagegalleryhelper-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('ELMS Media');
  t('Gallery mini search block');
  $export['elmsmedia-gallery'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'elmsmedia-interface';
  $context->description = 'Blocks for the standard navigation areas';
  $context->tag = 'ELMS Media';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-0' => array(
          'module' => 'system',
          'delta' => 0,
          'region' => 'footer',
          'weight' => 0,
        ),
        'menu-menu-sysadmin' => array(
          'module' => 'menu',
          'delta' => 'menu-sysadmin',
          'region' => 'admin',
          'weight' => 0,
        ),
        'masquerade-0' => array(
          'module' => 'masquerade',
          'delta' => 0,
          'region' => 'admin',
          'weight' => 1,
        ),
        'menu-primary-links' => array(
          'module' => 'menu',
          'delta' => 'primary-links',
          'region' => 'upload_btn',
          'weight' => 0,
        ),
        'menu-menu-3rdlevel' => array(
          'module' => 'menu',
          'delta' => 'menu-3rdlevel',
          'region' => 'asset',
          'weight' => 0,
        ),
        'elmsmedia-0' => array(
          'module' => 'elmsmedia',
          'delta' => 0,
          'region' => 'left_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for the standard navigation areas');
  t('ELMS Media');
  $export['elmsmedia-interface'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'elmsmedia-playlist';
  $context->description = 'Play list mini search block';
  $context->tag = 'ELMS Media';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'playlist' => 'playlist',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-assetsearch-block_1' => array(
          'module' => 'views',
          'delta' => 'assetsearch-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('ELMS Media');
  t('Play list mini search block');
  $export['elmsmedia-playlist'] = $context;

  return $export;
}
