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
    int n; 
    cin >> n; 
    int boys[n]; 
    for(int i = 0; i<n; i++){
        int a; 
        cin >> a; 
        boys[i] = a; 
    }
    int m; 
    cin >> m; 
    int girl[m]; 
    for(int i = 0; i<m; i++){
        int b; 
        cin >> b; 
        girl[i] = b; 
    }
    int diff = sizeof(boys)/sizeof(boys[0]); 
    int diff2 = sizeof(girl)/sizeof(girl[0]); 
    sort(boys, boys + diff); 
    sort(girl, girl + diff2); 
        int count = 0; 
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(abs(boys[i] - girl[j]) <=1){
                count++;
                girl[j] = 1000; 
                break; 
            }
        }
    }
    cout << count; 
}