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
while(t--){
    /*
    Code goes here... 
    */

    int n; 
    cin >> n; 
    vector<int> ins(n); 
    for(int i = 0; i<n; i++){
        cin >> ins[i];
    }
    int person[n]; 
    for(int i = 0; i<n; i++){
        person[i] = 0; 
    }
    vector<int> pairs; 

    for(int weight = 2; weight<=100; weight++){
        int numPairs = 0; 
        for(int i = 0; i<ins.size(); i++){
            for(int j = 0; j<ins.size(); j++){
            if(ins[i] < weight && i != j && ins[i] + ins[j] == weight && person[i] == 0 && person[j] == 0){
                numPairs++; 
                person[i]++; 
                person[j]++; 
            }
        }
        }
                pairs.push_back(numPairs); 
            for(int i = 0; i<n; i++){
                person[i] = 0; 
            }
    }
    cout << maxInVector(pairs) << nl; 
}
} 