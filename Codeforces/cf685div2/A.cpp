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


int t; 
cin >> t; 


while(t--){

	
	int n;
 	cin >> n; 

if(n == 1){
	cout << 0 << nl; 
} 
else if(n == 2){
	cout << 1 << nl; 
} 
else if(n%2 == 0){
	cout << 2 << nl; 
} 
else if(n == 3){
	cout << 2 << nl; 
	
} 

else if(n%3 == 0){
	cout << 3 << nl; 
} 
else{

	int ans = 0; 
	ans++; 
	n--; 
	if(n%2 == 0){
		ans+=2; 
	} 
	else if(n%3 == 0){
		ans+=3; 
	} 
	cout << ans << nl; 
}

}
}
