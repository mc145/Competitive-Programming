var fs = require('fs'); 
var t = fs.readFileSync('usaco.cpp', 'utf-8'); 

var userInput = process.argv[2]; 

fs.mkdirSync(userInput);
fs.writeFileSync(`./${userInput}/main.cpp`, t); 