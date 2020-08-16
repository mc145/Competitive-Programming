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

ifstream fin("lineup.in");
ofstream fout("lineup.out"); 


 vector<pair<string,string> > v;  

bool isOk(string s){
    bool ya = false; 
    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<s.length(); j++){
            string k; 
            string ks; 
            string kr; 
            if(s[j] == 'a') k = "Beatrice";
            if(s[j] == 'b') k = "Belinda"; 
            if(s[j] == 'c') k = "Bella"; 
            if(s[j] == 'd') k = "Bessie"; 
            if(s[j] == 'e') k = "Betsy"; 
            if(s[j] == 'f') k = "Blue"; 
            if(s[j] == 'g') k = "Buttercup"; 
            if(s[j] == 'h') k = "Sue"; 
            if(j > 0)
                if(s[j-1] == 'a') ks = "Beatrice";
                if(s[j-1] == 'b') ks = "Belinda"; 
                if(s[j-1] == 'c') ks = "Bella"; 
                if(s[j-1] == 'd') ks = "Bessie"; 
                if(s[j-1] == 'e') ks = "Betsy"; 
                if(s[j-1] == 'f') ks = "Blue"; 
                if(s[j-1] == 'g') ks= "Buttercup"; 
                if(s[j-1] == 'h') ks = "Sue";
            if(j < s.length() - 1)
                if(s[j+1] == 'a') kr = "Beatrice";
                if(s[j+1] == 'b') kr = "Belinda"; 
                if(s[j+1] == 'c') kr = "Bella"; 
                if(s[j+1] == 'd') kr = "Bessie"; 
                if(s[j+1] == 'e') kr = "Betsy"; 
                if(s[j+1] == 'f') kr = "Blue"; 
                if(s[j+1] == 'g') kr= "Buttercup"; 
                if(s[j+1] == 'h') kr = "Sue";
            if(k == v[i].first || k == v[i].second){
                if((j > 0 && ks == v[i].second) || (j > 0 && kr == v[i].second) || (j == 0 && kr == v[i].second) || (j < s.length()-1 && kr == v[i].second) || (j < (s.length() - 1) && ks == v[i].second) || (j == s.length() - 1 && ks == v[i].second) || ((j > 0 && ks == v[i].first) || (j > 0 && kr == v[i].first) || (j == 0 && kr == v[i].first) || (j < s.length()-1 && kr == v[i].first) || (j < (s.length() - 1) && ks == v[i].first) || (j == s.length() - 1 && ks == v[i].first))){
                        continue; 
                }
                else{
                    ya = true; 
                    break; 
                }
                
            }
        }
    }
    if(ya) return false; 
    else return true; 
}


int main(){

char nl = '\n'; 
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
int n;
 fin >> n;

 while(n--){
string a,b,c,d,e,f; 
fin >> a >> b >> c >> d >> e >> f;
v.push_back(make_pair(a,f)); 
 }

string s = "abcdefgh"; 
while(isOk(s) == false){
    bool blas = next_permutation(s.begin(), s.end()); 
}              

    vector<string> fins; 
            for(int j = 0; j<8; j++){
                string k; 
            if(s[j] == 'a') k = "Beatrice";
            if(s[j] == 'b') k = "Belinda"; 
            if(s[j] == 'c') k = "Bella"; 
            if(s[j] == 'd') k = "Bessie"; 
            if(s[j] == 'e') k = "Betsy"; 
            if(s[j] == 'f') k = "Blue"; 
            if(s[j] == 'g') k = "Buttercup"; 
            if(s[j] == 'h') k = "Sue"; 
            fins.push_back(k); 
            } 
            for(string bz: fins){
                fout << bz << nl; 
            }


}