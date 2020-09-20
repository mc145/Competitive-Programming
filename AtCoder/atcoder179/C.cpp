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

int numDivisors(int n){
    int cnt = 0; 
    for(int i =1; i*i<=n; i++){
        if(n% i == 0){
            cnt++; 
        }
        if(n/i != i && n%i == 0){
            cnt++; 
        }
    }
    
    return cnt; 
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

int n; cin >> n; 
int ans = 0; 

for(int c = 1; c<n; c++){
    ans+=numDivisors(n - c); 
    //cout << c << bl << numDivisors(n - c) << endl; 
}

cout << ans; 


}

