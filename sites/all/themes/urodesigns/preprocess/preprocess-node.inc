<?php

/**
 * @file
 * Page preprocessing.
 */

/**
 * Preprocess page display.
 */
function gopgolf_kickstart_alpha_preprocess_node(&$vars) {
  
  $vars['nodehandler'] = 'base';

  if (!empty($vars['node']) && $vars['node']->type == 'golf_flag_display') {
    $vars['nodehandler'] = 'flag';
  } 
  
  if (!empty($vars['node']) && $vars['node']->type == 'golf_flag_2_color_display') {
    $vars['nodehandler'] = 'flag';
  } 
  
  if (!empty($vars['node']) && $vars['node']->type == 'golf_signs') {
    $vars['nodehandler'] = 'flag';
  } 
  
    if (!empty($vars['node']) && $vars['node']->type == 'basic_product') {
    $vars['nodehandler'] = 'basic';
  } 
  // add theme handlers
    
  $menu_object = menu_get_object();
  if (isset($menu_object->type) && $vars['node'] == 'content') {
    if (isset($menu_object->type)) {
      $vars['theme_hook_suggestions'][] = 'node__' . $menu_object->type;
    }
  }


}
