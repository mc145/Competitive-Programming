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
    
   if(n == 2){
       reverse(ins.begin(), ins.end());
       cout << ins[0] << bl << ins[1] << nl; 
   }
   else{
    
       vector<int> ans; 

       for(int i = ins.size() - 1; i> 1; i--){
           ans.push_back(ins[i]); 
       }
       ans.push_back(ins[1]); 
       ans.push_back(ins[0]); 
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << bl; 
    }
        cout << nl; 

   }
 }


}

