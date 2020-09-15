#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
#include<sstream>
#include<fstream>  
#include<set> 
using namespace std; 
typedef long long ll; 
typedef long double ld; 



char nl = '\n'; 
char bl = ' ';
const int MOD = 1e9 + 7; 


int gcd(int n, int k){
    int a,b;
    a = n; 
    b = k; 
    if(k > n){
        n = k;
        k = a; 
    }
    if(k == 0) return n;
    return gcd(k, (n + k)%k); 
}


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
         int z;
         cin >> z; 
        ins.push_back(z); 
     }


     vector<int> b; 

     sort(ins.rbegin(), ins.rend()); 

     b.push_back(ins[0]); 
     int curGcd = b[0];

     //cout << curGcd << nl;    
    ins.erase(ins.begin());
     while(b.size() != n){
         int maxs = -1; 
        int pos = 0; 
         for(int i = 0; i<ins.size(); i++){
                if(gcd(curGcd, ins[i]) > maxs){
                    pos = i; 
                    maxs = gcd(curGcd, ins[i]); 
                }
             
         }
        
         if(maxs == -1){
             break;
         }
    // cout << "EARLY" << bl << curGcd << bl << ins[pos] << nl; 
     int cache = ins[pos]; 
         b.push_back(ins[pos]); 
         ins.erase(ins.begin() + pos);
          curGcd = gcd(curGcd, cache); 
         // cout << curGcd << bl << ins[pos] << nl; 
        
     }

      for(int i = 0; i < ins.size(); i++){
            b.push_back(ins[i]); 
            }

    for(int i = 0; i<b.size(); i++){
        cout << b[i] << bl; 
    }
    cout << nl; 



    


 }


}

