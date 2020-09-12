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
    ll a,b,n,m; 
    cin >> a >> b >> n >> m; 
    int count = 0; 
    int con = n+m;
    int con2 = a+b; 
    bool ya = true; 
    while(ya && a + b > 0 && m+n > 0){
        if(a > b){
            b--;
            count++;
            n--; 
        }
        if(a == b){
            if(n > m){
                m--; 
                a--; 
                count++; 
            }
            else{
                n--; 
                b--; 
                count++; 
            }
        }
        else{
            a--; 
            m--; 
        }
        if(a < 0 || b < 0){
            ya = false; 
        }
    }

    if(ya == false){
        cout << nl << "No"; 
    }
    else{
        cout << nl << "Yes"; 
    }


}
}