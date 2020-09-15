#include<iostream>
#include<vector>
#include<math.h> 
#include<fstream> 
#include<algorithm> 

using namespace std; 



typedef long long ll; 

ll max(ll a, ll b){
    if(a > b){
        return a; 
    }
    else{
        return b; 
    }
}


int main(){
    ifstream cin("triangles.in"); 
    ofstream cout("triangles.out"); 

    ll n; 
    cin >> n; 

    vector<pair<ll,ll> > ins; 

    for(ll i = 0; i<n; i++){
        ll a,b; 
        cin >> a >> b; 
        ins.push_back(make_pair(a,b));       
    } 


    vector<pair<ll,ll> > xs; 
    vector<pair<ll,ll> > ys; 

 
    
    ll curMax = -1e8; 

    for(ll i = 0; i<ins.size()-1; i++){
        curMax = -2; 
        for(ll j = i+1; j<ins.size(); j++){
            if(ins[i].second == ins[j].second){
                if(abs(ins[i].first - ins[j].first) >= curMax){
                    curMax = abs(ins[i].first - ins[j].first); 
                    xs.push_back(make_pair(ins[i].first, curMax)); 
                    xs.push_back(make_pair(ins[j].first, curMax));
                    //cout << ins[i].first << "  " << ins[i].second << " " << ins[j].first << " " << ins[j].second << " " << curMax << endl; 
                }
            }
        }
    }


    for(ll i = 0; i<ins.size(); i++){
        curMax = -2; 
        for(ll j = 0; j<ins.size(); j++){
            if(ins[i].first == ins[j].first){
                if(abs(ins[i].second - ins[j].second) >= curMax){
                    curMax = abs(ins[i].second- ins[j].second); 
                    ys.push_back(make_pair(ins[i].first, curMax)); 
                    ys.push_back(make_pair(ins[j].first, curMax)); 
                    //cout << ins[i].first << " " << ins[i].second << " " << ins[j].first << " " << ins[j].second << " " << curMax << endl; 
                }
            }
        }
    }
    long long ans = -1; 
    for(ll i = 0; i<xs.size(); i++){
        for(ll j = 0; j<ys.size(); j++){
            if(xs[i].first == ys[j].first){
                ans = max(ans, xs[i].second * ys[j].second); 
                
            }
           // cout << xs[i].first<< " " << xs[i].second << " " << ys[i].first << " " << ys[i].second << endl;  
          
        }
    }
    cout << ans; 

}