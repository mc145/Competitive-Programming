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

int x; 
cin >> x; 
if(400 <= x && x<=599){
    cout << 8; 
}
if(600 <= x && x<=799){
    cout << 7; 
}
if(800 <= x && x<=999){
    cout << 6; 
}
if(1000 <= x && x<=1199){
    cout << 5; 
}
if(1200 <= x && x<=1399){
    cout << 4; 
}
if(1400 <= x && x<=1599){
    cout << 3; 
}
if(1600 <= x && x<=1799){
    cout << 2; 
}
if(1800 <= x && x<=1999){
    cout << 1; 
}

}