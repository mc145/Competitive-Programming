#include<iostream>

using namespace std; 
int gcd(int n, int k){
    if(k == 0) return n;
    return gcd(k, n%k); 
}


int main(){
    cout << gcd(128, 96); 
}
