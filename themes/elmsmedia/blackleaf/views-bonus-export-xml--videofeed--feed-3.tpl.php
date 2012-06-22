<?php
// $Id: views-bonus-export-xml.tpl.php,v 1.2 2009/06/24 17:27:53 neclimdul Exp $
/**
 * @file views-view-table.tpl.php
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $rows: An array of row items. Each row is an array of content
 *   keyed by field ID.
 * - $header: an array of headers(labels) for fields.
 * - $themed_rows: a array of rows with themed fields.
 * @ingroup views_templates
 */

// Short tags act bad below in the html so we print it here.
global $base_url;
?>
<rss version="2.0" xmlns:media="http://search.yahoo.com/mrss/" xmlns:jwplayer="http://developer.longtailvideo.com/">
<channel>
<title>Playlist</title>
<?php 
$asset_ary = array(
  0 => array(
    'bitrate' => '10000',
    'width' => '1080',
  ),
  1 => array(
    'bitrate' => '7500',
    'width' => '720',
  ),
  2 => array(
    'bitrate' => '5000',
    'width' => '480',
  ),
  3 => array(
    'bitrate' => '2500',
    'width' => '320',
  ),
  4 => array(
    'bitrate' => '1000',
    'width' => '240',
  ),
);
  foreach ($themed_rows as $count => $row): 
    $assets = '';
    $external_provider = FALSE;
    $output = '<item>'."\n";
    foreach ($row as $field => $content):
    $label = $header[$field] ? $header[$field] : $field;
    if ($content != '') {
      if ($label != 'Nid') {
        $output.= '<'. $label .'>'. $content .'</'. $label .'>'."\n"; 
      }
      else {
        $node = node_load($content);
        $videos = '';
        if ($node->type == 'webcam') {
            foreach($node->field_webcam as $key => $video) {
              //path to the video
              $vidpath = str_replace(file_directory_path() .'/', '', $video['filepath']);
              $videos.= '<media:content url="'. $vidpath .'" />'."\n";
            }
            $output.= '<media:group>'."\n". $videos .'</media:group>'."\n";
          }
      }
    }
  endforeach;
   ?>
<?php 

  /*$output.= '<jwplayer:image>'. $base_url .'/'. file_directory_path() .'/webcam_default.png</jwplayer:image>
<jwplayer:provider>rtmp</jwplayer:provider> 
<jwplayer:streamer>rtmp://elmsmedia.psu.edu/vod</jwplayer:streamer>'."\n";*/
  $output.= '<jwplayer:image>'. $base_url .'/'. file_directory_path() .'/webcam_default.png</jwplayer:image>'."\n";
$output.= '</item>'."\n";
print $output;
endforeach; ?>
</channel>
</rss>