#include<iostream>
#include<fstream>
#include<vector>
#include<math.h> 
#include<string>
#include<algorithm> 

using namespace std; 

int main(){
    ifstream cin("balancing.in");
    ofstream cout("balancing.out"); 


int n,b; 
cin >> n >> b; 
 int tl, tr, bl, br = 0; 

vector<pair<int,int> > xfirst; 

for(int i = 0; i<n; i++){
    int x,y; 
    cin >> x >> y; 
    xfirst.push_back(make_pair(x,y));
} 

char bs = ' '; 

int ans = 1e8; 

for(int i = 0; i<xfirst.size(); i++){
    int cur = 0; 
    int a = xfirst[i].first + 1;  
  for(int j = 0; j<xfirst.size(); j++){
      int b = xfirst[j].second + 1; 
  

    tl = 0; tr = 0; bl = 0; br = 0; 

  for(int k = 0; k<xfirst.size(); k++){
      if(xfirst[k].first < a && xfirst[k].second > b){
          tl++; 
      }
      else if(xfirst[k].first < a && xfirst[k].second < b){
          bl++; 
      }
      else if(xfirst[k].first > a && xfirst[k].second < b){
          br++; 
      }
      else{
          tr++; 
      }
      
  }
 // cout << a << bs << b << bs << tl << bs << bl << bs << br << bs << tr << endl; 

    cur = max(max(max(tl, bl), br), tr); 
   // cout << cur << endl; 
    ans = min(ans, cur); 
}


}

cout << ans; 

}