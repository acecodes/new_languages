'use strict';

function Hello() {
}

Hello.prototype.helloWorld = function() {
    return 'Hello world!';
};

Hello.prototype.sum = function(arr) {
    return arr.reduce(function(a, b) {
        return a + b;
    });
};

module.exports = Hello;