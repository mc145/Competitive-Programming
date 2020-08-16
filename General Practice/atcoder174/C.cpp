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



ll stringtoInt(string k){
	int len = k.length(); 
	ll ans = 0; 
	int base = 1; 
	for(int i = 0; i<len; i++){
		ans+=(7*base); 
		base *=10; 
	}
	return ans; 
}

string gen(int k){

	string a = ""; 
	for(int i = 0; i<k i++){
		a.push_back('7'); 
	}
	return a; 
}

int main(){

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

int k; 
cin >> k; 
string a = "7"; 


ll cnt = 1; 
if(k%2 == 0){
	cout << -1; 
}
else{

while(stringtoInt(a) % k != 0){
	a.push_back('7'); 
	cnt++;  
	
	cout << a.length() << endl; 
	// if(a.length() == 999982){
	// 	cout << "YES"; 
	// }
}
cout << cnt;

	
}

	







}