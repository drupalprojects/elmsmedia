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
  
  // arg 1 is always the image, arg 2 is always the template
  $imagenode = node_load(check_plain(arg(1)));
  // template title
  $templatenode = node_load(db_result(db_query("SELECT nid FROM {node} WHERE title='%s' AND type='image_treatment'",check_plain(arg(2)))));
  // need to know if we're viewing on the ELImedia site; in which case we shouldn't cache anything
  $skip_cache = check_plain(arg(3));
  if ($skip_cache == 'yes') {
    $skip_cache = TRUE;
  }
  else {
    $skip_cache = FALSE;
  }
  // see if the optional specialized class came across
  $class = check_plain($_GET['style']);
  if (empty($class)) {
    $class = '';
  }
  else {
    $class .= ' ';
  }
  $class .= check_plain($_GET['align']);
  if (empty($class)) {
    $class = '';
  }
  // check for footnote property
  if (isset($_GET['footnote'])) {
    $footnote_num = check_plain($_GET['footnote']);
    // special case for citation
    if ($templatenode->title != 'citation' && $footnote_num != '') {
      $footnote = '<a name="nrhi_footnotes_body_item" id="elms_footnote_'. $footnote_num .'" class="nrhi_body_item">'. $footnote_num .'</a>';
    }
    else {
      $footnote = $footnote_num;
    }
  }
  else {
    $footnote_num = '';
    $footnote = '';
  }
  // additional args
  $lightbox = $templatenode->field_lightbox[0]['value'];
  // boot up the template and perform the replacements with the values from the image node
  $output = $templatenode->field_template[0]['value'];
  // search criteria
  $search = array('%image','%title','%citation','%year','%notes','%class', '%footnote');
  $preset = _elimedia_clean_title($templatenode->title);
  // image node values
  $title = $imagenode->title;
  $citation = $imagenode->field_citation[0]['value'];
  $year = $imagenode->field_year[0]['value'];
  $notes = $imagenode->field_notes[0]['value'];
  // allow for custom alt text
  if (isset($imagenode->field_alttext) && $imagenode->field_alttext[0]['value'] != '') {
    $alt = $imagenode->field_alttext[0]['value'];
  }
  else {
    $alt = $imagenode->title .' - '. $citation;
  }
  $imagepath = imagecache_create_url($preset, $imagenode->field_image[0]['filepath'],$skip_cache);
  $image = '<img src="'. $imagepath .'" alt="'. check_plain($alt) .'" title="'. check_plain($title) .'" class="'. $preset .'" />';
  // replace with imagepath since it's got the no cache metric
  // check for lightbox status
  if ($lightbox) {
    $original = str_replace('imagecache/'. $preset .'/','',$imagepath);
    $image = l($image,$original,array('html' => TRUE, 'attributes' => array('rel' => 'lightbox[]['. $imagenode->title .'<br />'. $citation .']')));
  }
  // replace criteria assembled
  $replace = array($image, $title, $citation, $year, $notes, $class, $footnote);
  // replace the tokens
  $output = str_replace($search,$replace,$output);
  // append anchor of accessibility
  if ($templatenode->title != 'citation' && $footnote_num != '') {
    $output = '<a id="elms_footnote_'. $footnote_num .'"></a>'. $output;
  }
  else {
    //<a href="#elms_footnote_%footnote">
    if ($footnote_num != '') {
    $output = '<a href="#elms_footnote_'. $footnote_num .'">'. $output .'</a>';
    }
  }
  // print to screen
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
    $trackpath = 'https://elimedia.psu.edu'. $trackpath;
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