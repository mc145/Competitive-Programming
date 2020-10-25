#include<iostream>
#include<random> 
#include<vector>
#include<math.h> 
#include<fstream> 
#include<string> 


using namespace std;
 

 int randoms(int max, int min){
     return rand()%(max - min + 1) + min; 
 }

 int main(){
      ofstream cout("tests.out"); 
     int testCases = 20; 
      
     while(testCases--){
      
     for(int i = 0; i<3; i++){
         for(int j = 0; j<3; j++){
             cout << randoms(1, 0) << ' '; 
         }
         cout << '\n'; 
     }
     cout << '\n'; 
     } 

 }