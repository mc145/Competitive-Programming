#include<iostream>
#include<math.h> 
#include<fstream> 
#include<vector>
#include<random> 


using namespace std; 

double rand(int max, int min){
    return ((int) rand()%(max-min+1) + min); 
}

int main(){
    cout << rand(2,3); 
}