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

vector<int> eraseV(vector<int> arr, int i){
    arr.erase(arr.begin() + i); 
    return arr; 
}
string eraseS(string s, int i ){
    s.erase(s.begin() + i); 
    return s; 
}
char nl = '\n'; 




int main(){
vector<char> c; 
int n;
 cin >> n; 


 for(int y = 0; y<n; y++){
     char a; 
     cin >> a; 
    c.push_back(a);
 }
bool ya = false; 
bool ya2 = false; 

int countl = 0; 
int countr = 0; 


for(char a: c){
    if(ya == false){
    if(a == '<'){
        countl++; 
    }
    }
    if(a == '>'){
        ya = true; 
    }
    
}

for(int j = n-1; j>=0; j--){
     char z = c[j]; 
   
    if(ya2 == false){
   
    if( z == '>'){
        countr++;
        
    }
    }
    if(z == '<'){
        ya2 = true; 
    }
    
}
cout << countl + countr;  

 }