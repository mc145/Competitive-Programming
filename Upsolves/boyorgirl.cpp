#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
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

vector<int> sort(vector<int> arr){
    sort(arr.begin(), arr.end()); 
    return arr; 
}





int main(){

char nl = '\n'; 
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
string s;
 cin >> s;
 vector<char> v; 
for(int i = 0; i<s.length(); i++){
    v.push_back(s[i]); 
}
vector<char> distinct; 
int dis = 0; 
for(int i = 0; i<v.size(); i++){
    bool ya = true;  
    for(int j = 0; j<distinct.size(); j++){
        if(v[i] == distinct[j]){
            ya = false; 
        }
    }
    if(ya){
        dis++; 
        distinct.push_back(v[i]); 
    }
}
if(dis%2 == 0){
    cout << "CHAT WITH HER!"; 
}
else{
    cout << "IGNORE HIM!"; 
}
}