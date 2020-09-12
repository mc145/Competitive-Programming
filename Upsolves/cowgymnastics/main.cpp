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



ifstream fin("gymnastics.in"); 
ofstream fout("gymnastics.out"); 

int main(){

char nl = '\n'; 
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
int k,n; 
fin >> k >> n; 
int dp[n][n]; 
for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        dp[i][j] = 0; 
    }
}
for(int i = 0; i<k; i++){
    vector<int> ins; 
    for(int j = 0; j<n; j++){
         int a; 
         fin >> a; 
        ins.push_back(a); 
    }
    for(int j = 0; j<n; j++){
        for(int k = 0; k<n; k++){
            for(int l = 0; l<ins.size() - 1; l++){
                for(int m = l+1; m<ins.size(); m++){
                    if(ins[l] == j+1 && ins[m] == k+1){
                        dp[j][k]+=1; 
                        //cout << nl << ins[l] << " " << ins[m] << " " << "dp is " << dp[j][k]; 
                    }
                }
            }
        }
    }
    //cout << nl << "New Iteration";
}
int fCount = 0; 
for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){ 
       if(dp[i][j] == k){
           //cout << nl << dp[i][j];
           fCount++; 
           //cout << nl << "count is " << fCount; 
       }
    }
}
fout << fCount; 
}