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

vector<int> sort(vector<int> arr){
    sort(arr.begin(), arr.end()); 
    return arr; 
}



ll minW(vector<ll> arr){
    ll mins = 1e9; 
    for(ll k: arr){
        mins = min(k, mins); 
    }
    return mins; 
}

int main(){

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

int t; 
cin >> t; 
while(t--){
    int n; 
    cin >> n; 
    vector<ll> ins; 
    vector<ll> inss;

    ll min1, min2 = 1e9;  
    for(int i = 0; i<n; i++){
        ll a; 
        cin >> a; 
        ins.push_back(a); 
    }
    for(int i = 0; i<n; i++){
        ll b; 
        cin >> b; 
        inss.push_back(b); 
    }
    min1 = minW(ins); 
    min2 = minW(inss); 
    ll ans = 0; 
    for(int i = 0; i<n; i++){
        ll mins = min(ins[i] - min1, inss[i] - min2); 
        ans+=mins; 
        ll fi = ins[i] - mins; 
        ll se = inss[i] - mins; 
        ans+=(max(fi - min1, se - min2)); 

    }
    cout << ans << nl; 

}


}