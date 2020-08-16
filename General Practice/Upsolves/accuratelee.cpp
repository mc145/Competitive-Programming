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
    string pre; 
    string suff;  
    int t; 
    cin >> t; 
    vector<string> ins; 
    vector<string> out; 
    while(t--){
        int n; 
        cin >> n; 
        string s; 
        cin >> s; 
        ins.push_back(s); 
    }
    for(string a: ins){
        
        int i = 0; 
        while(a[i] != '1' && i<= a.length() - 1){
            pre.push_back(a[i]); 
            i++; 
            
        }
        int j = a.length() - 1; 
        while(a[j] != '0' && j>= 0){
            suff.push_back(a[j]);
            j--; 
        }
        if((a.length() > suff.length() + pre.length()) && pre.length() > 0 && suff.length() > 0){
            cout << "\n" << pre << "0" << suff; 
        }
         else if((a.length() > suff.length() + pre.length()) && pre.length() == 0 && suff.length() > 0){
            cout << "\n" << "0" << suff; 
        }
          else if((a.length() > suff.length() + pre.length()) && pre.length() > 0 && suff.length() == 0){
            cout << "\n" << pre << "0"; 
        }
            else if((a.length() == suff.length() + pre.length()) && pre.length() > 0 && suff.length() == 0){
            cout << "\n" << pre; 
        }

         else if((a.length() == suff.length() + suff.length()) && suff.length() > 0 && pre.length() == 0){
            cout << "\n" << suff; 
        }
            else if(suff.length() == 0 && pre.length() == 0 && a.length() !=0){
                cout << "\n" << "0"; 
            }
        else{
            cout << "\n" << pre << suff; 
        }
     
        pre.clear(); 
        suff.clear(); 


    }
}
/*
1
10
0001111111
*/