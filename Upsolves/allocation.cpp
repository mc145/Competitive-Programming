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
int j = 1; 
cin >> t; 
while(t--){
    int n,b;
    cin >> n >> b; 
    vector<int> ins; 
    while(n--){
        int a; 
        cin >> a; 
        ins.push_back(a); 
    }
    sort(ins.begin(), ins.end());
    int i = 0; 
    int count = 0; 
    while(b >= ins[i] && i<ins.size()){
        b-=ins[i]; 
        count++; 
        i++; 
    }

    cout << nl << "Case #" << j << ": " << count; 
    j++; 
}

}