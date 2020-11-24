#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
#include<sstream>
#include <bits/stdc++.h>
#include<fstream>  
using namespace std; 
typedef long long ll; 
typedef long double ld; 


char nl = '\n'; 
char bl = ' ';
const int MOD = 1e9 + 7; 

   vector<string> dp; 
vector<string> oth; 
void subString(string str, int n) 
{
    // Pick starting point
    for (int len = 1; len <= n; len++) 
    {    
        // Pick ending point
        for (int i = 0; i <= n - len; i++) 
        {
            //  Print characters from current
            // starting point to current ending
            // point.  
            int j = i + len - 1;
            string add = "";             
            for (int k = i; k <= j; k++) 
               add.push_back(str[k]); 
             
            oth.push_back(add); 
        }
    }
}
void subsequence(string str)
{
   
	dp.push_back(""); 
   for(int i = 0; i<str.length(); i++){
	 for(int j = 0; j<dp.size(); j++){
		string temp = dp[j]; 
		temp.push_back(str[i]); 
		dp.push_back(temp); 
	 }   
	 dp.push_back(""); 
   } 
 
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
 int t; 
 cin >> t; 
 while(t--){
     int n,q; 
     cin >> n >> q; 
       string quer = ""; 
     vector<char> ins; 
     vector<char> store; 
     for(int i = 0; i<n; i++){
		 char a; 
		 cin >> a; 
		 store.push_back(a);
		 ins.push_back(a); 
		 quer.push_back(a); 
	 } 
	 
	 for(int k = 0; k<q; k++){
		 int l,r; 
		 cin >> l >> r; 
		string nec = ""; 
		for(int j = l-1; j<r; j++){
			nec.push_back(ins[j]); 
		} 
		  vector<string> subseq; 
		  subsequence(quer); 
		  subString(quer, quer.length()); 
		  for (string zz: dp){
			  subseq.push_back(zz); 
		  } 
		  int count = 0; 
		 for(int z = 0; z< (int) subseq.size(); z++){
			if(subseq[z] == nec){
				count++; 
				cout << subseq[z] << bl; 
			} 
		 } 
		 cout << nl; 
		 //cout << nl; 
		 for(int z = 0; z< (int) oth.size(); z++){
			 if(oth[z] == nec){
				 count--;
				 cout << oth[z] << bl;  
			 }  
		 }
		 if(count > 1){
			 cout << "YES" << nl; 
		 } 
		 else{
			 cout << "NO" << nl; 
		 } 
		 
		 
	 }
  
 }


}

