// JavaScript Document
$(document).ready(function(){
  //auto submit fields
  $("#edit-type").live('change',function(){
    $("#edit-type").submit();
  });
  $("#edit-type-1").live('change',function(){
    $("#edit-type-1").submit();
  });
  $("#edit-tid").live('change',function(){
    $("#edit-tid").submit();
  });
  $("#edit-tid-1").live('change',function(){
    $("#edit-tid-1").submit();
  });
  $("#edit-tid-2").live('change',function(){
    $("#edit-tid-2").submit();
  });
  $("#edit-field-cc-value-many-to-one").live('change',function(){
    $("#edit-field-cc-value-many-to-one").submit();
  });
  //location bounce for clicking on the bottom region in main views
  $('.view-display-id-page_1 .views-field-title, .view-display-id-page_2 .views-field-title, .view-display-id-page_3 .views-field-title, .view-display-id-page_4 .views-field-title, .view-display-id-page_5 .views-field-title').live('click',function(){
    window.location = $(this).children().attr('href');
  });
  //fun code to help make gallery building easier
  $('.elmsmedia-gallery-ref').live('click',function(){
    if ($(this).hasClass('elmsmedia-gallery-img-ref')) {
      var ref = $(this).parent().children('.views-field-title').html();
    }
    else {
      var ref = $(this).html();
    }
    var found = false;
    $('#field_images_values .form-autocomplete').each(function(){
      if ($(this).val() == '' && found == false) {
        $(this).val(ref);
        found = true;
      }
    });
    if (found == false) {
      $('#edit-field-images-field-images-add-more').trigger('mousedown');
      setTimeout("$('#field_images_values .form-autocomplete:last').val('"+ref+"');",1100);
    }
  });
  //same fun code repurposed for media playlists
  $('.elmsmedia-playlist-ref').live('click',function(){
    if ($(this).hasClass('elmsmedia-playlist-img-ref')) {
      var ref = $(this).parent().children('.views-field-title').html();
    }
    else {
      var ref = $(this).html();
    }
    var found = false;
    $('#field_assetlist_values .form-autocomplete').each(function(){
      if ($(this).val() == '' && found == false) {
        $(this).val(ref);
        found = true;
      }
    });
    if (found == false) {
      $('#edit-field-assetlist-field-assetlist-add-more').trigger('mousedown');
      setTimeout("$('#field_assetlist_values .form-autocomplete:last').val('"+ref+"');",1100);
    }
  });
});