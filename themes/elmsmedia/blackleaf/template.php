<?php

/**
 * Implements template_preprocess_page().
 */
function blackleaf_preprocess_page(&$vars) {
  // split $tabs variable into separate variables and make available to page.tpl.php
  $vars['primary_tabs'] = menu_primary_local_tasks();
  if ($vars['primary_tabs'])
    $vars['primary_tabs'] = '<ul class="tabs primary">' . $vars['primary_tabs'] . '</ul>';
    
  $vars['secondary_tabs'] = menu_secondary_local_tasks();
  if ($vars['secondary_tabs'])
    $vars['secondary_tabs'] = '<ul class="tabs secondary">' . $vars['secondary_tabs'] . '</ul>';
}

?>