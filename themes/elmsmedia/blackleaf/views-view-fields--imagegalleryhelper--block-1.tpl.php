<?php
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
?>
<?php foreach ($fields as $id => $field):
    $content = '';
    $class = '';
    if (($id == 'field_audiothumb_fid' || $id == 'field_videothumb_fid' || $id == 'field_image_fid') && $field->content != '') {
      $content = str_replace('title=""','title="'. $fields['type']->content .'<br />Added: '. $fields['created']->content .'<br />'. $fields['tid']->content .'"',$field->content);
      $class = 'elmsmedia-top elmsmedia-gallery-img-ref elmsmedia-gallery-ref';
    }
    elseif ($id == 'title') {
      $content = $field->content;
      $class = 'elmsmedia-gallery-ref';
    }
  if (!empty($content)): ?>
    <div class="field-content <?php print $class; ?> views-field-<?php print $field->class; ?>"><?php print $content; ?></div>
  <?php endif;?>
<?php endforeach; ?>