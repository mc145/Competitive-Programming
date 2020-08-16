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








int main(){
char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
ll diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

ll n,m; 
cin >> n >> m; 
vector<ll> ins(m); 
for(ll i = 0; i<m; i++){
    cin >> ins[i]; 
}
ll ans = 0; 
ll curPos = 1; 
for(ll i = 0; i<ins.size(); i++){
    if(ins[i] >= curPos){
        ans+=(ins[i] - curPos); 
       curPos = ins[i]; 
    }
    else{
        ans+=(n- curPos + ins[i]);
        curPos = ins[i];   
    }
}
cout << ans << endl; 
} 