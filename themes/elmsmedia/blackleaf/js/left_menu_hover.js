$(document).ready(function()
{
  //$('div.sub-menu-asset-menu ul.menu li a.active').parent('li').css('background', 'url(../../sites/all/themes/blackleaf/images/subnav_item_arrow.jpg) top right no-repeat #bfbfbf');
  
      $('div.sub-menu-asset-menu ul.menu li a').hover(
        function()
        {
          $(this).css('color', '#ffffff');
          $(this).parent('li').css('background', 'url(/sites/all/themes/blackleaf/images/subnav_item_arrow.jpg) top right no-repeat #39c907');
        },
        function()
        {
          if ($(this).hasClass('active'))
          {
            $(this).css('color', '#727272');
            $(this).parent('li').css('background', 'url(/sites/all/themes/blackleaf/images/subnav_item_arrow_hover.jpg) top right no-repeat #bfbfbf');
          }
          else
          {
            $(this).css('color', '#727272');
            $(this).parent('li').css('background', 'none');
          }
        });
      
});
