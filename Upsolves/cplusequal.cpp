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




int main(){
    vector<int> ans; 
    int t; 
    cin >> t; 
    while(t--){
        ll a,b,n; 
        cin >> a >> b >> n;
         int count = 0;  
        while(max(a,b) <=n){
            if(a < b){
                a+=b; 
                count++; 
            }
            else{
                b+=a; 
                count++;
            }
        }
       cout << "\n" <<  count; 

    }
    

    

}