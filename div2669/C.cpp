#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
#include<sstream>
#include<fstream>  
using namespace std; 
typedef long long ll; 
typedef long double ld; 


char nl = '\n'; 
char bl = ' ';
const int MOD = 1e9 + 7; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
 

 int n; 
 cin >> n; 


 vector<int> possOne; 

 for(int i = 1; i<=n; i++){
     possOne.push_back(i); 
 }

    int one; 
    vector<int> temp; 
 int curPos = 0; 
    while(possOne.size() != 1){
       
        cout << "? " << possOne[0] << " " << possOne[curPos]; 

        cout.flush(); 
        int a; 
        cin >> a; 
    
        if(a != 1){
            possOne.erase(possOne.begin()); 
        }
        else{
             if(temp.size() == 2){
                 one = possOne[0]; 
                temp.clear(); 
                 break; 
             }
            temp.push_back(1); 
            curPos++; 
        }
    }


}

