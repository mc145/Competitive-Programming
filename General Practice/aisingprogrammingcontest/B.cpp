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
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
int n;
 cin >> n;
 vector<int> ins; 
  while(n--){
      int a; 
      cin >> a; 
      ins.push_back(a); 
      }
      int counter = 0; 
      int i = 1; 
     for(int k: ins){
         if(k % 2 == 1 && i % 2 == 1){
             counter++; 
         }
         i++; 
     }
      cout << nl << counter; 
}