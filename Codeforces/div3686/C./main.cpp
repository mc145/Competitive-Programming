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


//count the frequency of each term
//Gaps from left corner
// Gaps from right corner


int t; 
cin >> t; 
while(t--){
    int n; 
    cin >> n; 
    vector<int> ins(n); 
    for(auto &a: ins){
        cin >> a; 
    }
    vector<int> stor; 
    for(int y: ins){
        stor.push_back(y); 
    }
   sort(stor.begin(), stor.end());  
    bool works = true; 
    for(int i = 1; i<stor.size() - 1; i++){
        if(stor[i] != stor[i-1] || stor[i] != stor[i+1]){
            works = false; 
        }
        }
    if(stor[0] != stor[1] || stor[n-2] != stor.back()){
        works = false; 
    }

    if(works){
       cout << 0 << nl; 
        continue; 
    }



sort(stor.begin(), stor.end()); 

int cur = 1; 
int mina = 2000000;  

for(int i = 1; i<stor.size(); i++){
    if(stor[i] == stor[i-1]){
        cur++; 
        //cout << "NUMBS" << bl << stor[i] << bl << stor[i-1] << nl; 
    }
    else{
        mina = min(mina, cur); 
        cur = 1; 

    }
    //cout << "CUR" << bl << cur << nl; 
}
if(stor[n-1] == stor[n-2]){
   mina = min(mina, cur);  
  // cout << "THING" << bl << cur << nl; 
}
mina++; 
//cout << "MINA" << bl << mina << nl; 
int cnt = 0; 

    for(int i = 0; i<ins.size(); i++){
        if(ins[i] == ins.back()){
            cnt++;
          //  cout << "INS " << ins[i] << nl; 
        
        } 
    } 
if(ins[0] == ins.back()){
    
    cnt--; 
    cout << min(cnt, mina) << nl; 
}
else{
    int cnts = 0; 
    for(int i = 0; i<ins.size(); i++){
        if(ins[i] == ins[0]){
            cnts++; 
        }
    }
    cout << min({cnts, cnt, mina}) << nl;
   cerr << cnts << bl << cnt + 1 << bl << mina << bl; 
}

}
} 

