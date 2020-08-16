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

int minInVector(vector<int> arr){
    int mins = 1e9; 
    for(int i = 0; i<arr.size(); i++){
        mins = min(mins, arr[i]); 
    }
    return mins; 
}

int maxInVector(vector<int> arr){
    int maxs = -1; 
    for(int i = 0; i<arr.size(); i++){
        maxs = max(maxs, arr[i]); 
    }
    return maxs; 
}

bool checkElement(vector<int> arr, int k){
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == k){
            return true; 
        }
    }
    return false; 
}



const int MOD = 1e9 + 7; 
const int INF = 1e9 + 7; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

int r,c,k; 
cin >> r >> c >> k;

int val[r][c];

for(int i = 0; i<r; i++){
    for(int j = 0; j<c; j++){
        val[i][j] = 0; 
    }
}

for(int i = 0; i<k; i++){
    int x, y, z;
    cin >> x >> y >> z; 
    val[x-1][y-1] = z; 
    
}



int dp[r][c]; 
dp[0][0] = val[0][0]; 
for(int i = 1; i<c; i++){
    dp[0][i] = val[0][i] + dp[0][i-1]; 
}
for(int i = 1; i<r; i++){
    dp[i][0] = val[i][0] + dp[i-1][0]; 
}
for(int i = 1; i<r; i++){
    for(int j = 1; j<c; j++){
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + val[i][j]; 
    }
}
cout << dp[r-1][c-1]; 

}

