#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
using namespace std; 
typedef long long ll; 
typedef long double ld; 
int main(){
    ll t; 
   
    cin >> t; 
    for(ll j = 0; j<t; j++){
        ll a; 
        cin >> a; 
        ll sum  = 0; 
        for(ll i = 1; i<a; i*=2){
            sum += i; 
            if(sum > 1 && a % sum == 0){
                cout << "\n" << a/sum; 
                break; 
            }
        }
    }}
  /*
  General idea of solution: 
  iterate from powers of 2 as the sum is x[2^k - 1] and the latter can be expressed as a sum of powers of 2. 
  */ 
 
       
      
    
