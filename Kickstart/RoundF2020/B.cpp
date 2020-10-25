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


char nl = '\n'; 
char bl = ' ';
const int MOD = 1e9 + 7; 


long long max(long long a, long long b){
    if(a >= b){
        return a; 
    }
    return b; 
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

int cnt = 1; 
 int t; 
 cin >> t; 
 while(t--){

     cout << "Case #" << cnt << ": "; 

     long long n,k; 
     cin >> n >> k; 

     vector<pair<long long, long long> > ins; 

     for(int i  = 0; i<n; i++){
         long long a,b;
          cin >> a >> b;
          ins.push_back(make_pair(a,b)); 
     }


     sort(ins.begin(), ins.end()); 

     int curPos = ins[0].first; 

     int ans = 0; 

     for(int i = 0; i<ins.size(); i++){
         if(ins[i].second - curPos <=k){
             curPos+=k;
             ans++; 
         } 
         else{
             int val = ins[i].second - curPos; 

             val = (val + k - 1)/k; 

             curPos = curPos + k * val - k; 

             ans+=val-1; 
         }
     }
     cout << ans << nl;
     ++cnt; 
 }


}

