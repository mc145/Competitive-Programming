var fs = require('fs');
var t = fs.readFileSync('template.cpp', 'utf-8'); 

var userInput = process.argv[2]; 

fs.writeFileSync( `./Upsolves/${userInput}.cpp`, t); 
    
