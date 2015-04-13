'use strict';

function Hello() {
}

Hello.prototype.helloWorld = function() {
    return 'Hello world!';
};

module.exports = Hello;