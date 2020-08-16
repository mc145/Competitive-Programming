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
        int x,y,z; 
        cin >> x >> y >> z; 
        if(x == y && x >= z){
            cout << "YES" << nl << x << " " << z << " " << z << nl; 
        }
        else if(x == z && x >= y){
             cout << "YES" << nl << x << " " << y << " " << y << nl; 
        }
        else if(y == z && y >= x){
             cout << "YES" << nl << y << " " << x << " " << x << nl; 
        }
        else{
            cout << "NO" << nl; 
        }
 }
}