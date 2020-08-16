#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
#include<fstream>  
using namespace std; 
typedef long long ll; 
typedef long double ld; 

int ceil(int a, int m){
    // division of a and m
    if(a % m == 0){
        return a/m; 
    }
    else{
        return a/m + 1; 
    }
}

vector<int> sort(vector<int> arr){
    sort(arr.begin(), arr.end()); 
    return arr; 
}





int main(){

char nl = '\n'; 
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

int t; 
cin >> t; 
int i = 1; 
while(t--){
int k; 
cin >> k;
vector<int> ins; 
 for(int i = 0; i<k; i++){
     int a; 
     cin >> a; 
     ins.push_back(a); 
 }
  int maxUp = 0;
 int maxDown = 0; 
 int ru = 0; 
   
    maxUp++; 
    maxDown++; 
    for(int i = 1; i<ins.size(); i++){
        if(ins[i] > ins[i-1]){
            maxUp++; 
            maxDown = 1;
        }
        else if(ins[i] < ins[i-1]){
            maxDown++; 
            maxUp = 1; 
        }

       if(maxUp > 4){
           ru++; 
           maxUp = 1;
           maxDown = 1;  
       }
       else if(maxDown > 4){
           ru++; 
           maxDown = 1;
           maxUp = 1;  
       }
    }  
        cout << nl << "Case #" << i << ": " << ru;
    
    i++; 
}

}