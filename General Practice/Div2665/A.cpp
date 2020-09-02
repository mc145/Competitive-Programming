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
    if(a == 1){
        return 1; 
    }
    
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

int minInVector(vector<int> arr){
    int mins = 1e9; 
    for(int i = 0; i<arr.size(); i++){
        mins = min(mins, arr[i]); 
    }
    return mins; 
}

int maxInVector(vector<int> arr){
    int maxs = -1; 
    for(int i = 0; i<arr.size(); i++){
        maxs = max(maxs, arr[i]); 
    }
    return maxs; 
}

bool checkElement(vector<int> arr, int k){
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == k){
            return true; 
        }
    }
    return false; 
}
char nl = '\n'; 

void solve(){
    int n,k; 
    cin >> n >> k; 
//     int mins = 1e8 + 7; 

//    for(int b = k; b<=max(n,k); b++){
//        int cur = 0; 
//         cur = min(abs(n-(2*b-k)), abs(n - (2*b + k))); 
//        mins = min(mins, cur); 
      
       
//    }
//     cout << mins << nl; 

if(k >=n){
    cout << k - n << nl;  
}
else{
    int val = n + k; 
    int b = ceil(val,2);
    //cout << b << " " << val;  
    cout << 2*b - val << nl; 
}
}


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 


char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

int t;
 cin >> t; 
 while(t--){
     solve();
    // cout << ceil(1,2); 
 }


}

