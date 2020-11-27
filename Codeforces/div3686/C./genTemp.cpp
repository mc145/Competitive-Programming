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

     int testCases = 5; 
    cout << testCases; 
     for(int i = 0; i<testCases; i++){
        int n = randoms(100000, 100); 
        cout << n << endl;  
        for(int j = 0; j<n; j++){
            cout << randoms(1,5) << ' '; 
        }
        cout << '\n'; 
     }

 }
