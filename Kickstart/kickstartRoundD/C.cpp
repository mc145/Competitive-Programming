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
int i = 1; 
while(t--){
    int n,a,b; 
    cin >> n >> a >> b;
    vector<int> ins; 
     for(int i = 1; i<n; i++){
         int a;
         cin >> a;
          ins.push_back(a); 
     }

    
    cout << nl << "Case #" << i << ": "; 
    i++; 
}

}