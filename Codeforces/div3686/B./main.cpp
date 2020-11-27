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
while(t--){
    int n; 
    cin >> n; 
    vector<int> ins; 
    vector<int> store; 
    for(int i = 0; i<n; i++){
        int a; 
        cin >> a; 
        store.push_back(a); 
        ins.push_back(a); 
    }

    sort(ins.begin(), ins.end()); 

    int cur_term = ins[0]; 
    bool works = false; 


    for(int i = 1; i<ins.size() - 1; i++){
        if(ins[i] != ins[i-1] && ins[i] != ins[i+1]){
            cur_term = ins[i]; 
            works = true;
            break; 
        }
    }

    if(ins[0] != ins[1]){
        cur_term = ins[0]; 
        works = true; 
    }



    if(!works){
        if(ins[n-1] != ins[n-2]){
            cur_term = ins[n-1]; 
            works = true; 
        }
    }


    if(!works){
        cout << -1 << nl; 
    }
    else{
        for(int i = 0; i<store.size(); i++){
            if(store[i] == cur_term){
                cout << i + 1; 
                break; 
            }
        } 
        cout << nl; 
    }
}

}

