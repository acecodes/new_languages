var React = require('react')
var ReactDOM = require('react-dom')

var CommentBox = React.createClass({
    render: function() {
        return (
            <div className="commentBox">
                This is a test.
            </div>
        );
    }
})

ReactDOM.render(
    <h1>Testing, 123</h1>,
    document.getElementById('content')
);