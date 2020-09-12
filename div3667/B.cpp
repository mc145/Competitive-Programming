#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
#include<sstream>
#include<fstream>  
using namespace std; 




char nl = '\n'; 
char bl = ' ';
const long long MOD = 1e9 + 7; 



long long min(long long a, long long b){
    if(a > b) return b;
    return a; 
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
 long long t; 
 cin >> t; 
 while(t--){
       
        long long x,y,z,c,n; 
        cin >> x >> y >> z >> c >> n; 
        long long cache = n; 
         pair<long long,long long> a = make_pair(x,z);
        pair<long long,long long> b = make_pair(y,c); 

        //check 1

        a.first-=min(n, a.first - a.second); 

        n-=(min(n, x - a.second)); 

        b.first-=min(n, b.first - b.second); 

        long long check1 = a.first * b.first; 
        //cout << a.first << bl << b.first << bl << a.first * b.first << endl; 
        a.first = x;
        b.first = y; 

        n = cache; 
      
        b.first-=min(n, b.first - b.second); 
        //cout << b.first << nl; 
    n-=(min(n, y - b.second)); 
    //cout << n << nl; 

        a.first-=min(n, a.first - a.second); 

        check1 = min(check1, a.first * b.first); 
        //cout << a.first * b.first << nl; 
        cout << check1 << nl; 
        

 }


}

