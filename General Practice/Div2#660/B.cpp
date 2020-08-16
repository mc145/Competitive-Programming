#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
#include<string.h> 
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

int base2toDeci(string n){
    int count = 0; 
    int sum = 0; 
    for(int i = n.length() - 1; i>=0; i--){
        sum+=(pow(2,count)*(n[i]-'0')); 
        count++; 
    }
    return sum; 
}


int main(){

int t;
scanf("%d", &t); 
while(t--){
    int g,l; 
    scanf("%d%d", &g,&l);
   if(l%g == 0){
       cout << g << " " << l << endl; 
   }
   else{
       cout << -1 << endl; 
   }

}
}