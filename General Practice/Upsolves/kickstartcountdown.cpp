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





int main(){

char nl = '\n'; 
/*
For array arr use the fointowing preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 
*/

int t; 
cin >> t; 
for(int z = 0; z<t; z++){
    int n,k; 
    cin >> n >> k; 
    int nums[n]; 
   for(int i = 0; i<n; i++){
       int a; 
       cin >> a; 
       nums[i] = a; 
   }

   
   int count = 0; 
   int overall = 0; 
   for(int j = 0; j <n; j++){
       if(nums[j] == 1 && j!=0){ 
           int sec = j; 
           count++; 
           while(nums[sec-1] - nums[sec] == 1){
               count++; 
               sec--; 
           }
       }
       if(count >= k){
           overall++; 
       }
       //cout << nl << count; 
       count = 0; 
   } 
   cout << nl << "Case #" << z+1 << ": " << overall; 
   
}


}


