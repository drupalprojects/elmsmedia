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
      $content = l(str_replace('title=""','title="'. $fields['type']->content .'<br />Added: '. $fields['created']->content .'<br />'. $fields['tid']->content .'"',$field->content),'node/'. $fields['nid']->content,array('html'=>TRUE));
      $class = 'elmedia-top';
    }
    elseif ($id == 'type' && strip_tags($field->content) == 'Flash') {
      $popupcount = rand(50,1000);
      $content = l('<img class="imagecache imagecache-searchthumb imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" src="'. base_path() . path_to_theme() .'/images/flashfile.png" title="Flash<br />Added: '. $fields['created']->content .'<br />'. $fields['tid']->content .'" alt="Flash File" id="hover-preview-'. $popupcount .'" width="100px" height="100px" />','node/'. $fields['nid']->content,array('html'=>TRUE)) . '<a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="'. base_path() . path_to_theme() .'/images/flashfile.png"></a>';
      $class = 'elmedia-top';
    }
    elseif ($id == 'type' && strip_tags($field->content) == 'Image Gallery') {
      $popupcount = rand(50,1000);
      $content = l('<img class="imagecache imagecache-searchthumb imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" src="'. base_path() . path_to_theme() .'/images/imagegallery.png" title="Image Gallery<br />Added: '. $fields['created']->content .'<br />'. $fields['tid']->content .'" alt="Image Gallery" id="hover-preview-'. $popupcount .'" width="100px" height="100px" />','node/'. $fields['nid']->content,array('html'=>TRUE)) . '<a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="'. base_path() . path_to_theme() .'/images/imagegallery.png"></a>';
      $class = 'elmedia-top';
    }
    elseif ($id == 'type' && strip_tags($field->content) == 'Media Playlist') {
      $class = 'elmedia-top';
      $playlistnid = $fields['nid']->content;
      $node = node_load($playlistnid);
      $count = 0;
      $assetcount = count($node->field_assetlist);
      switch ($assetcount) {
        case '1':
          $imgcacheset = 'searchthumb';
          $assetw = '100px';
          $asseth = '100px';
        break;
        case '2':
          $imgcacheset = 'widesearchthumb';
          $assetw = '100px';
          $asseth = '50px';
        break;
        case '3':
          $imgcacheset = 'thinsearchthumb';
          $assetw = '100px';
          $asseth = '33.3px';
        break;
        default:
          $imgcacheset = 'minisearchthumb';
          $assetw = '50px';
          $asseth = '50px';
        break;
      }
      foreach ($node->field_assetlist as $itempos => $item) {
        if ($count < 4) {
          $count++;
          $popupcount = rand(50,1000);
          $asset_node = node_load($item['nid']);
          $typename = db_result(db_query("SELECT name FROM {node_type} WHERE type='%s'",$asset_node->type));
          if ($asset_node->type == 'video') {
            $content.= '<a href="'. base_path() . 'node/'. $playlistnid .'"><img src="/sites/default/files/imagecache/'. $imgcacheset .'/'. $asset_node->field_videothumb[0]['filename'] .'" vspace="0px" hspace="0px" style="float:left;" id="hover-preview-'. $popupcount .'" class="imagecache imagecache-'. $imgcacheset .' imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" title="'. $typename .'<br/>Playlist Item: '. ($itempos+1) .'<br />Added: '. date('m/d/y',$asset_node->created) .'" /></a><a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="/sites/default/files/imagecache/searchpopup/'. $asset_node->field_videothumb[0]['filename'] .'"></a>';
          }
          elseif ($asset_node->type == 'audio') {
            $content.= '<a href="'. base_path() . 'node/'. $playlistnid .'"><img src="/sites/default/files/imagecache/'. $imgcacheset .'/'. $asset_node->field_audiothumb[0]['filename'] .'" vspace="0px"  hspace="0px" style="float:left;" id="hover-preview-'. $popupcount .'" class="imagecache imagecache-'. $imgcacheset .' imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" title="'. $typename .'<br/>Playlist Item: '. ($itempos+1) .'<br />Added: '. date('m/d/y',$asset_node->created) .'" /></a><a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="/sites/default/files/imagecache/searchpopup/'. $asset_node->field_audiothumb[0]['filename'] .'"></a>';
          }
          elseif ($asset_node->type == 'external_video') {
            $image_path = str_replace('http://www.youtube.com/watch?v=','',$asset_node->field_video_url[0]['embed']);
            $content.= '<a href="'. base_path() . 'node/'. $playlistnid .'"><img src="http://img.youtube.com/vi/'. $image_path .'/1.jpg" width="'. $assetw .'" height="'. $asseth .'" style="float:left;" alt="YouTube Video" title="YouTube<br/>Playlist Item: '. ($itempos+1) .'<br />Added: '. date('m/d/y',$asset_node->created) .'" vspace="0px" hspace="0px" id="hover-preview-'. $popupcount .'" class="imagecache imagecache-'. $imgcacheset .' imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" /></a><a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="http://img.youtube.com/vi/'. $image_path .'/0.jpg">';
          }
        }
      }
    }
    elseif ($id == 'type' && strip_tags($field->content) == 'External Video') {
      $class = 'elmedia-top';
      $exnid = $fields['nid']->content;
      $extasset = node_load($exnid);
      $popupcount = rand(50,1000);
      $image_path = str_replace('http://www.youtube.com/watch?v=','',$extasset->field_video_url[0]['embed']);
      $content = '<a href="'. base_path() . 'node/'. $exnid .'"><img src="http://img.youtube.com/vi/'. $image_path .'/1.jpg" width="100" height="100" alt="YouTube Video" title="YouTube Video<br/>Added: '. $fields['created']->content .'" id="hover-preview-'. $popupcount .'" class="imagecache imagecache-searchthumb imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" /></a><a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="http://img.youtube.com/vi/'. $image_path .'/0.jpg"></a>';
    }
    elseif ($id == 'type' && strip_tags($field->content) == 'Document') {
      $class = 'elmedia-top';
      //detect type and output correct image
      $popupcount = rand(50,1000);
      $docnode = node_load($fields['nid']->content);
      $extension = explode('.',$docnode->field_file[0]['filename']);
      switch ($extension[1]) {
        case '3ds':
        case 'ai':
        case 'doc':
        case 'docx':
        case 'eps':
        case 'indd':
        case 'max':
        case 'otf':
        case 'pdf':
        case 'ppt':
        case 'pptx':
        case 'psd':
        case 'rtf':
        case 'tar':
        case 'ttf':
        case 'txt':
        case 'xls':
        case 'xlsx':
        case 'xml':
        case 'zip':
          $docimg = $extension[1];
        break;
        default:
          $docimg = 'unknown';
        break;
      }
      $image_path = base_path() . 'sites/default/files/document-'. $docimg .'.png';
      $content = '<a href="'. base_path() . 'node/'. $fields['nid']->content .'"><img src="'. $image_path .'" width="100" height="100" alt="Document" title="Document<br/>Added: '. $fields['created']->content .'" id="hover-preview-'. $popupcount .'" class="imagecache imagecache-searchthumb imagecache-default imagecache-searchthumb_hover_preview_searchpopup hover-preview" /></a><a id="hover-preview-'. $popupcount .'-url" style="display: none;" class="hover-preview-preview-url" href="'. $image_path .'"></a>';
    }
    elseif ($id == 'title') {
      $content = $field->content;
    }
  if (!empty($content)): ?>
    <div class="field-content <?php print $class; ?> views-field-<?php print $field->class; ?>"><?php print $content; ?></div>
  <?php endif;?>
<?php endforeach; ?>