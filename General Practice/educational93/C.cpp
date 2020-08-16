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

int t; 
cin >> t; 
while(t--){
    int n; 
    cin >> n;
    vector<int> ins; 
    for(int i = 0; i<n; i++){
        char a; 
        cin >> a; 
        ins.push_back(a - '0'); 
    }

  int dp[n]; 
  int sor[n]; 
  int sum[n]; 
  dp[0] = ins[0] - 1;
  sor[0] = ins[0] - 1; 
  sum[0] = ins[0]; 
   for(int i = 1; i<n; i++){
       sum[i] = sum[i-1] + ins[i]; 
       dp[i] = (sum[i-1] + ins[i]) - (i+1); 
       sor[i] = (sum[i-1] + ins[i]) - (i+1); 
        
   }

    int diff = sizeof(sor)/sizeof(sor[0]); 
    sort(sor, sor + diff);
    int cnt = 0; 

    for(int i = 0; i<n; i++){
        int seek = -1*dp[i]; 
        int high = n-1; 
        int low = 0; 
        int mid = low + (high - low)/2; 
        while(high - low > 0){
            mid = low + (high-low)/2; 
            if(sor[mid] == seek){
                cnt++; 

                while(mid - 1 == seek){
                    cnt++; 
                    mid--;
                }
                break; 
            }
            if(sor[mid] > seek){
                high = mid; 
            }
            else if(sor[mid] < seek){
                low = mid; 
            }
        }
    
    }

    cout << cnt << nl; 
}


}

