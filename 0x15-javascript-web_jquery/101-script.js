#!/usr/bin/node

$(document).ready(function() {
    $("div#add_item").click(function() {
        $("ul.my_list").append("<li>Item</li>");
    });

    $("div#remove_item").click(function() {
        $("ul.my_list li:last-child").remove();
    });

    $("#clear_list").click(function() {
        $("ul.my_list").empty();
    });
});