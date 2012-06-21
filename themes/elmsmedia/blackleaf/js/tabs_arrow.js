    $(document).ready(function()
  {
    $('.tabs-div:first').append($('div.tabs-arrow'));
    
    
    
    
    $('.tabs-div ul.primary li a').hover(
      function()
      {
        var aElement = $(this);
        var divElement = $(this).parents('div.tabs-div:first');
        var pA = aElement.position();
        var pDiv = divElement.position();
        
        var w = aElement.width();
        
        var offset = (pA.left - pDiv.left);
        var move = offset + (w/2);
        $('div.tabs-arrow').css('margin-left', (move + 'px') );
                $('div.tabs-arrow').css('visibility', 'visible');

        
      },
      function()
      {
        $('div.tabs-arrow').css('visibility', 'hidden');
      });
    
    // protype for arrow to follow mouse
    //$(document).mousemove(function(e) {
       //  $('div.tabs-arrow').css('margin-left', (e.pageX-13));
       //}); 

    
  });