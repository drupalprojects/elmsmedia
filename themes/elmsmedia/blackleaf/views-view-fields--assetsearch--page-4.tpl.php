<?php
//SPECIFIC VIEW FOR IMAGE TREATMENT RENDERING

// $Id: views-view-fields.tpl.php,v 1.6 2008/09/24 22:48:21 merlinofchaos Exp $
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->separator: an optional separator that may appear before a field.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
 global $base_url;
?>
<?php foreach ($fields as $id => $field):
    $content = '';
    $class = '';
    if ($id == 'nid') {
      $settings = array(
        'config' => strip_tags($fields['title']->content) .'/yes',
        'image' => $base_url .'/renderimage/70',
      );
      $content = theme('elms_media_helper_render',$settings);
      $class = 'elmedia-top image-treatment-spacer';
    }
    elseif ($id == 'title') {
      $content = $field->content;
    }
  if (!empty($content)): ?>
    <div class="field-content <?php print $class; ?> views-field-<?php print $field->class; ?>"><?php print $content; ?></div>
  <?php endif;?>
<?php endforeach; ?>