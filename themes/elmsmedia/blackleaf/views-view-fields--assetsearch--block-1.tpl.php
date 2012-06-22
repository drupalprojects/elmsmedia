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
      $class = 'elmsmedia-top elmsmedia-playlist-img-ref elmsmedia-playlist-ref';
    }
    elseif ($id == 'type' && strip_tags($field->content) == 'External Video') {
      $class = 'elmsmedia-top elmsmedia-playlist-img-ref elmsmedia-playlist-ref';
      $exnid = $fields['nid']->content;
      $extasset = node_load($exnid);
      $popupcount = rand(50,1000);
      $image_path = str_replace('http://www.youtube.com/watch?v=','',$extasset->field_video_url[0]['embed']);
      $content = '<img src="http://img.youtube.com/vi/'. $image_path .'/1.jpg" width="100" height="100" alt="YouTube Video" title="YouTube Video<br/>Added: '. $fields['created']->content .'" id="hover-preview-'. $popupcount .'" class="imagecache imagecache-searchthumb imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" /><a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="http://img.youtube.com/vi/'. $image_path .'/0.jpg"></a>';
    }
    elseif ($id == 'title') {
      $content = $field->content;
      $class = 'elmsmedia-playlist-ref';
    }
  if (!empty($content)): ?>
    <div class="field-content <?php print $class; ?> views-field-<?php print $field->class; ?>"><?php print $content; ?></div>
  <?php endif;?>
<?php endforeach; ?>