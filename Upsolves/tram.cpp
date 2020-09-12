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

/*

4
0 3
2 5
4 2
4 0

*/ 
int n; 
cin >> n;
vector<int> enter; 
vector<int> leave; 
 for(int i = 0; i<n; i++){
     int a,b; 
     cin >> a >> b; 
     leave.push_back(a); 
     enter.push_back(b); 
 }
 vector<int> p; 
 int cur = 0; 

for(int i = 0; i<n; i++){
        cur+= (enter[i] - leave[i]) ; 
        p.push_back(cur); 
}

//cout << "This is n " << n; 


sort(p.begin(), p.end()); 
cout << p[n-1];



}