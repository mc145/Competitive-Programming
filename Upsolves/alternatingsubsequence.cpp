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

bool Sign(ll k){
    if(k >= 0){
        return 1; 
    }
    else{
        return 0; 
    }
}


int  main(){

char nl = '\n';  
ll t;
cin >> t;

 while(t--){
     vector<ll> ins; 
     ll n; 
     cin >> n; 
      for(ll i = 0; i<n; i++){
          ll a;
          cin >> a;
          ins.push_back(a); 
      }
    // input is fine
    
    // seperating idea
    ll tSum = 0; 
    //ll  cur = 0; 
    ll max = -9999999999; 
    bool ya = true; 
    max = ins[0]; 
    bool cur = Sign(ins[0]); 
    for(ll i = 0; i<ins.size(); i++){
        ll fi = ins[i]; 
        ll se = ins[i-1]; 
        if(Sign(fi) == cur){
            if(fi > max){
                max = fi; 
            }
                if(i == ins.size()-1) {
                    tSum+=max; 
                    ya = false; 
            }
            
        }
           else{
            tSum+=max;
            
            cur = Sign(fi); 
            max = fi;
           }
           if(ya == true && i == ins.size() - 1){
               tSum+=fi; 
           }
          // cout << nl << tSum; 
          
            //cout << nl << max << "  " << tSum;
         // cout << nl << max << "  " << tSum << " " << fi << " " << cur;
    } 
cout << nl << tSum; 
 }
 

/*
1
10
-2 8 3 8 -4 -15 5 -2 -3 1
*/ 

}