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
    int t; 
    cin >> t; 
    while(t--){
       int n,a,b,c,d; 
       cin >> n >> a >> b >> c >> d; 
       int rl = n*(a-b); 
       int rh = n*(a+b); 

       if(( rl <= c-d) && rh >= c-d){
            cout << "\n" << "YES"; 
       }
       else if(rl >= c-d && c+d >= rl){
           cout << "\n" << "YES"; 
       }
       else{
           cout << "\n" << "NO"; 
       }
       
    }
}