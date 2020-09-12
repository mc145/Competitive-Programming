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
    int n; 
    cin >> n; 
    for(int i = 0; i<n; i++){
        int a; 
        cin >> a; 
        ins.push_back(a); 
    }
    bool ya = true; 
   for(int i = 1; i<ins.size() - 1; i++){
       if(ins[i] > ins[i-1] && ins[i] > ins[i+1]){
           cout << "YES" << nl << i << " " << i + 1 << " " << i + 2 << nl; 
           ya = false; 
           break; 
       }
   }
   if(ya){
       cout << "NO" << nl; 
   }
}
}