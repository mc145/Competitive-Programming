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
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

int t; 
cin >> t; 
int cnt = 1;  
while(t--){
int n; 
cin >> n; 
char ent[n]; 
char exit[n];
for(int i = 0; i<n; i++){
    char a; 
    cin >> a; 
    ent[i] = a; 
}
for(int i = 0; i<n; i++){
    char b; 
    cin >> b; 
    exit[i] = b; 
}
char cin[n][n]; 
for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        if(i == j){
            cin[i][j] = 'Y'; 
        }
        else{
            cin[i][j] = 'M'; 
        }
    }
}

// exit first enter second, because I have to exit country i to enter country j
for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        if(cin[i][j] == 'M'){
            bool ok = false; 
            if(j > i){
                int cur = i+1; 
            while(cur <= j){
                if(cur != j){
                if(exit[cur] == 'N' || ent[cur] == 'N' || exit[i] == 'N'){
                    ok = true; 
                   }
                }
                else{
                    if(ent[cur] == 'N' || exit[i] == 'N'){
                        ok = true; 
                    }
                }
                cur++; 
            }
            }
            else{
                int cur = i-1; 
                while(cur >= j){
                    if(cur != j){
                    if(exit[cur] == 'N' || ent[cur] == 'N'){
                        ok = true; 
                    }
                    }
                    else{
                        if(ent[cur] == 'N' || exit[i] == 'N'){
                            ok = true; 
                        }
                    }                    
                    
                    cur--; 
                }
            }
            if(ok){
                cin[i][j] = 'N'; 
            }
            else{
                cin[i][j] = 'Y'; 
            }
        }
    }
}    
cout << "Case #" << cnt << ": " << nl; 

for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        cout << cin[i][j]; 
    }
    cout << nl; 
}
++cnt; 
}
}