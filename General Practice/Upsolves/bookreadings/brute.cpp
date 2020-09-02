#include<iostream>
#include<fstream>
#include<vector>
#include<math.h> 

using namespace std; 


int main(){

    char nl = '\n'; 
    // ifstream cin("test.in"); 
    // ofstream cout("test2.out"); 

    int t; 
    cin >> t; 
    while(t--){
        long long n,m; 

        cin >> n >> m; 
        
        long long cache = m; 

        long long ans = 0; 

        while(m <= n){
            ans+=m%10; 
            m+=cache; 
        }
        cout << ans<< nl; 

    }

}