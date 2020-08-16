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



const int MOD = 1e9 + 7; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

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
string s; 
cin >> s; 
vector<int> ones; 

int cnt = 1;
char curChar = s[0];  
bool ok = false; 
//cout << curChar; 
for(int i = 1; i<s.length(); i++){
    if(s[i] == curChar) {
    cnt++; 
    }
    else{
        if(curChar == '1'){
            ones.push_back(cnt);  
            if(i == s.length() - 1){
            ok = true; 
            }
        }
        curChar = s[i];
        cnt = 1; 
    }
}

if(!ok && curChar == '1'){
    ones.push_back(cnt); 
}

sort(ones.begin(), ones.end()); 

//cout << ones.size() << nl; 

int sum = 0; 
for(int i = ones.size() - 1; i>=0; i-=2){
    //cout << "ONes " << ones[i] << "i is " << i << nl; 
    sum+=ones[i]; 
}
cout << sum << nl; 
}


}

