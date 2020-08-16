#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
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


bool isPrime(int n){
    for(int i = 2; i*i<=n; i++){
        if(n%i == 0){
            return false; 
        }
    }
    return true; 
}
bool nearlyPrime(int n){
    for(int i = 2; i*i<=n; i++){
        if(isPrime(i) && n%i == 0 && isPrime(n/i)){
            return true; 
        }
    }
    return false; 
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
    if(n < 31){
        cout << "NO" << nl; 
    }
    else{
       
        if(n-30 == 6 || n - 30 == 10 || n-30 == 14){
            if(n < 32){
                cout << "NO" << nl; 
            }
            else{
                 cout << "YES" << nl;  
                cout << 10 << bl << 6 << bl << 15 << " " << n - 39 << nl; 
            } 
        }
        else{
         cout << "YES" << nl; 
        cout << 6 << " " << 10 << " " << 14 << " " << n-30 << nl; 
        }
        
    }
}
}