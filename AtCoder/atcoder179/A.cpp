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
string s; 
cin >> s; 

if(s[s.length() - 1] == 's'){
    s.push_back('e');
    s.push_back('s'); 
    cout << s; 
}
else{
    s.push_back('s'); 
    cout << s; 
}


}

