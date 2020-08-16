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
     int n,k; 
     cin >> n >> k; 
     // first check whether it's possible

     bool pos = false; 
     if((k <= n && k%2 == n%2) || (2*k <= n  && 0 == n%2)){
         pos = true; 
     }
     if(!pos){
         cout << "NO" << nl; 
     }
     else{
         // it's possible

         if(k%2 == n%2){
             // odd
             cout << "YES" << nl; 
             for(int i = 1; i<k; i++){
                 cout << 1 << " "; 
             }
             cout << n - (k-1) << nl;
         }
         else{
             cout << "YES" << nl; 
             for(int i = 1; i<k; i++){
                  cout << 2 <<  " "; 
             }
             cout << n - (2*k - 2) << nl; 
         }
     } 
 }
}