// JavaScript Document
$(document).ready(function(){
  //clean up the form so options for width are only shown if they should be
  $('#edit-field-scale-type-value').change(function(){
    if ($(this).val() != 'none') {
      $('#edit-field-width-0-value-wrapper').css('display','block');
      $('#edit-field-height-0-value-wrapper').css('display','block');
      $('#edit-field-units-value-wrapper').css('display','block');
    }
    else {
      $('#edit-field-width-0-value-wrapper').css('display','none');
      $('#edit-field-height-0-value-wrapper').css('display','none');
      $('#edit-field-units-value-wrapper').css('display','none');
      if ($('#edit-field-width-0-value').val() == '') {
        $('#edit-field-width-0-value').val(0);
        $('#edit-field-height-0-value').val(0);
      }
    }
  });
  $('#edit-field-scale-type-value').change();
  //clean up the form so that values for color shift are only shown if the option is selected
  $('#edit-field-color-change-value').change(function(){
    if ($('#edit-field-color-change-value').val() == 'imagecache_colorshift') {
      $('#edit-field-color-0-value-wrapper').css('display','block');
    }
    else {
      $('#edit-field-color-0-value-wrapper').css('display','none');
      $('#edit-field-color-0-value').val('#FE0000');
    }
  });
  $('#edit-field-color-change-value').change();
  //watermark image submit
  /*$('#edit-field-watermark-image-0-filefield-upload').click(function(){
    $('#edit-field-position-value-wrapper').css('display','block');
    $('#edit-field-opacity-value-wrapper').css('display','block');
    $('#edit-field-write-copyright-value-wrapper').css('display','block');
  });
  $('#edit-field-position-value-wrapper').css('display','none');
  $('#edit-field-opacity-value-wrapper').css('display','none');
  $('#edit-field-write-copyright-value-wrapper').css('display','none');*/
});