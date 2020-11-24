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

ll floorl(ll a, ll b){
   return a/b; 
}



int main(){

char nl = '\n'; 
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
int t;
int j = 1; 
 cin >> t;
  while(t--){
      ll n,d; 
      cin >> n >> d; 
      vector<ll> ins;
      for(int i = 0; i<n; i++){
          ll a;
           cin >> a;
            ins.push_back(a); 
      }

      ll dp[n]; // the ith day each bus can travel
      dp[n-1] = floorl(d,ins[n-1]) * ins[n-1]; 
      // cout << dp[n-1]; 
            for(ll i = n-2; i>=0; i--){
            ll diff = floorl(dp[i+1], ins[i]) * ins[i]; 
            dp[i] = diff; 
         //  cout << nl << fdiff; 
      }

      

     cout << nl << "Case #" << j << ": " << dp[0]; 
     
      j++; 
  }
}
