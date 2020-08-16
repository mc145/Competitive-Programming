#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<set> 
#include<sstream>
using namespace std; 
typedef long long ll; 
typedef long double ld; 
int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n,a,b; 
        cin >> n >> a >> b; 
       for(int i = 0; i<n; i++){
           cout << char('a' + i%b); 
       }
       cout << "\n"; 
       

    }
}