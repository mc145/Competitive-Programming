#include<iostream>
#include<vector>
#include<math.h> 

using namespace std; 


int main(){
    int n; 
    cin >> n; 
    vector<int> ins; 
    for(int i = 0; i<n; i++){
        int a; 
        cin >> a; 
        ins.push_back(a); 
    }
    
    
    int odds = 0; 
    int evens = 0; 
    for(int i = 0; i<ins.size(); i++){
        if(ins[i] %2 == 1){
            odds++; 
        }
        else{
        evens++; 
        }
    } 
    
    if(odds == 1){
    // cout << "HERE";
        for(int i = 0; i<ins.size(); i++){
            if(ins[i] % 2 == 1) {
                cout << i + 1; 
                break; 
        }
        }
    }
    
    if(evens == 1){
        for(int i = 0; i<ins.size(); i++){
            if(ins[i]%2 == 0) 
            {
            cout << i + 1 << endl; break; 
            }
        }
        
    }

   // cout << odds << " " << evens; 
    }
