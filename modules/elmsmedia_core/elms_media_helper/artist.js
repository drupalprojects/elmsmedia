// JavaScript Document
$(document).ready(function(){
  $('.elmsmedia_artist_wrapper').appendTo('body').center();
  $('.elmsmedia_artist_viewgallery').click(function(){
    var galleryid = $(this).attr('id').replace('elmsmedia_node_','#elmsmedia_artist_wrapper_');
    $(galleryid).fadeIn(500);
  });
  $('.elmsmedia_artist_close').click(function(){
    $('.elmsmedia_artist_wrapper').fadeOut(100);
  });
  //display new stuff
  $('.imagecache-elmsmedia_artistartwork').click(function(){
    var key = $(this).attr('rel');
    $('.imagecache-elmsmedia_artistartwork').removeClass('elmsmedia_artist_images_selected');
    $(this).addClass('elmsmedia_artist_images_selected');
    //display the image that was clicked
    $('.elmsmedia_artist_image').css('display','none');
    $('.elmsmedia_bigimage_'+ key).fadeIn(300);
    //display the title for the image
    $('.elmsmedia_artist_title').css('display','none');
    $('.elmsmedia_artist_title_'+ key).css('display','block');
    //display the text that is associated to the image
    $('.elmsmedia_artist_text').css('display','none');
    $('.elmsmedia_artist_text_'+ key).fadeIn(300);
  });
  $('.imagecache-elmsmedia_artistartwork:first').click();
});

jQuery.fn.center = function () {
    this.css("position","fixed");
    this.css("top", ( $(window).height() - this.height() ) / 2+$(window).scrollTop() + "px");
    this.css("left", ( $(window).width() - this.width() ) / 2+$(window).scrollLeft() + "px");
    return this;
}