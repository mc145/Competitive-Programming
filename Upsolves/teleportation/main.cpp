#include<iostream>
#include<vector>
#include<math.h> 
#include<string> 
#include<fstream> 

using namespace std; 
typedef long long ll; 

ifstream fin("teleport.in"); 
ofstream fout("teleport.out"); 

int main(){
    char nl  = '\n'; 
    int a,b,x,y; 
    fin >> a >> b >> x >> y; 
    int m1,c1,m2,c2; 
    m1 = abs(x-a); 
    c1 = abs(y-b); 
    m2 = abs(x-b); 
    c2 = abs(y-a);
    fout << min(abs(b-a),min(m1+c1, m2+c2)) << "\n";  
}