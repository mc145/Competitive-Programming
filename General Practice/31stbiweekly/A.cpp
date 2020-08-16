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


int numOfSubarrays(vector<int>& arr) {
        int numOdd = 0; 
        int numEven = 0; 
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]%2 == 1){
                numOdd++; 
            }
            else{
                numEven++; 
            }
        }
            if(numOdd > 0 && numEven == 0){
                return ((int) pow(2,numOdd) - 1) % ((int) pow(10,9) + 7); 
            }
            else if(numOdd == 0 && numEven > 0){
                return 0; 
            }
            else if(numOdd == 0 && numEven == 0){
                return 0; 
            }
            else{
                ll num = ((int) pow(2,numOdd))/2 * (((int) pow(2,numOdd))/2 - 1);
                return num % (((int) pow(10,9)) + 7); 
            }
        
    }


int main(){

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
    vector<int> v; 
    for(int i = 0; i<7; i++){
        v.push_back(i+1); 
    }
    cout << numOfSubarrays(v); 
}