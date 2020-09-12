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

int x1, y1, x2, y2; 
cin >> x1 >> y1 >> x2 >> y2; 
if(x1 == x2 || y1 == y2){
    // vertices are adjacent

    if(x1 == x2){
        cout << y2 - y1 + x1 << " " << y1 << " " << y2-y1+x1 << " " << y2; 
    }   
    if(y1 == y2){
       cout << x1 << " " << x2 - x1 + y1 << " " << x2  << " " << y2 + x2 - x1; 
    }
}
else{
    if(abs(y2 - y1) != abs(x2-x1)){
        cout << -1; 
    }
    else{
        
        cout << x1 << " " << y2 << " " << x2 << " " << y1; 
    }
}
}