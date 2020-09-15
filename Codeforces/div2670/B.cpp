#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
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

char nl = '\n'; 
char bl = ' ';
const int MOD = 1e9 + 7; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
 int t; 
 cin >> t; 
 while(t--){
     int n; 
     cin >> n; 
     vector<int> ins; 

     for(int i = 0; i<n; i++){
         int a; 
         cin >> a; 
         ins.push_back(a); 
     }

     sort(ins.begin(), ins.end()); 

     int p1 = 0; 
     int p2 = ins.size(); 

     int prod = 1; 
     int numNeg = 0; 
    vector<int> vals; 
     while(vals.size() != 5){
        
     }
 }


}

