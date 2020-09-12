#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<fstream>

using namespace std; 


int main(){

    ifstream cin("shell.in");
    ofstream cout("shell.out"); 

    int n; 
    cin >> n; 

    vector<pair<int,int> > swaps; 

    vector<int> guess; 

    for(int i = 0; i<n; i++){
        int a,b,c; 
        cin >> a >> b >> c; 

        swaps.push_back(make_pair(a,b)); 
        guess.push_back(c); 
    }

    int ans = -1; 

    

    for(int start = 1; start <= 3; start++){
        int curScore = 0; 
        int curPos = start; 

        for(int i = 0; i<swaps.size(); i++){
            if(swaps[i].first == curPos){
                curPos = swaps[i].second;
                if(guess[i] == swaps[i].second) curScore++; 
                continue; 
            }
            else if(swaps[i].second == curPos){
                curPos = swaps[i].first; 
                if(guess[i] == swaps[i].first) curScore++; 
                continue; 
            }

                if(guess[i] == curPos) curScore++; 

        }

        ans = max(ans, curScore); 
        //cout << ans << " " << start << endl; 
    }
    cout << ans; 

}