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



int main(){
    string cons; 
string t; 
cin >> t; 
transform(t.begin(), t.end(), t.begin(),::tolower); 
for(char a: t){
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a== 'u' || a=='y'){
        continue;         
    }
    else{
        cons.push_back(a); 
    
    }
}
for(int i = 0; i<cons.length(); i+=2){
    cons.insert(i, "."); 
}
cout << cons; 

}
