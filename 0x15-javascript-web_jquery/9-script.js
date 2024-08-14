#!/usr/bin/node

$(document).ready(function() {
    $.ajax({
        url: "https://hellosalut.stefanbohacek.dev/?lang=fr",
        method: "GET",
        dataType: "json",
        success: function(data) {
            $("div#hello").text(data.hello);
        }
    })
})