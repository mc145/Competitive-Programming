#include<iostream>
#include<fstream>
#include<vector>
#include<string> 
#include<math.h>
using namespace std; 
ofstream fout("second.txt"); 
 int lcm(int x, int y){
    int be; 
    for(int i = min(x,y); i>=1; i--){
        if(x % i == 0 && y % i == 0){
            be = i; 
            break; 
        }
    }
    return x*y/be; 
}
int main(){
    for(int i = 1; i<=100; i++){
        for(int j = 1; j<=100; j++){
            if(i*j/(int) abs(i-j) < 0){
                cout << "\n" << i << " " << j; 
            }
        }
    }
} 