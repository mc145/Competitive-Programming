#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
using namespace std; 
typedef long long ll; 
typedef long double ld; 
int main(){
    vector<int> athl; 
    vector<int> out; 
    int t; 
    cin >> t;
     for(int x = 0; x<t; x++){
         int n; 
          cin >> n; 
          for(int y = 0; y<n; y++){
              int a; 
              cin >> a;
            athl.push_back(a); 
          }
          sort(athl.begin(), athl.end()); 
          int min = 9999;
          int cur = 99999; 
          for(int i = 0; i<athl.size() - 1; i++){
                cur = athl[i+1] - athl[i]; 
                if(min > cur){
                    min = cur;                    
                }    
          
     }
     athl.clear(); 
     
        out.push_back(min); 
     }                              

for(int z: out){
    cout << "\n" << z; 
}

}