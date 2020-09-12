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
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

int t;
cin >> t;
while(t--){
    int n;
     cin >> n; 
     int play[n]; 
     int clear[n]; 
     for(int i = 0; i<n; i++){
         int fi,se; 
         cin >> fi >> se; 
         play[i] = fi; 
         clear[i] = se; 
     }
     bool ok = false; 
     if(play[0] < clear[0] || play[0] < 0 || clear[0] < 0){
         ok = true; 
     }
     for(int i = 1; i<n; i++){
        if(play[i] < clear[i] || play[i-1] > play[i] || clear[i-1] > clear[i] || play[i] < 0 || clear[i] < 0 || clear[i] - clear[i-1] > play[i] - play[i-1]){
            ok = true; 
        }
     }
     if(!ok){
         cout << "YES" << nl; 
     }
     else{
         cout << "NO" << nl; 
     }

 }
}