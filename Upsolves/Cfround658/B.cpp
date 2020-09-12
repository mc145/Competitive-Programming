#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
#include<fstream>  
#include<set> 

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
cin >> t; 
while(t--){
    int n; 
    cin >> n; 
    vector<ll> ins;
    bool ok = false; 
    bool one = false; 
    for(int i = 0; i<n; i++){
        ll a; 
        cin >> a; 
        if(a!= 1) ok = true; 
        if(a != 1){
            a = 2; 
        }
        if(a == 1){
            one = true; 
        }
        ins.push_back(a); 
    } 
    bool win = false; 
    for(int i = 1; i<ins.size() - 1; i++){
        if(ins[i-1] == 2 && ins[i] == 1 && ins[i+1] == 2){
            win = true; 
        }   
    }
    if(!ok){
        if(ins.size() % 2 == 1){
            cout << "First" << nl; 
        }
        else{
            cout << "Second" << nl; 
        }
    }
    if(!one){
        cout << "First" << nl; 
    }
    if(one && ok){
    if(win){
        cout << "First" << nl; 
    }
    else{
        cout << "Second" << nl; 
    }
    }

}   
}