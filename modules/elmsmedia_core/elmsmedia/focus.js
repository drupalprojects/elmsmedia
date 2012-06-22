// JavaScript Document
$(document).ready(function(){
  $('.elms_embedcode').click(function(e) {
    this.select();
  }); 
  //dup embed code post rendering in case they want to embed outside the system
  $('.elms_embedcode_2').click(function(){
    $(this).val($('#jwplayer-1-div,.elmsmedia_asset').parent().html());
    this.select();
  });
});