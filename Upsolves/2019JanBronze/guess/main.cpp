#include<iostream>
#include<fstream>
#include<string> 
#include<algorithm>
#include<math.h>
#include<vector> 

using namespace std; 

int main(){
    ifstream cin("guess.in"); 
    ofstream cout("guess.out"); 
    int n; 
    cin >> n; 
    vector<vector<string> > v; 
    for(int i = 0; i<n; i++){
        string s; 
        int a; 
        vector<string> ins; 
        cin >> s >> a; 
        for(int j = 0; j<a; j++){
            string x; 
            cin >> x; 
            ins.push_back(x); 
        }
            v.push_back(ins); 
    }

    int ans = -1; 
    for(int i = 0; i<v.size()-1; i++){
        for(int j = i+1; j<v.size(); j++){

                int cur = 0; 
            for(int k = 0; k<v[i].size(); k++){
                for(int l = 0; l<v[j].size(); l++){
                    if(v[i][k] == v[j][l]) cur++; 
                }
            }
            ans = max(ans, cur); 
        }
    }
    cout << ans + 1; 

}