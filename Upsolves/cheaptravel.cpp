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

    int n,m,a,b;
    cin >> n >> m >> a >> b; 
    int curCount = 0; 
    int money = 0;
    double div = (double) b/ (double) a; 
    while(curCount <= n){
        if(div <= m  && n - curCount >= m){
            curCount+=m; 
            money+=b; 
           //cout << nl << money << "   " << curCount; ; 
        }
        if(curCount >= n){
            break; 
        }
        else if(div> m){
            curCount+=1; 
            money+=a; 
           //cout << nl << money; 
        }
        if(curCount >= n){
            break; 
        }
        else if(div <= m && n-curCount < m){
            if(a * (n-curCount) <= b){
                int bla = n-curCount; 
                curCount+=bla;
                money += (a * bla); 
                 //cout << nl << money << "   " << curCount; 
            }
            else{
                curCount+=m; 
                money+=b;
              // cout << nl << money; 
            }
        }
        if(curCount >= n){
            break; 
        }
    }
cout << money; 

}