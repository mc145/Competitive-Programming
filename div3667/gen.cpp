#include<iostream>
#include<random> 
#include<vector>
#include<fstream>
#include<math.h> 
#include<string> 


using namespace std;
 

 int randoms(int max, int min){
     return rand()%(max - min + 1) + min; 
 }

 int main(){
     ofstream cout("test.out"); 
     int testCases = 20; 

     for(int i = 0; i<testCases; i++){
         int a = randoms(1, 50); 
         int b = randoms(1,50); 
         int c = randoms(1,50);
         cout << a << " " << b<< " " << c << endl; 
     }

 }