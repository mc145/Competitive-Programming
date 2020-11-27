#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
typedef long double ld; 


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
// ifstream cin("Filename.in"); 
// ofstream cout("Filename.out"); 
char nl = '\n'; 
char bl = ' ';

int t; 
cin >> t; 
while(t--){
    int n; cin >> n;
    if(n%2 == 0){

    
    for(int i = n; i>=1; i--){
        cout << i << bl; 
    }
    cout << nl; 
    continue; 
    } 
    else{
        for(int i = n; i>n/2+1; i--){
            cout << i << bl; 
        }
        for(int i = 1; i<=n/2 +1; i++){
            cout << i << bl; 
        }
    }

    cout << nl; 

}


}

