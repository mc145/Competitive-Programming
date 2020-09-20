#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
#include<sstream>
#include<fstream>  
using namespace std; 
typedef long double ld; 


char nl = '\n'; 
char bl = ' ';
const int MOD = 1e9 + 7; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

int128_t n,x,m;
 cin >> n >> x >> m; 

 int128_t ans = 0; 

 int128_t fi = x*x*x*x*(pow(x, 2*n - 2) - 1); 
 int128_t se = fi/(x*x - 1); 

 se+=x; 


 cout << (int) se % (int) pow(m, n-1); 


}

