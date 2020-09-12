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

 int t; 
 cin >> t;
  while(t--){
      int k;
    cin >> k; 
    char arr[8][8]; 
    arr[0][0] = 'O'; 
    if(k % 3 == 1){
        // $k \equiv 1\pmod{3}$
        int bound = k/3 + 1; 
        int bounds = bound; 
        for(int i = 0; i<=bound; i++){
            arr[i][bound-i] = 'X'; 
        }
    }

 
        for(int i = 0; i<8; i++){
            for(int j = 0; j<8; j++){
                 if(arr[i][j] != 'X' && arr[i][j] != 'O'){
                     arr[i][j] = '.'; 
                 }
            }
        }
        for(int i = 0; i<8; i++){
            cout << nl; 
            for(int j = 0; j<8; j++){
                cout << arr[i][j] << " ";
            }
        }
  }
  
  }