#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<set> 
#include<sstream>
using namespace std; 
typedef long long ll; 
typedef long double ld; 
int main(){
    int a; 
    cin >> a; 
    string n; 
    cin >> n; 
    int countz = 0;
    int counto = 0; 
    for(int i = 0; i<n.length(); i++){
        if(n[i] == '0') countz++;
        else counto++;
    
}

cout << abs(countz - counto); 
}