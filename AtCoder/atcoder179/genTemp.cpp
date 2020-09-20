#include<iostream>
#include<random> 
#include<vector>
#include<math.h> 
#include<string> 


using namespace std;
 

 int randoms(int max, int min){
     return rand()%(max - min + 1) + min; 
 }

char bl = ' '; 
char nl = '\n'; 

int numDivisors(int n){
    int cnt = 0; 
    for(int i =1; i*i<=n; i++){
        if(n% i == 0){
            cnt++; 
            cout << i << bl; 
        }
        if(n/i != i && n){
            cnt++; 
            cout << n/i; 
        }
        cout << nl; 
    }
    
    return cnt; 
}
 int main(){
     numDivisors(99); 
 }