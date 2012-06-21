$(document).ready(function()
{

 /*

  $('div.main-menu-btn-mid').toggle(
  function()
  {
    var childrenHeight = $(this).next('div.btn-menu-items').children().height();
      $(this).next('div.btn-menu-items').animate({height: (childrenHeight + 'px')}, 200).children('div.block').fadeIn(100);
        
    
  },
  
  function()                  
  {
     
      $(this).next('div.btn-menu-items').animate({height: '0px'}, 200).children('div.block').fadeOut(100);
  }
    
    
    
      
    
    
    
  );


    */  
    if (!($.cookie('state')))
    {
      $.cookie('state','collapsed');
    }
  
  $('div.main-menu-btn-mid').click(function()
  {
     if ( $.cookie('state') == 'expanded')
    {
      $(this).next('div.btn-menu-items').animate({height: '0px'}, 200).children('div.block').fadeOut(100);
      $.cookie('state', 'collapsed');
  
    }
    
    else if ( $.cookie('state') == 'collapsed')
    {
      var childrenHeight = $(this).next('div.btn-menu-items').children().height();
      $(this).next('div.btn-menu-items').animate({height: (childrenHeight + 'px')}, 200).children('div.block').fadeIn(100);
      $.cookie('state', 'expanded');      
    }
    
    
  });
  
    
    if ( $.cookie('state') == 'collapsed')
    {
      $('div.main-menu-btn-mid').next('div.btn-menu-items').css('height', '0px').children('div.block').css('display', 'none');  
    }
    else if ( $.cookie('state') == 'expanded')
    {
      var childHeight = $('div.main-menu-btn-mid').next('div.btn-menu-items').children().height();
      $('div.main-menu-btn-mid').next('div.btn-menu-items').css('height', (childHeight + 'px')).children('div.block').css('display', 'block');  
    }
    else 
    {  
      //$.cookie('state', 'collapsed');
      //$('div.main-menu-btn-mid').next('div.btn-menu-items').css('height', '0px').children('div.block').css('display', 'none');
    }
});