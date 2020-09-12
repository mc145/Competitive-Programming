#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
using namespace std; 
typedef long long ll; 
typedef long double ld; 
int main(){
    char top[10] = {'q', 'w','e','r','t','y','u','i','o','p'}; 
    char mid[10] = {'a','s','d','f','g','h','j','k','l',';'}; 
    char bot[10] = {'z','x','c', 'v', 'b', 'n', 'm', ',', '.', '/'}; 
    vector<char> as; 
    char a; 
    cin >> a; 
    string ins; 
    cin >> ins;
    for(int j  = 0; j<ins.length(); j++){
    for(int i  = 0; i<10; i++){
        int t = top[i]; 
        int s = bot[i]; 
        int m = mid[i];   
        if(ins[j] == t){
            if(a == 'L'){
                as.push_back(top[i+1]); 
                break; 
            }
            else{
                as.push_back(top[i-1]); 
                break; 
            }
        }

             if(ins[j] == s){
            if(a == 'L'){
                as.push_back(bot[i+1]); 
                break; 
            }
            else{
                as.push_back(bot[i-1]); 
                break; 
            }
        }

        if(ins[j] == m){
            if(a == 'L'){
                as.push_back(mid[i+1]);
                break; 
            }
            else{
                as.push_back(mid[i-1]); 
                break; 
            }
        }
    }
    }
    for(char zz: as){
        cout << zz; 
    }
}