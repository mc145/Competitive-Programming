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
     int r,g,b,w; 
     cin >> r >> g >> b >> w; 
     int rs = r;
     int gs = g; 
     int bs = b; 
     int ws = w; 
     r = r%2; 
     g = g%2; 
     b = b%2; 
     w = w%2; 
     int numOdd = 0; 
     int numEven = 0; 

     if(r == 1) numOdd++; else numEven++; 
    if(g == 1) numOdd++; else numEven++; 
     if(b == 1) numOdd++; else numEven++; 
     if(w == 1) numOdd++; else numEven++; 

     if(numEven == 3 || numEven == 4 || numOdd == 4) cout << "Yes" << nl; 
     else if(numOdd == 3){
         if((w == 0 && rs > 0 && gs > 0 && bs > 0) || (w == 1 && rs > 0 && gs > 0 && bs > 0)){
             cout << "Yes"; 
         }
         else{
             cout << "No";
         }
     }
     else cout << "No" << nl; 
     cout << nl; 
 }

}

