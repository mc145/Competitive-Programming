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


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char nl = '\n'; 
char bl = ' ';



int n,a,b,c; 
cin >> n >> a >> b >> c; 

// ax + by + cz = n => maximize x + y + z; 

int ans = 0; 
int cur = 0; 

for(int x = 0; x<=n/a; x++){
    for(int y = 0; y<=n/b; y++){
        int z = (n - (a*x + b*y))/c; 
        if(a*x + b * y + c*z == n){
             ans = max(ans, x + y + z); 

        } 
        //cout << x << bl << y << bl << z << nl; 
    }
}

cout << ans; 

}

