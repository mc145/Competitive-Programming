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
vector<int> fi; 
vector<int> se; 

int n; 
cin >> n;
 
 for(int i = 0; i<n; i++){
     int a,b; 
     cin >> a >> b; 
     fi.push_back(a);
     se.push_back(b); 
 }


 int cnt = 0; 
 int maxs = -1; 

if(fi[0] == se[0]) cnt = 1; 

for(int i = 1; i<n; i++){
    if(fi[i] == se[i]) {
        cnt++;
    }  
    else{

        cnt = 0; 
    }
            maxs = max(cnt, maxs); 
}

cout << (maxs >= 3 ? "Yes": "No"); 








}

