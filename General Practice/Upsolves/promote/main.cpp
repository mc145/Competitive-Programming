#include<iostream>
#include<fstream>
#include<vector>
#include<string> 

using namespace std; 

ifstream fin("promote.in"); 
ofstream fout("promote.out"); 

int main(){
    int b1,b2,s1,s2,g1,g2,p1,p2; 
    fin >> b1 >> b2 >> s1 >> s2 >> g1 >> g2 >> p1 >> p2;      
    int sf = 0; 
    int gf = 0; 
    int pf = 0; 
    sf+=p2-p1; 
    sf+=g2-g1; 
    sf+=s2-s1; 
    gf+=g2-g1; 
    gf+=p2-p1; 
    pf+=p2-p1; 
    fout << sf << "\n" << gf << "\n" << pf << "\n"; 


}
