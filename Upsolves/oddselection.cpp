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
    vector<int> ins; 
    int n,x;
       int nOdd = 0; 
     int nEven = 0; 
     cin >> n >> x; 
     for(int i = 0; i<n; i++){
         int a; 
         cin >> a; 
         ins.push_back(a); 
         if(a % 2 == 0) nEven++; 
         else nOdd++; 
     }  
        bool ya = false; 
        for(int i = 0; i<=nOdd; i++){
            for(int j = 0; j<=nEven; j++){
                if((1 * i + j * 2) % 2 == 1 && i+j == x){
                    ya = true;
                    //cout << nl << i << " " << j; 
                }   
                else{
                    continue; 
                }
            }
        }
        if(ya) cout << nl << "Yes";
        else cout <<  nl << "No";

}
}