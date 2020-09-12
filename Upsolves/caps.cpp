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

vector<int> sort(vector<int> arr){
    sort(arr.begin(), arr.end()); 
    return arr; 
}





int main(){

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
string s;
cin >> s; 
string l = s; 
transform(s.begin(), s.end(), s.begin(), ::tolower);
int count = 0; 
for(int i = 0; i<s.length(); i++){
    if(s[i] == l[i]){
        count++; 
    }
}
           
            if((count == 1 && s[0] != l[0]) || (count >=2)){
                cout << l; 
            }    
            else{
           // cout << "THIS CASE"; 
           if(count == 0){
               cout << s; 
           }
           else{
            transform(s.begin(), s.begin() + 1, s.begin(), ::toupper);
            cout << s; 
           }
            }
    

  

}