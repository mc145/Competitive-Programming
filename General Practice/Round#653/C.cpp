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

vector<int> eraseV(vector<int> arr, int i){
    arr.erase(arr.begin() + i); 
    return arr; 
}
string eraseS(string s, int i ){
    s.erase(s.begin() + i); 
    return s; 
}
char nl = '\n'; 


bool isBracket(string s){
   int countl = 0; 
    int countr = 0; 
    char a = s[0]; 
    int bo = 0; 
    for(char c: s){

        if(a == ')'){
           bo = 1;
        }
         if(a == '('){
             if(countr > countl){
              bo = 1; 
            }
            if(c == ')') {
                countr++;
            }
            else{
                countl++;
            }
            
        }
 
    }
    cout << bo; 
    if(bo == 0){
        return true; 
    }
    else{
        return false; 
    }
}

int main(){

    int t; 
     vector<char> bla; 
     vector<char> ins; 
      cin >> t;
      
      
       while(t--){
          
           int n; 
           int count = 0; 
           cin >> n; 
           string s;
            cin >> s;
        //    for(char z: s){
        //         ins.push_back(z); 
        //    }
           
            int countl = 0; 
            int countr = 0; 
            string t = ""; 
            bool ya = false; 
           for(int i = 0; i<s.length(); i++){
               /*
                bla.clear(); 
               string t = ""; 
               for(int j = 0; j<=i; j++){
                    bla.push_back(s[j]); 
               }
               for(char a: bla){
                t.push_back(a); 
               }
               if(isBracket(t)){
                   continue; 
               }
               else{
                   char  c = s[i]; 
                   
                   ins.erase(ins.begin() + i); 
                    ins.insert(ins.begin(), c); 
                     count++;
               }
               */
              
                if(s[i] == ')'){
                    countr++; 
                    t.push_back(s[i]); 
                }
                else{
                    countl++;
                    t.push_back(s[i]); 
                }
               
                if(countl == countr){
                         int countl = 0; 
                                    int countr = 0; 
                char a = s[0]; 
                    int bo = 0; 
                for(char c: s){

                if(a == ')'){
                    bo = 1;
                 }
            if(a == '('){
             if(countr > countl){
              bo = 1; 
            }
            if(c == ')') {
                countr++;
            }
            else{
                countl++;
            }
            
        }
                }
                
 
    
                    if(bo == 0){
                    
                        continue; 
                        
                    }
                    else{
                        char c = s[i]; 
                        s.erase(s.begin() + i); 
                        s.insert(s.begin(),  c); 
                        count++; 
                    }
                }
                
           }
           
           
    
      cout << "\n" << count; 
    
       
       }
}