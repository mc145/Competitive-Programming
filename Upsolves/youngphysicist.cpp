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


    int n; 
    vector<int> xs; 
    vector<int> ys; 
    vector<int> zs;  
    cin >> n; 
    while(n--){
        int x,y,z; 
        cin >> x >> y  >> z;
        xs.push_back(x); 
        ys.push_back(y); 
        zs.push_back(z);  
    }
    int sumx = 0; 
    int sumy = 0; 
    int sumz = 0; 

       for(int a: xs){
           sumx+= a; 
       }
       
       for(int b: ys){
           sumy+=b; 
       }
       for(int c: zs){
           sumz += c; 
       }
    
    if(sumx == 0 && sumy == 0 && sumz == 0){
        cout << "YES"; 
    }
    else{
        cout << "NO"; 
    }
    


}