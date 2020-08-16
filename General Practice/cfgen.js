
// program to generate files for codeforces contests. 
var fs = require('fs');
var t = fs.readFileSync('template.cpp', 'utf-8'); 

var userInput = process.argv[2]; 
fs.mkdirSync(userInput); 
fs.writeFileSync( `./${userInput}/A.cpp`, t); 
fs.writeFileSync( `./${userInput}/B.cpp`, t);
fs.writeFileSync( `./${userInput}/C.cpp`, t);
fs.writeFileSync( `./${userInput}/D.cpp`, t); 
fs.writeFileSync( `./${userInput}/E.cpp`, t);
fs.writeFileSync( `./${userInput}/F.cpp`, t);






