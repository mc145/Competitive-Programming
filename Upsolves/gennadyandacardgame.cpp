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
string arr[6]; 
for(int i = 0; i<6; i++){
	cin >> arr[i]; 
}

char a = (arr[0])[0]; 
char b = (arr[0])[1]; 

bool ok = false; 
for(int i = 1; i<6; i++){
	if((arr[i])[0] == a || (arr[i])[1] == b){
		ok = true; 
	}
}

cout << (ok ? "YES": "NO");
}