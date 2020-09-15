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
    int n; 
    cin >> n; 
    vector<long long> ins(n);

    for(int i = 0; i<n; i++){
        cin >> ins[i]; 
    }
    reverse(ins.begin(), ins.end()); 

    long long ans = -1e12; 

    long long cur = 0; 

    for(int i = 0; i<ins.size(); i++){
        cur+=(ins[i]); 
        ans = max(ans, cur); 
    }
    cout << ans << nl; 


}

}

