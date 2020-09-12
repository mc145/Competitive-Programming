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

char nl = '\n'; 
char bl = ' ';
const int MOD = 1e9 + 7; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
 int t; 
 cin >> t; 
 while(t--){
     int n; 
     cin >> n; 
     vector<int> ins; 

     for(int i = 0; i<n; i++){
         int z; 
         cin >> z; 
         ins.push_back(z); 
     }

  

     sort(ins.begin(), ins.end());

        if(ins[0] != 0){
            cout << 0 << nl; 
            continue; 
        }
        vector<int> a; 
        vector<int> b; 
    
        for(int i = 0; i<ins.size(); i++){
            bool ok = false; 
            for(int p: a){
                if(p == ins[i]){
                    ok = true; 
                }
            }
            if(!ok){
                a.push_back(ins[i]); 
            }
            else{
                b.push_back(ins[i]); 
            } 

            }


            int ans = 0; 

            for(int i = 0; i<=a[a.size() - 1]+1; i++){
                bool ok = false; 

                for(int j = 0; j<a.size(); j++){
                    if(a[j] == i){
                        ok = true; 
                    }
                }
                if(!ok){
                    ans+=i;
                    break; 
                }
                
            }


                if(b.size() != 0){

                
             for(int i = 0; i<=b[b.size() - 1]+1; i++){
                bool ok = false; 

                for(int j = 0; j<b.size(); j++){
                    if(b[j] == i){
                        ok = true; 
                    }
                }
                if(!ok){
                    ans+=i;
                    break; 
                }
                
            }
                } 

            cout << ans << nl; 
    } 



} 
