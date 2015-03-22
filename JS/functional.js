(function() {

    'use strict';

    var people = [{
        name: 'Ted',
        value: 5
    }, {
        name: 'Steve',
        value: 1
    }, {
        name: 'Jane',
        value: 7
    }];


    // forEach, which allows for asychronous looping
    function getPeopleWithForEach(people) {
        people.forEach(function(person) {
            console.log('forEach: ' + person.name);
        });
    }

    // Now using map
    function getPeopleWithMap(people) {
        return people.map(function(person) {
            console.log('Map: ' + person.name);
        });
    }

    // Filter people based on value
    function getPeopleWithFilter(people, minValue) {
        return people.filter(function(person) {
            return person.value >= minValue;
        });
    }


    getPeopleWithForEach(people);
    getPeopleWithMap(people);
    console.log(getPeopleWithFilter(people, 2));

})();