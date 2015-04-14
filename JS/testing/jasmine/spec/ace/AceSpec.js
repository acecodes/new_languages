describe("Ace module", function() {
  var Hello = require('../../lib/ace/ace')
  var hello = new Hello();

    it("says hello", function() {
        expect(hello.helloWorld()).toEqual("Hello world!");
    })

    it("checks summing", function() {
        expect(hello.sum([1, 2, 3,])).toEqual(6);
    })
})