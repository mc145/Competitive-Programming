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


// ifstream fin(""); 
// ofstream fout(""); 


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
         ll n; 
         cin >> n; 
         ll range = 10000000000;
         ll cur  = n; 
         ll upper = n; 
         ll lower = 1; 
         ll mid = (lower + upper)/2; 
         ll ask = (lower + upper)/2; 
         ll counter = 0; 

         while(range != 1){
             cout << "? " << ask << endl; 
             bool a; 
             cin >> a; 
             if(counter != 0){
             if(a){
                 range = upper - ask - lower + 1;  
                 upper = upper - ask; 
                 mid = (lower + upper)/2; 
             }             
            else{
                range = upper - ask + 1; 
                lower = upper - ask + 1;
                mid = (lower + upper)/2;  
            }
             
         
         
         ask = abs(ask - mid);  
         }
         else{
             ask = upper; 
         }
        
         counter++; 
         }
         cout << "= " << mid << endl; 
         
     }

}