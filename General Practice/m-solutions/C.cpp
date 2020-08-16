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





int main(){

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

int n,k; 
cin >> n >> k;
vector<ll> arr; 
for(int j = 0; j<n; j++){
    ll a; 
    cin >> a; 
    arr.push_back(a);  
}

vector<ll> arr2; 
int cnt = 0; 
ll prod = 1; 
for(int i = 0; i<=arr.size()-k; i++){
    prod = 1; 
    for(int j = i; j< i+k; j++){
        prod*=arr[j]; 
    }
   // cout << nl << prod; 
    arr2.push_back(prod); 
}
// cout << arr2.size(); 
for(int i = 0; i<arr2.size() - 1; i++){
    if(arr2[i] < arr2[i+1]){
        cout << "Yes" << nl; 
    }
    else{
        cout << "No" << nl; 
    }
}

}