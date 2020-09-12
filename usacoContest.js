
// program to generate files for codeforces contests. 
var fs = require('fs');
var t = fs.readFileSync('usacoTemp.cpp', 'utf-8'); 


var userInput = process.argv[2]; 
//console.log(userInput);  
fs.mkdirSync(userInput); 
fs.writeFileSync( `./${userInput}/A.cpp`, t); 
fs.writeFileSync( `./${userInput}/B.cpp`, t);
fs.writeFileSync( `./${userInput}/C.cpp`, t);







