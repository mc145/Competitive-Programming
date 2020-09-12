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

long long ceil(long long a, long long m){
    // division of a and m
    if(a % m == 0){
        return a/m; 
    }
    else{
        return a/m + 1; 
    }
}

const long long INF = 1e9; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char nl = '\n'; 
char bl = ' ';

int t; 
scanf("%d", &t); 

while(t--){
    long long n,k; 

    scanf("%lld%lld", &n, &k); 

    long long minNum = 1; 

    long long ans = INF; 
    for(long long i = minNum; i*i<=n; i++){
        if(n % i == 0){
            
            if(n/i <= k){
                ans = min(ans, i); 
            } 
            if(i <= k){
                ans = min(ans, n/i); 
            }
            
            
        }
    }

    cout << ans << nl; 
}


}

