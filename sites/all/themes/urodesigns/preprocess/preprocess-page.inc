<?php

/**
 * @file
 * Page preprocessing.
 */

/**
 * Preprocess page display.
 */
function gopgolf_kickstart_alpha_preprocess_page(&$vars) {
  if ($vars['is_front']) {
    unset($vars['page']['content']['content']['content']['system_main']['default_message']);
  }
  
  
  // add a noindex while site is in development
  
  $element = array(
      '#tag' => 'meta', 
      '#attributes' => array(
        'name' => 'robots', 
        'content' => 'noindex',
      ),
    );
  
  drupal_add_html_head($element, 'mytheme_noindex');
  
}
