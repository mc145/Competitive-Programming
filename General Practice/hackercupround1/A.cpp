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

int minInVector(vector<int> arr){
    int mins = 1e9; 
    for(int i = 0; i<arr.size(); i++){
        mins = min(mins, arr[i]); 
    }
    return mins; 
}

int maxInVector(vector<int> arr){
    int maxs = -1; 
    for(int i = 0; i<arr.size(); i++){
        maxs = max(maxs, arr[i]); 
    }
    return maxs; 
}

bool checkElement(vector<int> arr, int k){
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == k){
            return true; 
        }
    }
    return false; 
}



const int MOD = 1e9 + 7; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/


int t; 
cin >> t;
int cnt = 1; 
while(t--){

    ll n,k,w; 
    cin >> n >> k >> w; 
    ll prod = 1; 
    vector<ll> xcoord; 
    xcoord.push_back(0); 
    for(int i = 0; i<k; i++){
        ll zz; 
        cin >> zz;  
       // cout << "Xcoord addition is " << zz << nl; 
        xcoord.push_back(zz); 
    }
    ll Al, Bl, Cl, Dl; 
    cin >> Al >> Bl >> Cl >> Dl; 
    //cout << "Al is " << Al << bl << "Bl is " << Bl << bl << "Cl is " << Cl << bl << "Dl is " << Dl << nl; 
    vector<ll> height; 
    height.push_back(0); 

    for(int i = 0; i<k; i++){
        ll zy; 
        cin >> zy;
        height.push_back(zy); 
       // cout << "Height addition is " << zy << nl; 
    }
    ll Ah, Bh, Ch, Dh; 
    cin >> Ah >> Bh >> Ch >> Dh; 
    for(int i = k+1; i<=n; i++){
        xcoord.push_back(((Al*xcoord[i-2] + Bl * xcoord[i-1] + Cl) % Dl) + 1); 
      // cout << "Xcoord addition is " << ((Al * xcoord[i-2] + Bl * xcoord[i-1] + Cl)% Dl) + 1 << nl; 
        height.push_back(((Ah*height[i-2] + Bh * height[i-1] + Ch) % Dh) + 1);  
       // cout << "Height addition is " << (((Ah * height[i-2] + Bh * height[i-1] + Ch)% Dh) + 1) << nl; 

    }
   cout << "Case #" << cnt << ": ";

    ll roomsize[n+1];
    for(int i = 0; i<=n; i++){
        roomsize[i] = 0; 
    }

    roomsize[1] = (w + height[1])*2; 
    // cout << "xcoord[1] = " << w << " " << "Height[1] = " << height[1] << nl; 
    // cout << roomsize[1] << nl;  
    prod = roomsize[1]; 
    for(int i = 2; i<=n; i++){
        ll x = roomsize[i-1]; 
        if(xcoord[i] > xcoord[i-1] + w){
            x+=w;
            x+=(xcoord[i] - xcoord[i-1]);
            x+=(height[i]); 
            x+=(w); 
            x+=(height[i]); 
           // cout << "Case 1" << nl;
        }
        else if(xcoord[i] == xcoord[i-1] || xcoord[i] + w == xcoord[i-1] + w){

        }
        else if(xcoord[i] + w == xcoord[i-1]){

        }
        else if(xcoord[i] == xcoord[i-1] + w){

        }
        
        else{
            x-=2*w; 
            x-=2*height[i-1]; 
            //cout << x << nl; 
            x+=(max(xcoord[i] + w, xcoord[i-1] + w) - xcoord[i-1]); 
            // x+=(max((ll) height[i-1], height[i] - height[i-1])); 
            // x+=(max(xcoord[i] + w, xcoord[i-1] + w) - xcoord[i-1]); 
            // x+=(max((ll) height[i-1], height[i] - height[i-1])); 
            x+=(height[i]); 
            x+=w; 
            x+=(height[i-1]); 
            x+=(abs(xcoord[i] - xcoord[i-1]));
            x+=(abs(height[i] - height[i-1])); 
           // cout << max(xcoord[i] + w, xcoord[i-1] + w) - xcoord[i-1]; 
           //cout << max(height[i-1], height[i] - height[i-1]); 
           //cout << x << nl; 
        }
        prod*=x; 
        x = roomsize[i]; 
        
    }
    cout << prod % MOD << nl; 
    ++cnt; 
}
}

