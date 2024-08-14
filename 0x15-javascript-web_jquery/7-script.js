#!/usr/bin/node

$(document).ready(function() {
    $.ajax({
        url : 'https://swapi-api.alx-tools.com/api/people/5/?format=json',
        method: 'GET',
        dataType: 'json',
        success: function(data) {
            $("div#character").text(data.name);
        }
    });
});