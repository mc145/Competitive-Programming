#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
#include<fstream>  
#include<stdio.h> 


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





int main(){

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

   int t; 
   int cnt = 1; 
   cin >> t; 
   while(t--){
       int n; 
       cin >> n;
       vector<pair<ll,ll> > ins(n); 
       for(int i = 0; i<n; i++){
           ll a,b; 
           cin >> a >> b; 
           ins[i] = make_pair(a,b); 
       }
        ll pos[n]; 
        for(int i = 0; i<n; i++){
            pos[i] = 0; 
        } 
        int curPos = 0; 
        bool ya = false; 
        for(int i = 1; i<=ins.size()-1; i++){
            if((ins[i].first - ins[i].second == ins[i-1].first + ins[i-1].second) || (ins[i].first + ins[i].second == ins[i-1].first + ins[i-1].second) || (ins[i].first - ins[i].second == ins[i-1].first - ins[i-1].second)){

                if(i == ins.size() - 1){
                    pos[curPos]+=(ins[i-1].second + ins[i].second); 
                }
                else if(ins[i+1].first - ins[i+1].second == ins[i].first + ins[i].second){
                     pos[curPos]+=ins[i-1].second; 
                }
                else{
                    pos[curPos]+=(ins[i-1].second + ins[i].second); 

                }
               ya = true; 
            }
            else{
                    if(ya){
                        curPos++; 
                        ya = false; 
                    }
            }
        }
        ll max = -1; 
        for(int i = 0; i<n; i++){
            if(pos[i] > max){
                max = pos[i]; 
            }
        }
        cout << "Case #" << cnt << ": " << max; 
        ++cnt; 

   }
}