   $(document).ready(function()
  {
    $('.sub-menu-btn-mid ul.links li').hover( 
        function()
        {
          $(this).css('background', 'url(/sites/all/themes/blackleaf/images/submenu_hover.png) top left repeat-x');  
        },
        function()
        {
          $(this).css('background', 'none');  
        });
    
  });
  
  // JavaScript Document