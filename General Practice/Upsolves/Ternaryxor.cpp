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
cin >> t; 
while(t--){
    int n; 
    cin >> n; 
    vector<int> ins; 
    for(int i = 0; i<n; i++){
        char b; 
        cin >> b; 
        int a = b - '0';
        ins.push_back(a); 
    }
 

    vector<int> fi; 
    vector<int> se;
    bool ya = true; 
    for(int k: ins){
        if(ya){
            if(k == 0){
                fi.push_back(0); 
                se.push_back(0); 
            }
            else if(k == 2){
                fi.push_back(1); 
                se.push_back(1); 
            }
            else{
                fi.push_back(1); 
                se.push_back(0); 
                ya = false; 
            }
        }
        else{
            if(k == 0){
                fi.push_back(0); 
                se.push_back(0); 
            }
            else if(k == 2){
                fi.push_back(0); 
                se.push_back(2); 
            }
            else{
                fi.push_back(0); 
                se.push_back(1); 
            }
        }
    }
    cout << nl; 
    for(int x: fi){
        cout << x; 
    }
    cout << nl; 
    for(int y: se){
        cout << y; 
    }
}
}