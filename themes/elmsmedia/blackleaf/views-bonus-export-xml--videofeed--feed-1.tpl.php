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
      if ($label != 'nid') {
        if ($label == 'jwplayer:file') {
          $image_path = str_replace('http://www.youtube.com/watch?v=','',$content);
          $content = str_replace(file_directory_path() .'/','',$content);
        }
        elseif ($label == 'jwplayer:provider') {
          $external_provider = TRUE;
          if ($content == 'YouTube') {
            $output.= '<jwplayer:image>http://img.youtube.com/vi/'. $image_path .'/0.jpg</jwplayer:image>'."\n";
          }
        }
        $output.= '<'. $label .'>'. $content .'</'. $label .'>'."\n"; 
      }
      else {
        $node = node_load($content);
        $videos = '';
    if ($node->type == 'webcam') {
          foreach($node->field_webcam as $key => $video) {
            //path to the video
            $vidpath = str_replace(file_directory_path() .'/','',$video['filepath']);
            $videos.= '<media:content url="'. $vidpath .'" />'."\n";
          }
          $output.= '<media:group>'."\n". $videos .'</media:group>'."\n";
        }
        elseif ($node->type == 'video') {
          if ($node->field_streaming_type[0]['value'] == 'Buffered Stream') {
            $vidpath = $node->field_video[0]['filepath'];
            $output.= '<jwplayer:file>'. $base_url .'/'. $vidpath .'</jwplayer:file>'."\n";
      $external_provider = TRUE;
          }
          else {
            foreach($node->field_video as $key => $video) {
              //path to the video
              $vidpath = str_replace(file_directory_path() .'/','',$video['filepath']);
              //if a width / bitrate were found on upload then use them, else use the 'best guess' method
              if ($node->field_video_bitrate[$key]['value'] != 0) {
                $video_bitrate = $node->field_video_bitrate[$key]['value'];
              }
              else {
                $video_bitrate = $asset_ary[$key]['bitrate'];
              }
              if ($node->field_video_width[$key]['value'] != 0) {
                $video_width = $node->field_video_width[$key]['value'];
              }
              else {
                $video_width = $asset_ary[$key]['width'];
              }
              $videos.= '<media:content bitrate="'. $video_bitrate .'" width="'. $video_width .'" url="'. $vidpath .'" />'."\n";
            }
            $output.= '<media:group>'."\n". $videos .'</media:group>'."\n";
          }
        }
      }
    }
  endforeach;
   ?>
<?php 
/*
if (!$external_provider) {
  $output.= '<jwplayer:provider>rtmp</jwplayer:provider> 
<jwplayer:streamer>rtmp://elmsmedia.psu.edu/vod</jwplayer:streamer>'."\n";
}*/
$output.= '</item>'."\n";
//if they don't, don't display anything
//if they do, and arg(2) is course, then only display content that says lock down to courses
// arg(3) will be the actual course so if content says that it can only be displayed within the course then make sure it's taken out as well
$location = arg(2);
$course = arg(3);
if ($node->type == 'webcam') {
  print $output;  
}
elseif ($external_provider) {
  print $output;
}
elseif ($node->field_privacy[0]['value'] == 'Public') {
  print $output;
}
elseif ($node->field_privacy[0]['value'] == 'Protected to courses' && $location == 'courses') {
  print $output;
}
elseif ($node->field_privacy[0]['value'] == 'Protected to a specific course' && $location == 'courses') {
  //need to check in the "array" for the course
  $allowed_courses = explode(' ',$node->field_allowed_courses[0]['value']);
  if (in_array($course,$allowed_courses)) {
    print $output;
  }
}
endforeach; ?>
</channel>
</rss>
<?php 
  // build the trackback
  $trackpath = arg(2) .'/'. arg(3) .'/'. arg(4) .'/'. arg(5);
  $ignode = node_load(arg(1));
  // register trackback if not set already
  if (strpos($ignode->field_trackbacks[0]['value'], $trackpath) === FALSE) {
    $ignode->field_trackbacks[0]['value'].= "\n". l($trackpath, $trackpath, array('attributes' => array('target' => '_blank'))) .'<br />';
    node_save($ignode);
  }
?>