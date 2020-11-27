#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
typedef long double ld; 


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
// ifstream cin("Filename.in"); 
// ofstream cout("Filename.out"); 
char nl = '\n'; 
char bl = ' ';


long long k,a,b; 

scanf("%lld%lld%lld", &k, &a, &b); 

if(( a!=0 && a % k == 0) || (b!= 0 && b % k == 0) || (a >= k && b>=k)){
	cout << a/k + b/k; 
} 
else{
	cout << -1;
} 


}

