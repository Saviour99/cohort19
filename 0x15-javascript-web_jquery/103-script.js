#!/usr/bin/node

$(document).ready(function() {
    function translate() {
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
    };

    $("#btn_translate").click(translate);

    $("#language_code").keypress(function(event) {
        if (event.which == 13) {
            translate();
        }
    });
});