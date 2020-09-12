#include<iostream>
#include<vector>
#include<math.h>
#include<fstream>

using namespace std; 

int main(){
    ifstream cin("breedflip.in");
    ofstream cout("breedflip.out"); 

    int n; 
    cin >> n; 

    vector<char> want; 
    vector<char> orig; 

    for(int i = 0; i<n; i++){
        char a; 
        cin >> a; 
        want.push_back(a); 
    }

    for(int i = 0; i<n; i++){
        char b; 
        cin >> b; 
        orig.push_back(b); 
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(want[i] == orig[i] && want[i-1] != orig[i-1]){
            ans++; 
        }
    }
    
    cout << ans; 
}