<?php
/**
 * @file
 * uro_home_image.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function uro_home_image_image_default_styles() {
  $styles = array();

  // Exported image style: home_feature.
  $styles['home_feature'] = array(
    'label' => 'Home feature (880x500)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 880,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      3 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 880,
          'height' => 500,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
