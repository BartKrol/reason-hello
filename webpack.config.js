const path = require('path');

module.exports = {
  entry: {
    app: './lib/js/src/simpleRoot.js'
  },
  output: {
    path: path.join(__dirname, "bundledOutputs"),
    filename: '[name].js',
  },
};
