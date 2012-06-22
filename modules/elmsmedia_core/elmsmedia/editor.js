// JavaScript Document
$(document).ready(function(){
  //try floating elms_embedcode field
  $('#elms_embedcode').parent().parent().parent().clone(true).appendTo('body').css({'position': 'fixed', 'bottom' : '0', 'right' : '0', 'margin' : '0px'});
  $('.elms_embedcode_2').css('display','none');
});