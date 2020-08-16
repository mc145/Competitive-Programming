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

vector<int> eraseV(vector<int> arr, int i){
    arr.erase(arr.begin() + i); 
    return arr; 
}
string eraseS(string s, int i ){
    s.erase(s.begin() + i); 
    return s; 
}
char nl = '\n'; 




int main(){

ll n,l; 
cin >> n >> l; 
vector<ll> ins; 
while(n--){
    ll a; 
    cin >> a; 
    ins.push_back(a); 
}
sort(ins.begin(), ins.end()); 
ll maxs = 0;
ll cur; 
ll lbound = ins[0]; 
ll rbound = l - ins[ins.size() - 1]; 
for(ll i = 0; i<ins.size()-1; i++){
    cur = ins[i+1] - ins[i]; 
    if(cur > maxs){
        maxs = cur;
    }
}
 float z = (float) maxs/(float) 2; 
 cout.precision(20); 

if(lbound > rbound){
    if(z > lbound){
        cout << z; 
    }
    else{
        cout << lbound;
    }
    
}
else{
    if(z > rbound){
        cout << z;
    }
    else{
        cout << rbound; 
    }
}



}