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
        ll n,m,a; 
        cin >> n >> m >> a; 
        ll f; 
        ll s; 
        if(n%a == 0){
             f = n/a; 
        }
        if(n%a != 0){
            f = n/a + 1; 
        }
        if(m%a == 0){
            s = m/a; 
        }
        else{
            s = m/a + 1; 
        }
        cout << f * s; 


}