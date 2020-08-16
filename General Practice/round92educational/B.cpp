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

int t;
 cin >> t; 
 while(t--){
        int n,x,z; 
        cin >> n >> x >> z; 
        vector<int> ins(n); 
        int maxs = -1; 
        int maxPos; 
        for(int i = 0; i<n; i++){
            cin >> ins[i]; 
           if(ins[i] > maxs && i <= x){
               maxs = ins[i]; 
               maxPos = i; 
           }
        }
        int sum = ins[0]; 
        int curCount = 0; 
        int curPos = 1; 
        int numLeft = 0; 
        int rowLeft = 0; 
        while(curCount < x){
            sum+=ins[curPos]; 
            curCount++; 
            if(curPos > 0 && rowLeft == 0 && numLeft < z){
                if((maxPos == curPos && ins[curPos-1] > ins[curPos+1]) || (maxPos + 1 == curPos)){
                    curPos--; 
                    numLeft++; 
                    rowLeft++; 
                }
                else{
                    curPos++; 
                    rowLeft = 0; 
                }
            }
            else{
                curPos++; 
                rowLeft = 0; 
            }

        }
        cout << sum << nl; 
            }
}