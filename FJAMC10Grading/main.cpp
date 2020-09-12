#include<iostream>
#include<vector>
#include<fstream>
#include<math.h> 
using namespace std; 
ifstream fin("input.in"); 
ofstream fout("inputs.out"); 





int main(){
    char nl = '\n'; 
    char correct[25] = {'E','D','B','B','B','D','C','D','B','D','B','D','D','A','D','C','A','B','B','E','D','B','C','D','E'}; 
    vector<char> ins; 
    vector<double> distribution; 
    for(int i = 0; i<25; i++){
        char a; 
        fin >> a; 
        ins.push_back(a); 
    }
        double score = 0; 
    for(int i = 0; i<25; i++){
        int corr = correct[i]; 
        int user = ins[i]; 
        if(corr == user){
            score+=6; 
            distribution.push_back(6.0); 
        }
        else if(user == '0'){
            score+=1.5; 
            distribution.push_back(1.5); 
        }
        else{
            distribution.push_back(0);
        }
    
    }
    fout << score << nl;
    for(double n: distribution){
        fout << n << " ";
    } 
}

