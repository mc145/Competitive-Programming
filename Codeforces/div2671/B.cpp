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
        long long x; 
        cin >> x; 

    

    // numbers that work are in the form 2^n - 1 
    
    vector<long long> store; 
    store.push_back(1); 
    for(int i = 2; i<=log2(x+1); i++){
        if(store[store.size() - 1] >= x){
            break; 
        }
        store.push_back(store[store.size() - 1] + ((pow(2, i) - 1) * (pow(2,i)))/2); 
         //store.push_back(store[store.size() - 1] + ((pow(2, i) - 1))); 
        
    }   

    if(store[store.size() - 1] > x){
        cout << store.size() - 1 << nl; 
        continue; 
    }

    cout << store.size() << nl;     
 }


}

