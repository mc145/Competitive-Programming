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

ll ceil(ll a, ll m){
    // division of a and m
    if(a % m == 0){
        return a/m; 
    }
    else{
        return a/m + 1; 
    }
}

vector<ll> sort(vector<ll> arr){
    sort(arr.begin(), arr.end()); 
    return arr; 
}





int main(){
    char nl = '\n';
    int t; 
    cin >> t; 
    while(t--){
        int n,k; 
        cin >> n >> k; 
        cout << nl << (k-1)/(n-1) + k; 
    }
}
