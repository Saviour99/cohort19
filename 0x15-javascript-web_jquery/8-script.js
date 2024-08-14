#!/usr/bin/node

$(document).ready(function() {
    $.ajax({
        url : 'https://swapi-api.alx-tools.com/api/films/?format=json',
        method: 'GET',
        dataType: 'json',
        success: function(data) {
            data.results.forEach(function(movie) {
                $("ul#list_movies").append("<li>" + movie.title + "</li>");
            });
        }
    });
});