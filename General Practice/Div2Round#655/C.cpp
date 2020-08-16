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


bool check(vector<int> arr, vector<int> arrs){
    bool ya = true; 
    for(int i: arr){
        for(int j: arrs){
            if(i != j){
                ya = false; 
            }
        }
    }
    return ya; 
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
     int count = 0;
     cin >> n;
     vector<int> ins; 
     vector<int> diff;  
     for(int i = 0; i<n; i++){
         int a; 
         cin >> a; 
         ins.push_back(a); 
     }
        while(check == false){
            for(int i = 0; i<ins.size(); i++){
                int cha  = i - (ins[i] - 1); 
                diff.push_back(cha); 
            }
             
            for(int k: ins){
                
            }
            diff.clear(); 
        }
 }
}