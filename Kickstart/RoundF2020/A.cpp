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
int cnt = 1; 
while(t--){
    long long n,x; 
    cin >> n >> x; 

    vector<pair<long long, long long> > ins; 

    for(long long i = 0; i<n; i++){
        long long a;
         cin >> a; 

         ins.push_back(make_pair((a+x-1)/x, i+1)); 
    }

    sort(ins.begin(), ins.end()); 
    cout << "Case #" << cnt << ": "; 
    for(int i = 0; i<ins.size(); i++){
        cout << ins[i].second << bl; 
    }
    cout << nl;
    ++cnt;  
}

}

