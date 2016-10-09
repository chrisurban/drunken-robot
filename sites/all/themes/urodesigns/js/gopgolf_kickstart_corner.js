(function($) {
Drupal.behaviors.omega = {
attach: function(context, settings) {
$(".region-sidebar-first").corner("12px");
$(".block-block-2 .first").corner("12px");
$(".block-block-2 .second").corner("12px");
$(".block-block-2 .third").corner("12px");
$(".block--exp-display-products-page").corner("12px");
$(".block-system-main .block-inner").corner("12px").parent().css('padding', '1px').corner("round 14px");
$(".block-promotions-block").corner("12px").parent().css('padding', '1px').corner("round 14px");
$("#block-block-1").corner("12px");
$(".block-shopping-cart-block .content").corner("12px");
// this is just an example, customize as you'd like, tl = top left

if($("article").hasClass("node-golf-flag-display")){
$("input[id*='field-sponsor-quantity-und-0-value']").sum("keyup", "#edit-quantity");
}
if($("article").hasClass("node-golf-flag-2-color-display")){
$("input[id*='field-sponsor-quantity-und-0-value']").sum("keyup", "#edit-quantity");
}
if($("article").hasClass("node-golf-signs")){
$("input[id*='field-sponsor-quantity-und-0-value']").sum("keyup", "#edit-quantity");
}
if($("body").hasClass("page-cart-line-items")){
$("input[id*='field-sponsor-quantity-und-0-value']").sum("keyup", "#edit-quantity");
}

// add calculation for form fields
// node-basic-product node-product-display 

$('.promo').click(function() {
var url = $('a', $(this)).attr('href');
document.location = url; });
$('#block-block-2 .second').click(function() {
var url = $('a', $(this)).attr('href');
document.location = url; });
$('#block-block-2 .third').click(function() {
var url = $('a', $(this)).attr('href');
document.location = url; });
// add div block click for front page blockas and top blocks

}
}
})(jQuery);