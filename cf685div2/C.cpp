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


vector<string> dp; 

void sub(string s, int k){
	 if(k == s.length() - 1){
		 return; 
	 } 
	 for(int i = 0; i<(int) dp.size(); i++){
		 string temp = dp[i]; 
		 temp.push_back(s[k]); 
		 dp.push_back(temp); 
	 } 
	 sub(s, k+1); 
		 
	 
	 
	
} 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
dp.push_back("HI"); 

 
 sub("ab", 0); 
 
 for(int i = 0; i<dp.size(); i++){
	 cout << dp[i] << bl; 
 } 
 
 
 

}

