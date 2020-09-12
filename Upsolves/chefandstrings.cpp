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
     ll n; 
     cin >> n; 
    vector<ll> arr; 
    while(n--){
        ll a; 
        cin >> a;
         arr.push_back(a); 
    }   
  
        ll sum = 0; 
        for(ll i = 0; i<arr.size() - 1; i++){
            ll add = abs(arr[i+1]-arr[i]) - 1;
            sum+= add;  
        }
        cout << nl << sum; 
        
     }
}