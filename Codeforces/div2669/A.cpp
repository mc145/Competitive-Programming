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
     vector<char> ins(n);
      for(int i = 0; i<n; i++){
          cin >> ins[i];
      }
        int z = 0; 
       int o = 0; 
      for(int i = 0; i<ins.size(); i++){
          if(ins[i] == '1') o++;
          else z++; 
      }
   // cout << z << bl << o << nl; 
        if(z >= o){  
            cout << z << nl; 
            for(int i = 0; i<z; i++){
                cout << 0 << bl; 
            }
            cout << nl; 
            continue; 
        }
        else{
            if(o %2 == 0){
                cout << o << nl; 
                for(int i = 0; i<o; i++){
                    cout << 1 << bl; 
                }
                cout << nl; 
            }
            else{
                cout << o-1 << nl;
                for(int i = 0; i<o-1; i++){
                    cout << 1 << bl; 
                }
                cout << nl; 
            }
        }
      }

    


}

