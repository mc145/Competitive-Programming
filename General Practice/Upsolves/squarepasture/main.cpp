#include<iostream>
#include<vector>
#include<fstream>
#include<math.h>

using namespace std; 

ifstream fin("square.in"); 
ofstream fout("square.out"); 

int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4; 
    fin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4; 
    int sx = min(min(min(x1,x2),x3),x4); 
    int bx = max(max(max(x1,x2),x3),x4); 
    int sy = min(min(min(y1,y2),y3),y4);
    int by =  max(max(max(y1,y2),y3),y4);
    fout << (int) pow(max(bx-sx, by - sy),2) << "\n"; 
}