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




ll getAdd(ll x) {
	ll m1 = 10, m2 = 0;
	while(x > 0) {
		ll y = x % 10;
		x /= 10;
		m1 = min(m1, y);
		m2 = max(m2, y);
	}
	return m1 * m2;
}

int main(){

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
ll diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

ll T;
cin >> T;
while(T--){
    ll a1, k; 
    cin >> a1 >> k; 
    k--; 
    while(k--){
        ll y = getAdd(a1); 
        if(y == 0) break; 
        a1+=y; 
    }
    cout << a1 << nl; 
}


}