'use strict';
(function() {

    var app = angular.module('aceApp');

    app.controller('PanelController', function() {
        this.tab = 1;
        this.selectTab = function(setTab) {
            this.tab = setTab;
        };
        this.isSelected = function(checkTab) {
            return this.tab === checkTab;
        };
    });

    app.controller('ReviewController', function() {
        this.review = {};
        this.addReview = function(product) {
            product.reviews.push(this.review);
            this.review = {};
        };
    });

    app.controller('HTTPController', ['$http', function($http){
        var store = this;
        var streaks = [];
        this.get = function () { 
            $http.get('localhost:8000/api/streaks').success(function() {
                return console.log('Worked').failure(function() {console.log('nope.');});
            });
            
            };
        }]);

    // Custom directives
    app.directive('productTitle', function() {
        return {
            restrict: 'E',
            templateUrl: 'product-title.html'

        };
    });

    app.directive('productPanels', function() {
        return {
            controller: function() {

            },
            controllerAs: 'panels'
        };
    });

})();