#include<iostream>
#include<fstream>
#include<vector>
#include<math.h> 
#include<string>
#include<algorithm> 

using namespace std; 

int main(){
    ifstream cin("cbarn.in");
    ofstream cout("cbarn.out"); 

    int n; 
    cin >> n; 

    vector<int> ins;  
    int numCow = 0; 
    int reset = 0; 
    for(int i = 0; i<n; i++){
        int a; 
        cin >> a; 
        ins.push_back(a); 

        numCow+=a;  
    }

reset = numCow; 
    int ans = 1e8; 
    int cur = 0; 


    for(int i = 0; i<ins.size(); i++){
        cur = 0;
        numCow = reset;  
        for(int j = i; j<ins.size(); j++){
            numCow-=ins[j]; 
            cur+=numCow; 
        }
        for(int j = 0; j<i-1; j++){
            numCow-=ins[j];
            cur+=numCow; 
        }
        ans = min(cur, ans); 
    }

    cout << ans; 
    
}