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

    // Array objects to be iterated through
    var testObjs = [{
            name: 'Bob Object',
            price: 2.50,
            canPurchase: true,
            soldOut: false
        }, {
            name: 'Steve Object',
            price: 3.75,
            canPurchase: false,
            soldOut: true
        }, {
            name: 'Barbara Object',
            price: 5.00,
            canPurchase: true,
            soldOut: false
        }

    ];

    app.controller('testController', function() {
        this.testObjs = testObjs;
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

})();