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




    // cout << "Case #" << case_num << ": "; 
	long long y,k,n; 
	cin >> y >> k >> n; 

	int rem = y % k;

	int need = (k + k - rem)% k; 

	if(need == 0){
		need = k; 
	}
	//cout << need << nl; 

	vector<long long> ways; 

	for(int i = need; i<=n-y; i+=k){
		//cout << i << nl; 
		ways.push_back(i); 
	}

	if(ways.size() == 0){
		cout << -1; 
	}
	else{
		for(int j: ways){
			cout << j << bl; 
		}
	}
}



