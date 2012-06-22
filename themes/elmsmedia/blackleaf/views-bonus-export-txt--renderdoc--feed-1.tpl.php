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

  // Basically just routing things through this view as a plain text document
  
  //arg 1 is always the file
  global $base_url;
  $docnode = node_load(arg(1));
  if ($docnode->type == 'flash') {
    $width = $docnode->field_width[0]['value'];
    $height = $docnode->field_height[0]['value'];
    if ($docnode->field_file[0]['filemime'] == 'application/zip') {
      $height2 = $height + 85.0;
      $width2 = $width + 5.0;
      $output = '<div class="elmsmedia_artist_viewgallery elmsmedia_artist_viewactivity" id="elmsmedia_node_'. arg(1) .'"></div>
      <div class="elmsmedia_artist_wrapper elmsmedia_artist_flashwrapper" style="width:'. $width2 .'px;height:'. $height2 .'px;" id="elmsmedia_artist_wrapper_'. arg(1) .'">
      <div class="elmsmedia_artist_header" style="background-position:right">
          <div class="elmsmedia_artist_white elmsmedia_artist_serif elmsmedia_artist_name elmsmedia_artist_float-left">'. $docnode->title .'</div>
          <div class="elmsmedia_artist_close"></div> <!-- /close -->
        </div> <!-- /header -->
        <div class="elmsmedia_artist_content-wrapper">
        <iframe style="overflow:hidden;" src="'. $base_url .'/'. file_directory_path() .'/flash/node'. $docnode->nid .'/player.html" width="'. $width .'" height="'. $height .'"><p>Your browser does not support iframes.</p></iframe>
        </div> <!-- /content-wrapper -->
    </div> <!-- /wrapper -->';
    }
    else {
    $output = '<object width="'. $width .'" height="'. $height .'" id="node-'. $docnode->nid .'"><param name="movie" value="'. url($docnode->field_file[0]['filepath'], array('absolute' => TRUE)) .'"><param name="quality" VALUE=high><param name="bgcolor" value="#FFFFFF"><EMBED src="'. url($docnode->field_file[0]['filepath'], array('absolute' => TRUE)) .'" quality="high" bgcolor="#FFFFFF" width="'. $width .'" height="'. $height .'" name="node-'. $docnode->nid .'" type="application/x-shockwave-flash" PLUGINSPAGE="http://www.macromedia.com/go/getflashplayer"></EMBED></OBJECT>';
    }
  }
  else {
    $output = l(t('Download '. $docnode->title), url($docnode->field_file[0]['filepath'], array('absolute' => TRUE)));
  }
  //print to screen
  print $output;
?>

<?php 
// Basically just routing things through this view as a plain text document
  //arg 1 is always the file
  $trackback = explode('/', check_plain($_GET['q']));
  $trackpath = '';
  foreach ($trackback as $key => $value) {
    if ($key > 2) {
      $trackpath.= '/'. $value; 
    }
  }
  if ($trackback[3] == 'node') {
    $trackpath = $base_url . $trackpath;
  }
  else {
    $trackpath = 'https://'. $trackpath;
  }
  $ignode = node_load(arg(1));
  //register trackback
  if (strpos($ignode->field_trackbacks[0]['value'],$trackpath) === FALSE) {
    $ignode->field_trackbacks[0]['value'].= "\n". l($trackpath,$trackpath,array('attributes' => array('target' => '_blank'))) .'<br />';
    node_save($ignode);
  }
?>