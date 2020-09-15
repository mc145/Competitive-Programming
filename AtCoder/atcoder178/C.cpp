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

char nl = '\n'; 
char bl = ' ';
long long MOD = 1e9 + 7; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

long long n;
cin >> n; 


long long fi,se = 1;
fi = 1; 
long long tot = 1; 
 
 for(int i = 0; i<n; i++){
     fi*=8; 
     //cout << fi << nl; 
     fi%=MOD; 
     se*=9; 
     se%=MOD;
     tot*=10;  
     tot%=MOD; 
 }

 se*=2; 
 se = se - fi; 

 cout << (tot - se)%MOD; 


}

