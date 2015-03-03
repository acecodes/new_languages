'use strict';
(function() {
    /**
     * @ngdoc function
     * @name jsApp.controller:AboutCtrl
     * @description
     * # AboutCtrl
     * Controller of the jsApp
     */
    var app = angular.module('aceApp')
        .controller('AboutCtrl', function($scope) {
            $scope.awesomeThings = [
                'HTML5 Boilerplate',
                'AngularJS',
                'Karma'
            ];
        });


    app.controller('testController', function() {
        this.testObjs = [{
                name: 'Bob Object',
                price: 2.50,
                canPurchase: true,
                soldOut: false,
                reviews: [{
                    stars: 1,
                    body: 'This object sucks!',
                    author: 'dude@dude.com'
                }]
            }, {
                name: 'Steve Object',
                price: 3.75,
                canPurchase: false,
                soldOut: true,
                reviews: [{
                    stars: 3,
                    body: 'This object is OK!',
                    author: 'bro@dude.com'
                }]
            }, {
                name: 'Barbara Object',
                price: 5.00,
                canPurchase: true,
                soldOut: false,
                reviews: [{
                    stars: 5,
                    body: 'This object rules!',
                    author: 'bra@dude.com'
                }]
            }

        ];
    });

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

})();