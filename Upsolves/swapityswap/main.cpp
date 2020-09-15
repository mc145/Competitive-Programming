#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<string> 
#include<algorithm> 
#include<math.h> 

using namespace std;
 
int a1,a2,b1,b2; 

 
int nex(int x) {
	if (a1 <= x && x <= a2) x = a1+a2-x;
	if (b1 <= x && x <= b2) x = b1+b2-x;
	return x;
}
 
 int main(){
     ifstream cin("swap.in");
     ofstream cout("swap.out"); 

     int n,k; 
     cin >> n >> k; 

     
     cin >> a1 >> a2 >> b1 >> b2;

    int arr[101]; 
         
   for(int i = 1; i<=n; i++){
       int cnt = 1;
       int cur = nex(i);  
       while(cur != i){
           cnt++;
           cur = nex(cur);  
       }
       //cout << cnt << endl;
      int rem = k%cnt; 
        
       for(int j = 0; j<rem; j++){
           cur = nex(cur); 
       }
        arr[cur] = i; 
   }
   for(int i = 1; i<=n; i++){
       cout << arr[i] << endl; 
   }
     
 }