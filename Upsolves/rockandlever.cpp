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

int t; 
cin >> t; 

for(int case_num = 1; case_num <= t; case_num++){


   int n; 
   cin >> n; 
   vector<ll> ins(n); 
   for(auto &a: ins){
   	cin >> a; 
   }

   int64_t ans = 0; 
   for(int j = 29; j>=0; j--){
   	int64_t cnt = 0; 
   	for(int i = 0; i<n; i++){
   		if(ins[i] >=(1 << j) && ins[i] < (1 << (j + 1))){
   			cnt++; 
   		}
   	}
   	ans+=(cnt*(cnt-1)/2);
   }

   cout << ans << nl; 


   // cout << "Case #" << case_num << ": "; 
}


}

