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
int h,w,k; 
cin >> h >> w >> k;
int arr[h][w]; 
int count = 0; 
for(int i = 0; i<h; i++){
    for(int j = 0; j<w; j++){
        char a; 
        cin >> a;
        if(a == '.'){
            arr[i][j] =  0;
        }
        else{
            arr[i][j] = 1; 
            count++; 
        }
    }
}
int take = count - k; 
vector<int> row; 
int scount = 0; 
int rcount = 0; 
for(int i = 0; i<h; i++){
    for(int j = 0; j<w; j++){
        if(arr[i][j] == 1){
            scount++; 
        }
    }
    row.push_back(scount); 
    scount = 0; 

}

vector<int> col; 

for(int i = 0; i<w; i++){
    for(int j = 0; j<h; j++){
        if(arr[j][i] == 1){
            rcount++; 
        }
    }
    col.push_back(rcount); 
    rcount = 0; 

}

int totalcount = 0; 
for(int l: col){
    for(int j: row){
        if(l  + j == k){
                totalcount++; 
        }
    }
}

cout << totalcount;
}
