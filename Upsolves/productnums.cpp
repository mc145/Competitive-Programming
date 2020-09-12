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


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char nl = '\n'; 
char bl = ' ';

int t; 
cin >> t; 
while(t--){
    long long n; 
    cin >> n; 

    long long a,b,c; 

    for(int i = 2; i*i<=n; i++){
        if(n % i == 0){
            a = i; 
            break; 
        }
    }

    long long d = n/a;
    for(int i = 2; i*i<=d; i++){
        if(d % i == 0 && i != a){
            b = i; 
        } 
    }


if(n/(a*b) != 1 && n/(a*b) != a && n/(a*b) != b){
    long long c = n/(a*b);

    if(a * b * c == n){

    
    cout << "YES" << nl;
    cout << a << bl << b << bl << n/(a*b); 
    }

    else{
        cout << "NO"; 
    }
    cout << nl; 
}
else{
    cout << "NO" << nl; 
}
}


}

