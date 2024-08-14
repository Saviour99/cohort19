#!/usr/bin/node

$(document).ready(function() {
    $("#btn_translate").click(function() {
        let languageCode = $("#language_code").val();

        $.ajax({
            url: "https://www.fourtonfish.com/hellosalut/hello/",
            method: "GET",
            dataType: "json",
            data: { lang: languageCode },
            success: function(data) {
                $("div#hello").text(data.hello);
            }
        });
    });
});