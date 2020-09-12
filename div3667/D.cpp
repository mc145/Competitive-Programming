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

long long sum(long long x){
    string s = to_string(x); 

    long long val = 0; 
    for(int i = 0; i<s.length(); i++){
        val+=s[i]-'0'; 
    }
    return val; 
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
     long long n,s; 
     cin >> n >> s; 
    int modulo = (s - n) % 9;

    s-=modulo; 

for(int i = 0; i<=s/9; i++){
    long long val = 9*i; 
    if(sum(val) <= s){
        cout << 
    }
}

 }


}

