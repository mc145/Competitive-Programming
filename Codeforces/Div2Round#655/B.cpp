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

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}



int main(){

char nl = '\n'; 
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
int t; 
cin >> t;
while(t--){
    int n;
    int max1; 
    int max2; 
    int max = 0;  
    cin >> n; 
   if(n%2 == 0){
       max1 = n/2; 
       max2 = n/2; 
   }
   else{
      
   } 
   cout << nl << max1 << " " << max2; 
}

}