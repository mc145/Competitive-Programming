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
int t; 
cin >> t; 
while(t--){
    int x,n,m; 
    cin >> x >> n >> m; 
   while(x>=19 && n >0){
        x = x/2 + 10; 
      //  cout << x << "   "; 
        n--; 
   }

   while(  x>= 0 && m>0){
       x = x-10; 
     // cout << x << "   "; 
        m--; 
   }
  
   if(x > 0 ){
       cout << "\n" <<  "NO";  
   }
   else{
       cout << "\n" << "YES"; 
   }
   
}


}