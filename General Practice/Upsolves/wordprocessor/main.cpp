#include<iostream>
#include<fstream>
#include<math.h> 
#include<string> 
#include<vector> 

using namespace std; 

ifstream fin("word.in"); 
ofstream fout("word.out"); 

int main(){
    int n,k; 
    fin >> n >> k;
    vector<string> ins; 
    for(int i = 0; i<n; i++){
        string a; 
        fin >> a; 
        ins.push_back(a); 
    }
    vector<int> siz; 
    for(string l: ins){
        siz.push_back(l.length()); 
    }
    int curSum = 0; 
    for(int i = 0; i<siz.size(); i++){
        if(curSum + siz[i] <= k){
            if(i == 0){
                fout << ins[i]; 
            }
            else{
            fout << " " << ins[i]; 
            }
            curSum += siz[i]; 
        }
        else{
            fout << "\n" << ins[i]; 
            curSum = siz[i];
        }
    }
    fout << "\n"; 
}