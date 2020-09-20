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
    vector<char> ins;
    for(int i = 0; i<n; i++){
        char a; 
        cin >> a; 
        ins.push_back(a); 
    }

    if(n%2 == 0){
        bool ok = false; 
        for(int i = 1; i<ins.size(); i+=2){
            if((ins[i] - '0') % 2 == 0){
                ok = true; 
            }
        }
        cout << (ok ? 2: 1) << nl; 
    }
    else{
        bool oks = false; 
        for(int i = 0; i<ins.size(); i+=2){
            if((ins[i] - '0') %2 == 1){
                oks = true; 
            }
        }
        cout << (oks ? 1: 2) << nl; 
    }
 }


}

