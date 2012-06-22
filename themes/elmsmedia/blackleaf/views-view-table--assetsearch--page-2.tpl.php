<?php
// $Id: views-view-table.tpl.php,v 1.8 2009/01/28 00:43:43 merlinofchaos Exp $
/**
 * @file views-view-table.tpl.php
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $class: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * @ingroup views_templates
 */
?>
<table class="<?php print $class; ?>">
  <?php if (!empty($title)) : ?>
    <caption><?php print $title; ?></caption>
  <?php endif; ?>
  <thead>
    <tr>
      <?php foreach ($header as $field => $label): 
        if ($label != 'Nid') {
      ?>
        <th class="views-field views-field-<?php print $fields[$field]; ?>">
          <?php print $label; ?>
        </th>
      <?php 
        }
      endforeach; ?>
    </tr>
  </thead>
  <tbody>
    <?php 
    $popupcount = 100;
    foreach ($rows as $count => $row): ?>
      <tr class="<?php print implode(' ', $row_classes[$count]); ?>">
        <?php 
        foreach ($row as $field => $content): 
          if (strip_tags($row['type']) == 'Playlist' && $field == 'field_audiothumb_fid') {
            $playlistnid = $row['nid'];
            $node = node_load($playlistnid);
            $count = 0;
            foreach ($node->field_assetlist as $id => $item) {
              if ($count < 9) {
                $count++;
                $asset_node = node_load($item['nid']);
                if ($asset_node->type == 'video') {
                  $content.= '<img src="/'. file_directory_path() .'/imagecache/minisearchthumb/'. $asset_node->field_videothumb[0]['filename'] .'" hspace="2px" id="hover-preview-'. $popupcount .'" class="imagecache imagecache-searchthumb imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" /><a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="/'. file_directory_path() .'/imagecache/searchpopup/'. $asset_node->field_videothumb[0]['filename'] .'"></a>';
                  $popupcount--;
                }
                elseif ($asset_node->type == 'audio') {
                  $content.= '<img src="/'. file_directory_path() .'/imagecache/minisearchthumb/'. $asset_node->field_audiothumb[0]['filename'] .'" hspace="2px" id="hover-preview-'. $popupcount .'" class="imagecache imagecache-searchthumb imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" /><a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="/'. file_directory_path() .'/imagecache/searchpopup/'. $asset_node->field_audiothumb[0]['filename'] .'"></a>';
                  $popupcount--;
                }
                elseif ($asset_node->type == 'external_video') {
                  $image_path = str_replace('http://www.youtube.com/watch?v=','',$asset_node->field_video_url[0]['embed']);
                  $content.= '<img src="http://img.youtube.com/vi/'. $image_path .'/1.jpg" width="28" height="15" alt="YouTube Video" title="YouTube Video" hspace="2px" id="hover-preview-'. $popupcount .'" class="imagecache imagecache-searchthumb imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" /><a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="http://img.youtube.com/vi/'. $image_path .'/0.jpg">';
                  $popupcount--;
                }
              }
            }
          }
          elseif (strip_tags($row['type']) == 'External Video YouTube' && $field == 'field_audiothumb_fid') {
            $exnid = $row['nid'];
            $extasset = node_load($exnid);
            $image_path = str_replace('http://www.youtube.com/watch?v=','',$extasset->field_video_url[0]['embed']);
                $content = '<img src="http://img.youtube.com/vi/'. $image_path .'/1.jpg" width="94" height="52" alt="YouTube Video" title="YouTube Video" id="hover-preview-'. $popupcount .'" class="imagecache imagecache-searchthumb imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" /><a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="http://img.youtube.com/vi/'. $image_path .'/0.jpg"></a>';      
                $popupcount--;
          }
          if ($field != 'nid') {
        ?>
          <td class="views-field views-field-<?php print $fields[$field]; ?>">
            <?php print $content; ?>
          </td>
        <?php
          }
          endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
