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





int main(){

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
int n,d; 
cin >> n >> d;
vector<pair<int,int> > coord; 
 for(int i = 0; i<n; i++){
 	int a,b;
 	cin >> a >> b; 
 	coord.push_back(make_pair(a,b)); 
 }
 int cnt = 0; 
 for(int i = 0; i<coord.size(); i++){
 	if(pow(coord[i].first,2) + pow(coord[i].second, 2) <= pow(d,2)){
 		cnt++; 
 	}
 }
 cout << cnt; 
}