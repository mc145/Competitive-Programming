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

bool isFactor(int n, int k){
    if(n % k ==  0) return true; 
    return false; 
}


bool isPrime(int n){
    if(n == 1){
        return false; 
    }
    else{
    for(int i = 2; i*i<=n; i++){
        if(n % i == 0){
            return false; 
        }
    }
    return true; 
    }
}
int main(){

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
vector<double> dp;
dp.push_back(1.0);
int i = 0;  
while(dp[i] <= 1.99999){
    int cur = 0; 
    for(int j = 0; j<100; j++){
        cur+=sqrt(sqrt(dp[i]) + dp[i]); 
    }
    dp[i+1] = cur; 
    i++; 
}
cout << i; 
}