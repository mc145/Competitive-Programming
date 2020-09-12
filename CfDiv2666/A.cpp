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
char bl = ' ';
const int MOD = 1e9 + 7; 

void solve(){
    int n; 
    cin >> n; 

    vector<string> s; 
    for(int i = 0; i<n; i++){
        string a; 
        cin >> a; 
        s.push_back(a); 
    }

    int val[26] = {0}; 

    for(int i = 0; i<s.size(); i++){
        string b = s[i]; 
        for(int j = 0; j<b.length(); j++){
            val[b[j] - 'a' + 1]++;
             
        }
    }
    bool ok = false; 
    for(int i = 0; i<26; i++){
        if(val[i] % n != 0) ok = true; 
        //cout << val[i] << nl; 
    }
    cout << (ok ? "NO": "YES") << nl; 
}




int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
 
 int t; 
 cin >> t; 
 while(t--){
     solve(); 
 }


}

