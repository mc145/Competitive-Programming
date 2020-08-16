#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
#include<fstream>  
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

vector<int> eraseV(vector<int> arr, int i){
    arr.erase(arr.begin() + i); 
    return arr; 
}
string eraseS(string s, int i ){
    s.erase(s.begin() + i); 
    return s; 
}
char nl = '\n'; 




int main(){

    int n;
    cin >> n;
    vector<string> v; 
    for(int i = 0; i<n; i++){
        string s;
         cin >> s;
         v.push_back(s); 
    }
   int c1 = 0; 
   int c2 = 0; 
   int c3 = 0; 
   int c4 = 0; 
   int c5 = 0; 
   int c6 = 0; 
   int c7 = 0; 
   for(string k: v){
      if(k[0] == '1') c1++; 
      if(k[1] == '1') c2++;
       if(k[2] == '1') c3++; 
      if(k[3] == '1') c4++;
       if(k[4] == '1') c5++; 
      if(k[5] == '1') c6++;
      if(k[6] == '1') c7++; 
   }
   vector<int> val; 
   val.push_back(c1); 
   val.push_back(c2); 
   val.push_back(c3); 
   val.push_back(c4); 
   val.push_back(c5); 
   val.push_back(c6); 
   val.push_back(c7); 
   int maxs = 0; 
   int cur = 0; 
   for(int z: val){
       cur = z; 
    maxs = max(cur, maxs); 
   }
   cout << maxs;


}