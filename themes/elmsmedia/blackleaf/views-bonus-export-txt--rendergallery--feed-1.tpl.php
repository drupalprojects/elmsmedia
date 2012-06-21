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
  $trackback = explode('/', check_plain($_GET['q']));
  $trackpath = '';
  foreach ($trackback as $key => $value) {
    if ($key > 2) {
      $trackpath.= '/'. $value; 
    }
  }
  if ($trackback[3] == 'node') {
    $trackpath = 'https://elimedia.psu.edu'. $trackpath;
  }
  else {
    $trackpath = 'https://'. $trackpath;
  }
  //not enough arguments supplied, show nothing.  This helps lock to elearing domains
  if ($trackpath == 'https://elearning.psu.edu/' || $trackpath == 'https://online.aanda.psu.edu/' || $trackpath == 'https://elms.psu.edu/') {
    exit();
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
        $images.= '<span>'. str_replace('<img','<img rel="'. $key .'"',theme('imagecache','elimedia_artistartwork',$image->field_image[0]['filepath'])) .'</span>';
        $original = 'https://elimedia.psu.edu/'. str_replace('imagecache/elimedia_artistbigartwork/','',$image->field_image[0]['filepath']);
        $imagefile = theme('imagecache','elimedia_artistbigartwork',$image->field_image[0]['filepath']);
        $bigimages.= '<div class="elimedia_artist_image elimedia_bigimage_'. $key .'">'. l($imagefile,$original,array('html' => TRUE, 'attributes' => array('rel' => 'lightbox[]['. $image->title .'<br />'. $image->field_citation[0]['value'] .']'))) .'</div>';
        $titles.= '<div class="elimedia_artist_title elimedia_artist_sans-serif elimedia_artist_white elimedia_artist_title_'. $key .'">'. $image->title .'</div>';
        $text.= '<div class="elimedia_artist_text elimedia_artist_sans-serif elimedia_artist_text_'. $key .'">'. $image->field_associated_content[0]['value'] .'</div>';
      }
      $output = '<div class="elimedia_artist_viewgallery" id="elimedia_node_'. arg(1) .'"></div>
      <div class="elimedia_artist_wrapper" id="elimedia_artist_wrapper_'. arg(1) .'">
      <div class="elimedia_artist_header">
          <div class="elimedia_artist_white elimedia_artist_serif elimedia_artist_name elimedia_artist_float-left">'. $ignode->field_heading1[0]['value'] .'</div>
            <h2 class="elimedia_artist_gray elimedia_artist_serif elimedia_artist_italic elimedia_artist_medium elimedia_artist_float-left">'. $ignode->field_heading2[0]['value'] .'</h2> 
          <div class="elimedia_artist_close"></div> <!-- /close -->
        </div> <!-- /header -->
        <div class="elimedia_artist_content-wrapper">
          <div class="elimedia_artist_content-left">
              '. $bigimages .' <!--/image -->
            </div> <!-- /content-left -->
            <div class="elimedia_artist_content-right">
                '. $titles . $text .'
            </div> <!-- /content-right -->
        </div> <!-- /content-wrapper -->
      <div class="elimedia_artist_footer-wrapper"> 
          <div class="elimedia_artist_footer-text">
              <h2 class="elimedia_artist_float-left elimedia_artist_serif elimedia_artist_white elimedia_artist_italic">Artwork Gallery</h2>
              <h3 class="elimedia_artist_float-left elimedia_artist_serif elimedia_artist_white elimedia_artist_blue">Click to learn more</h3>
                <div class="elimedia_artist_images elimedia_artist_sans-serif elimedia_artist_blue">'. $images .'</div>
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
        $output.= '<li>'. l(theme('imagecache','elimedia_fancyslide',$image->field_image[0]['filepath']),'node/'. $image->nid, array('html' => true) ) .'</li>';
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
        $original = 'https://elimedia.psu.edu/'. str_replace('imagecache/elimedia_galleria/', '', $image->field_image[0]['filepath']);
        $imagefile = theme('imagecache', 'elimedia_galleria', $image->field_image[0]['filepath']);
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
      
      /*$output.=' <li class="active"><img alt="Image01" src="https://elearning.psu.edu/courses/content/music297/image/L3_P7_Img2.jpg" /></li> <li><img alt="Image02" src="https://elearning.psu.edu/courses/content/music297/image/L3_P7_Img3.jpg" /></li> <li><img alt="Image03" src="https://elearning.psu.edu/courses/content/music297/image/L3_P7_Img4.jpg" /></li> </ul><p class="caption"><i>Atonement</i>: Scenes and shades of green: (1) the kitchen,<br />(2) Brionys bedroom, (3) green dress</p></div>';*/
    break;
    case 'basic':
      $output = '<div class="elimedia_basic"><ul>';
      //render each image
      foreach ($ignode->field_images as $key => $inid) {
        $image = node_load($inid);
        $original = 'https://elimedia.psu.edu/'. str_replace('imagecache/elimedia_basic/', '', $image->field_image[0]['filepath']);
        $imagefile = theme('imagecache', 'elimedia_basic', $image->field_image[0]['filepath']);
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
        $output.= '<li>'. l(theme('imagecache','elimedia_artistartwork',$image->field_image[0]['filepath']),'node/'. $image->nid, array('html' => true) ) .'</li>';
      }
      $output.='</ul>';
    break;
  }
   print $output;
 ?>