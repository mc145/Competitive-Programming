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

int a,b,c,l; 
cin >> a >> b >> c >> l; 
    bool ok = false; 

    for(int i = 0; i<=l; i++){
        for(int j = 0; j<=l; j++){
            for(int k = 0; k<=l; k++){
                if(i + j + k == l){
                    int fi = a * pow(2,i); 
                    int se = b*pow(2,j); 
                    int la = c * pow(2,k); 
                    if(se > fi && la > se){
                        ok = true; 
                    }
                }
            }
        }
    }
    if(ok){
        cout << "Yes"; 
    }
    else{
        cout << "No"; 
    }

}