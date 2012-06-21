<?php
// $Id: views-view-field.tpl.php,v 1.1 2008/05/16 22:22:32 merlinofchaos Exp $
 /**
  * This template is used to print a single field in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
  *
  * Variables available:
  * - $view: The view object
  * - $field: The field handler object that can process the input
  * - $row: The raw SQL result that can be used
  * - $output: The processed output that will normally be used.
  *
  * When fetching output from the $row, this construct should be used:
  * $data = $row->{$field->field_alias}
  *
  * The above will guarantee that you'll always get the correct data,
  * regardless of any changes in the aliasing that might happen if
  * the view is modified.
  */
?>
<?php 
  switch($output){
    case 'All Rights Reserved (None)':
    print '<span alt="'. $output .'" title="'. $output .'">&copy;</span>';
  break;
  case 'Attribution':
    print '<img src="'. drupal_get_path('module','elimedia') .'/ccimages/by.png" title="Creative Commons '. $output .'" alt="Creative Commons '. $output .'"/>';
  break;
  case 'Attribution-Share Alike':
    print '<img src="'. drupal_get_path('module','elimedia') .'/ccimages/bysa.png" title="Creative Commons '. $output .'" alt="Creative Commons '. $output .'"/>';
  break;
  case 'Attribution-No Derivatives':
    print '<img src="'. drupal_get_path('module','elimedia') .'/ccimages/bynd.png" title="Creative Commons '. $output .'" alt="Creative Commons '. $output .'"/>';
  break;
  case 'Attribution-Noncommercial':
    print '<img src="'. drupal_get_path('module','elimedia') .'/ccimages/bync.png" title="Creative Commons '. $output .'" alt="Creative Commons '. $output .'"/>';
  break;
  case 'Attribution-Noncommercial-Share Alike':
    print '<img src="'. drupal_get_path('module','elimedia') .'/ccimages/byncsa.png" title="Creative Commons '. $output .'" alt="Creative Commons '. $output .'"/>';
  break;
  case 'Attribution-Noncommercial No Derivative Works':
    print '<img src="'. drupal_get_path('module','elimedia') .'/ccimages/byncnd.png" title="Creative Commons '. $output .'" alt="Creative Commons '. $output .'"/>';
  break;
  case 'Public Domain':
    print '<img src="'. drupal_get_path('module','elimedia') .'/ccimages/cc0.png" title="C'. $output .'" alt="'. $output .'"/>';
  break;
  default:
    print $output;
  break;
  }
?>