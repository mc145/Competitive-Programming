#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
#include<fstream> 
#include<cstdio>  
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

aaaa
aa

*/

int t; 
cin >> t; 
while(t--){
    int n; 
    cin >> n; 
    string alph = "abcdefghijklmnopqrstuvwxyz"; 
    vector<int> v; 
    int mins = 99999999; 
    for(int i = 0; i<n; i++){
        int a; 
        cin >> a; 
        if(a < mins) mins = i; 
        v.push_back(a); 
    } 
    string arr[n+1];
    // if(v[0] == 0){
    //     arr[0].push_back('b'); 
    // }
    // else{
    // for(int i = 0; i<v[0]; i++){
    //     arr[0].push_back('a'); 
    // }
    // } 
    // if(v[v.size() -1] == 0){
    //     arr[n].push_back(alph[n+1%26]); 
    // }
    // else{
    // for(int i = 0; i<v[v.size() - 1]; i++){
    //     arr[n].push_back('a'); 
    // }
    // }
    // vector<int> mix;
    // for(int i = 0; i<v.size() - 1; i++){
    //     mix.push_back(max(v[i], v[i+1])); 
    // }
    // for(int i = 0; i<mix.size(); i++){
    //     if(mix[i] == 0){
    //         arr[i+1].push_back(alph[i%26]); 
    //     }
    //     else{
    //     for(int j = 0; j<mix[i]; j++){
    //         arr[i+1].push_back('a'); 
    //     }
    //     }
    // }
    // for(int i = 0; i<n+1; i++){
    //     cout << arr[i] << endl; 
    // }
     for(int j = 0; j<n+1; j++){
    for(int i = 0; i<v[mins]; i++){      
            arr[j].push_back('a'); 
        }
    }
   for(int i = 1; i<n+1; i++){
       int mins1 = max(v[i-1], v[i]) - v[i-1];
       for(int k = i; k<n+1; k++){
       for(int j = 0; j<mins1; j++){
           arr[k].push_back(alph[i%26]); 
       }
       } 
   }
   for(int i = 0; i<n+1; i++){
       cout << arr[i] << endl; 
   }

}
}