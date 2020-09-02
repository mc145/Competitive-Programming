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



int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
long long diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/



int t; cin >> t; 
while(t--){
    long long n,m; 
    cin >> n >> m; 

    long long anss = 0; 
    vector<long long> dp; 
    dp.push_back(m%10); 
    anss+=(m%10); 
    long long cur = 2*m; 

    while(cur%10 != m%10){
        anss+=(cur%10); 
        dp.push_back(cur%10); 
        cur+=m; 
    }
    cur-=m; 
    //cout << cur << nl;

    long long cycleLength = cur; 

    long long div = n/cycleLength; 

    long long ans  = div * anss; 

    long long rem = n%cycleLength; 

    rem/=m;

    for(int i = 0; i<rem; i++){
        ans+=dp[i]; 
    }
    cout << ans << nl; 

}
} 
