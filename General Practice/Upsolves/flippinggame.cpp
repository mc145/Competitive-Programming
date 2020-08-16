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

int n; 
cin >> n; 
vector<int> ins; 
while(n--){
    int a; 
    cin >> a; 
    ins.push_back(a); 
}
int maxs = -999; 
int cur;  
for(int i = 0; i<ins.size(); i++){
    cur  = 0; 
    
    for(int j  = i; j<ins.size(); j++){
        if(ins[j] == 0){
            cur++; 
        }
         
        else if(ins[j] == 1){
            cur--; 
        }
     if(maxs  < cur){
            maxs = cur; 
        }
      
    }
}
int count1 = 0; 
for(int k: ins){
    if(k == 1){
        count1++; 
    }
}


cout << maxs + count1; 
}