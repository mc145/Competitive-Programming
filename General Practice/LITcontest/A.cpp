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

char bl = ' ';
int n,m,l; 
cin >> n >> m >> l; 

vector<int> times; 
for(int i = 0; i<n; i++){
    int zz;
    cin >> zz; 
    times.push_back(zz); 
}
       vector<pair<int,int> > precomp; 

       for(int i = 0; i<times.size(); i++){
           precomp.push_back(make_pair(times[i], times[i] + m - 1)); 
       }
    for(int time = 1; time<=precomp[precomp.size() - 1].second; time++){
            int cnt = 0; 
            int curI = -1; 
        for(int i = 0; i<precomp.size(); i++){
                if(time >= precomp[i].first && time <= precomp[i].second){
                    cnt++; 
                }
                if(cnt > l){
                    curI = i; 
                    break; 
                }
        }
        if(cnt > l){
        precomp[curI].first = time - precomp[curI].first + 1 + precomp[curI].first;
        precomp[curI].second = precomp[curI].first + m - 1;  
        }
    }
    int ans = 0; 
    for(int time = 1; time<=precomp[precomp.size() - 1].second; time++){
        int cnts = 0; 
        for(int i = 0; i<precomp.size(); i++){
            if(time >= precomp[i].first && time <= precomp[i].second){
                cnts++; 
            }
        }
        if(cnts == 0){
            ans++; 
        }
    }
    cout << ans; 
}

