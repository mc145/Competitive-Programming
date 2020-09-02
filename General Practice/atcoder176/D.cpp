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


void solve(){
    int h,w; 
    cin >> h >> w; 
    int x1,y1,x2,y2; 
    cin >> x1 >> y1 >> x2 >> y2; 
    bool can[w][h]; 

    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            char a; 
            cin >> a; 
            if(a == '.'){
                can[j][i] = true; 
            }
            else{
                can[j][i] = false; 
            }
        }
    }

        int minx = 1e8 + 1; 
        int miny = 1e8 + 1; 

        int finx; 
        int finy; 
        for(int i = -2; i<=2; i++){
            if(abs(x1-(x2+i) < minx)){
                finx = x2 + i; 
                minx = abs(x1 - (x2 + i)); 
            }
        }


        for(int i = -2; i<=2; i++){
            if(abs(y1-(y2+i) < miny)){
                finy = y2 + i; 
                miny = abs(x1 - (x2 + i)); 
            }
        }


        bool dp[finx][finy]; 
        if(finx < x1 && finy < y1){
                for(int i = x1; i>=finx; i--){
                    dp[i][y1] = can[i][y1]; 
                }
                for(int i = y1; i>=finy; i--){
                    dp[x1][i] = can[x1][i]; 
                }

                for(int i = x1-1; i>=finx; i--){
                    for(int j = y1-1; j>=finy; j--){
                        dp[i][j] = (dp[i][j+1] || dp[i+1][j]); 
                    }
                }
        }
        else if(finx < x1 && finy > y1){

        }
        else if(finx > x1 && finy < y1){

        }
        else{

        }
    }

char nl = '\n'; 
char bl = ' ';
const int MOD = 1e9 + 7; 



int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
 
 int t; 
 cin >> t; 
 while(t--){
     solve(); 
 }


}

