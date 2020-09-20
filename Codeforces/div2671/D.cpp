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

// ifstream cin("test.out");
// ofstream cout("codess.out"); 
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
   

      
     int n; 
     cin >> n; 
     vector<long long> ins;
      for(int i = 0; i<n; i++){
          long long a; 
          cin >> a; 
          ins.push_back(a); 
      }

      sort(ins.begin(), ins.end()); 

        if(n <=2){
            cout << 0 << nl; 
            for(int i = 0; i<ins.size(); i++){
                cout << ins[i] << bl; 
            }
           return 0; 
        }
      vector<long long> ans; 

      int ptr1 = 0; 
      int ptr2 = n-1; 
    int cnt = 0; 
      while(cnt == 0){

          if(ptr2 - ptr1 == 1){

               if(ans.back() == ins[ptr1]){
                  ans.push_back(ins[ptr2]);
                  ans.push_back(ins[ptr1]); 
                  //cout << "HELLO" << nl; 
             break; 
            }
              ans.push_back(ins[ptr1]);
              ans.push_back(ins[ptr2]);
              //cout << "YES" << nl; 
              break; 

          }    
          
           if(ans.back() == ins[ptr2]){
                  ans.push_back(ins[ptr1]);
                  ans.push_back(ins[ptr2]); 
                  //cout << "HELLO" << nl; 
                
            }
            else{
          ans.push_back(ins[ptr2]); 
          ans.push_back(ins[ptr1]); 
            }
            
          if(ptr1 == ptr2){
               cnt++;
          } 
          //cout << cnt << nl; 
          ptr1++;
          ptr2--; 
          
      }

    if(ins.size() %2 == 1){
        ans.erase(ans.begin() + ans.size() - 1); 
    }
      int anss = 0; 
      for(int i = 1; i<ans.size() - 1; i++){
          if(ans[i] < ans[i-1] && ans[i] < ans[i+1]){
              anss++; 
          }
      }

      cout << anss << nl; 

      for(int i = 0; i<ans.size(); i++){
          cout << ans[i] << bl; 
      }
      cout << nl; 
 
}




