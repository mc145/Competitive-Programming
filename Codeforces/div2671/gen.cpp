#include<iostream>
#include<random> 
#include<fstream>
#include<vector>
#include<math.h> 
#include<string> 


using namespace std;
 

 int randoms(int max, int min){
     return rand()%(max - min + 1) + min; 
 }



 int main(){
    ofstream cout("test.out"); 
     int testCases = 14; 
        cout << testCases << endl; 
     for(int i = 0; i<testCases; i++){
        int n = randoms(9, 1); 

        cout << n << endl; 
        for(int i = 0; i<n; i++){
            cout << randoms(5, 1) << ' '; 
        }
        cout << '\n'; 
     }

 }