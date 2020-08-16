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



ifstream fin("moobuzz.in"); 
ofstream fout("moobuzz.out"); 


int main(){
    int n; 
    fin >> n; 
int arr[8] = {1,2,4,7,8,11,13,14}; 
fout << (n-1)/8 * 15 + arr[(n-1)%8]; 
}