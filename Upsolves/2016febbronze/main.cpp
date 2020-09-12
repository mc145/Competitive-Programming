#include<iostream>
#include<fstream>
#include<vector>
#include<math.h> 
#include<string>
#include<algorithm> 

using namespace std; 

int main(){
    ifstream cin("pails.in");
    ofstream cout("pails.out"); 


    int x,y,m;
     
     cin >> x >> y >> m; 

     // ax, by
    int ans = 1e8; 

     for(int a = 0; a <= m/x; a++){
         int b = (m - a * x)/y; 
         int cur = a * x + b * y; 
         ans = min(ans, m - cur);  
         //cout << a << " "  << b << " " << cur << endl; 
     }

     cout << m - ans; 
    
}