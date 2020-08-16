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
 while(t--){
     int n; 
     cin >> n;
     vector<int> ins;  
     for(int i = 0; i<2*n; i++){
        int a; 
        cin >> a; 
        ins.push_back(a);
     }
    vector<int> final; 
    int count = 0;
    int i = 0; 
    while(count != n){
        bool ya = false; 
        for(int k: final){
            if(k == ins[i]){
                ya= true; 
            }
        }
        if(ya == false){
            count++; 
            final.push_back(ins[i]); 
        }
        i++; 
    }
     for(int z: final){
         cout << z << " "; 
     }
     cout << nl; 
 }
}