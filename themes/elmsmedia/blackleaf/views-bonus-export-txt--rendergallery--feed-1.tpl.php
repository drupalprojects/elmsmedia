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
/* global $user;
 if($user-uid == 1){
  print_r(arg()); 
  exit;
 }*/

  // Basically just routing things through this view as a plain text document
  //arg 1 is always the file
  global $base_url;
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
  $output = '';
  //render based on gallery type
  switch ($ignode->field_gallery_type[0]['value']) {
    case 'artist_artwork':
      //render each image
      foreach ($ignode->field_images as $key => $inid) {
        $image = node_load($inid);
        $images.= '<span>'. str_replace('<img','<img rel="'. $key .'"',theme('imagecache','elmsmedia_artistartwork',$image->field_image[0]['filepath'])) .'</span>';
        $original = $base_url .'/'. str_replace('imagecache/elmsmedia_artistbigartwork/','',$image->field_image[0]['filepath']);
        $imagefile = theme('imagecache','elmsmedia_artistbigartwork',$image->field_image[0]['filepath']);
        $bigimages.= '<div class="elmsmedia_artist_image elmsmedia_bigimage_'. $key .'">'. l($imagefile,$original,array('html' => TRUE, 'attributes' => array('rel' => 'lightbox[]['. $image->title .'<br />'. $image->field_citation[0]['value'] .']'))) .'</div>';
        $titles.= '<div class="elmsmedia_artist_title elmsmedia_artist_sans-serif elmsmedia_artist_white elmsmedia_artist_title_'. $key .'">'. $image->title .'</div>';
        $text.= '<div class="elmsmedia_artist_text elmsmedia_artist_sans-serif elmsmedia_artist_text_'. $key .'">'. $image->field_associated_content[0]['value'] .'</div>';
      }
      $output = '<div class="elmsmedia_artist_viewgallery" id="elmsmedia_node_'. arg(1) .'"></div>
      <div class="elmsmedia_artist_wrapper" id="elmsmedia_artist_wrapper_'. arg(1) .'">
      <div class="elmsmedia_artist_header">
          <div class="elmsmedia_artist_white elmsmedia_artist_serif elmsmedia_artist_name elmsmedia_artist_float-left">'. $ignode->field_heading1[0]['value'] .'</div>
            <h2 class="elmsmedia_artist_gray elmsmedia_artist_serif elmsmedia_artist_italic elmsmedia_artist_medium elmsmedia_artist_float-left">'. $ignode->field_heading2[0]['value'] .'</h2> 
          <div class="elmsmedia_artist_close"></div> <!-- /close -->
        </div> <!-- /header -->
        <div class="elmsmedia_artist_content-wrapper">
          <div class="elmsmedia_artist_content-left">
              '. $bigimages .' <!--/image -->
            </div> <!-- /content-left -->
            <div class="elmsmedia_artist_content-right">
                '. $titles . $text .'
            </div> <!-- /content-right -->
        </div> <!-- /content-wrapper -->
      <div class="elmsmedia_artist_footer-wrapper"> 
          <div class="elmsmedia_artist_footer-text">
              <h2 class="elmsmedia_artist_float-left elmsmedia_artist_serif elmsmedia_artist_white elmsmedia_artist_italic">Artwork Gallery</h2>
              <h3 class="elmsmedia_artist_float-left elmsmedia_artist_serif elmsmedia_artist_white elmsmedia_artist_blue">Click to learn more</h3>
                <div class="elmsmedia_artist_images elmsmedia_artist_sans-serif elmsmedia_artist_blue">'. $images .'</div>
            </div>
        </div><!-- /footer-wrapper -->
    
    </div> <!-- /wrapper -->';
    break;
    case 'fancy_slide':
      $output = '<div id="fancy-slide-'. $ignode->nid .'" class="fancy-slide" style="width: 400px; height: 225px">
    <ul>';
      //render each image
      foreach ($ignode->field_images as $inid) {
        $image = node_load($inid);
        $output.= '<li>'. l(theme('imagecache','elmsmedia_fancyslide',$image->field_image[0]['filepath']),'node/'. $image->nid, array('html' => true) ) .'</li>';
      }
      $output.='</ul>
      </div>
      <script type="text/javascript">
        $(document).ready(function() {
          $("#fancy-slide-'. $ignode->nid .'").fancySlide({
            animation: "slide", continuous: true, showControls: true, slideControls: true, speed: 5000, vertical: false, pause: 500
          });
        });
      </script>';
    break;
    case 'galleria':
      $output.='<div class="galleria-block"><ul class="gallery">';
      //render each image
      foreach ($ignode->field_images as $key => $inid) {
        $image = node_load($inid);
        $original = $base_url .'/'. str_replace('imagecache/elmsmedia_galleria/', '', $image->field_image[0]['filepath']);
        $imagefile = theme('imagecache', 'elmsmedia_galleria', $image->field_image[0]['filepath']);
        $imagefile = str_replace('<img','<img alt="Image0'. ($key+1).'"', $imagefile);
        if($key == 0) {
          $output.= '<li class="active">'. $imagefile .'</li>';
        }
        else {
          $output.= '<li>'. $imagefile .'</li>';
        }
        $caption.='('.($key+1).') '. $image->title .' ';
        
      }
      $output.= '</ul><p class="caption"><i>'. $ignode->title .'</i>:'. $caption .'</p></div>';
    break;
    case 'basic':
      $output = '<div class="elmsmedia_basic"><ul>';
      //render each image
      foreach ($ignode->field_images as $key => $inid) {
        $image = node_load($inid);
        $original = $base_url .'/'. str_replace('imagecache/elmsmedia_basic/', '', $image->field_image[0]['filepath']);
        $imagefile = theme('imagecache', 'elmsmedia_basic', $image->field_image[0]['filepath']);
        $imagefile = str_replace('alt=""', 'alt="'. $image->title .'"', $imagefile);
        $imagefile = str_replace('title=""', 'title="'. $image->title .'"', $imagefile);
        $output.= '<li>'. l($imagefile, $original, array('html' => TRUE, 'attributes' => array('rel' => 'lightbox[]['. $image->title .'<br />'. $image->field_associated_content[0]['value'] .'<br />'. $image->field_citation[0]['value'] .']'))) .'</li>';
        
      }
      $output.= '</ul></div>';
    break;
    default:
      $output = '<ul>';
      //render each image
      foreach ($ignode->field_images as $inid) {
        $image = node_load($inid);
        $output.= '<li>'. l(theme('imagecache','elmsmedia_artistartwork',$image->field_image[0]['filepath']),'node/'. $image->nid, array('html' => true) ) .'</li>';
      }
      $output.='</ul>';
    break;
  }
   print $output;
 ?>