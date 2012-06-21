
// .main-content .view-content ul li .views-field-title a {

$(document).ready(function()
               {
                 $('div.main-content div.view-content ul li.views-fluid-grid-item div.views-field-title').live('mouseover',
                  function()
                  {
                    $(this).css({background:'#3d3d3d',cursor:'pointer'});
                    $(this).children().css('color', '#bfbfbf');
                  });
                  $('div.main-content div.view-content ul li.views-fluid-grid-item div.views-field-title').live('mouseout',
                  function()
                  {
                    $(this).css('background', '#aaaaaa');
                    $(this).children().css('color', '#3d3d3d');
                  });
                 
               });