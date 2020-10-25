#include<iostream>
#include<random> 
#include<vector>
#include<math.h> 
#include<string> 


using namespace std;
 

 int randoms(int max, int min){
     return rand()%(max - min + 1) + min; 
 }

 int main(){

     int testCases = 10; 

     for(int i = 0; i<testCases; i++){
         cout << randoms(1, 10) << " " << randoms(1, 10) << " " << randoms(1,10) << " " << randoms(1, 10) << endl; 
     }

 }