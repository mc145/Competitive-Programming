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

vector<int> sort(vector<int> arr){
    sort(arr.begin(), arr.end()); 
    return arr; 
}

ifstream fin("whereami.in");
ofstream fout("whereami.out"); 



int main(){

char nl = '\n'; 
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

        int n; 
        fin >> n;
        vector<char> v; 
         while(n--){
             char a;
              fin >> a; 
              v.push_back(a); 
         }
         bool ya = true; 
         int maxi; 
         while(ya == true){
            for(int i = 1; i<=v.size(); i++){
                bool temp = false; 
                vector<string> ins;
                string a = "";  
                for(int j = 0; j<v.size()-i+1; j++){
                    a = ""; 
                    for(int k = j; k<=j+i-1; k++){
                        a.push_back(v[k]); 
                    }
                                 ins.push_back(a);       
                }
              
                        for(int z = 0; z<ins.size(); z++){
                            for(int y = 0; y<ins.size(); y++){
                                if(z != y && ins[z] == ins[y]){
                                    temp = true; 
                               
                                }
                            }
                        }
                        if(temp==false){
                            maxi = i; 
                        
                            ya = false;    
                        }
             
                        if(ya == false){
                            break; 
                        }
              
            }
              if(ya == false){
                    break; 
                }
         }
fout << maxi; 
}