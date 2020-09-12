#include<iostream>
#include<random> 
#include<math.h> 
#include<vector>
#include<fstream> 


using namespace std;
 


 int main(){

    //  ofstream cout("test.in"); 

     long long min = 1; 
     long long max = 10; 

  

     int queries = 1000; 
    cout << queries << endl; 


     for(int i = 0; i<queries; i++){
            long long randNums = rand()%(max-min + 1) + min;
            long long randNum = rand()%(max-min + 1) + min;
            cout << randNums << " " << randNum << endl; 
     }




 }