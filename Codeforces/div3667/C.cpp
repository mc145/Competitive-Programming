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

    long long n,x,y; 
    cin >> n >> x >> y; 
    if( n == 2){
        cout << x << bl << y << nl; 
    }
    else{

    
    long long f = y - x;

    vector<ll> factors; 
    for(long long i = 1; i<=f; i++){
        if(f % i == 0){
            factors.push_back(i); 
        }
    }

    ll diff = f/n; 
    ll term; 
    for(ll i = 0; i<factors.size(); i++){
        if(factors[i] > diff){
            term = factors[i];
            break; 
        }
    }


    ll cur = y;    
    ll cnt = 0; 

    while(cur >= 1 && cnt != n){
        cout << cur << bl; 
        cur-=term; 
        ++cnt; 
    }
    ll ds = n - cnt; 

    cur = y + term; 
    cnt = 0; 

    while(cnt != ds){
        cout << cur << bl; 
        cur+=term; 
        ++cnt; 
    }

    cout << nl; 
}

} 

}

