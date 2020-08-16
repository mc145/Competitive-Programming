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






int main(){
    char nl = '\n';
    int count = 0; 
for(double a = 1.0; a<=100.0; a++){
    for(double b = 1.0; b<=100.0; b++){
        for(double c = 1.0; c<=100.0; c++){
            if(a != b && a!=c && b!=c && (int(pow(a,c)) + int(pow(b,c))) % 130 == 0){
                cout << nl << a << "  " << b << "  "<< c; 
            }
        }
    }
} 
cout << count; 
}