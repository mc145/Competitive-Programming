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
const int MOD = 1e9 + 7; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
 int t; 
 cin >> t; 
 while(t--){


    long long a,b;
     cin >> a >> b; 


    if(abs(a - b) % 10 != 0){
        cout << abs(a-b)/10 + 1; 
    }
    else{
        cout << abs(a-b)/10; 

    }
    cout << nl; 
 }


}

