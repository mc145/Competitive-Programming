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
int t; 
cin >> t; 
while(t--){
    int n; 
    vector<int> ins; 
       vector<int> twos; 
    ins.clear(); 
    twos.clear(); 

    cin >> n; 
    while(n--){
        int a; 
        cin >> a;
         ins.push_back(a);
    }
  
    for(int k: ins){
        twos.push_back(k%2); 
    }
    int count1 = 0; 
    int count0 = 0; 
    for(int k: twos){
        if(k == 1){
            count1++; 
        }
        else{
            count0++; 
        }
    }
if(count1%2  != count0%2){
    cout << nl << "NO"; 
}
else{
    if(count1%2 == 0 && count0%2 == 0){
        cout << nl << "YES"; 
    }
    
    else{
        int bo = 1; 
        for(int as: ins){
            for(int ks: ins){
                if(abs(as - ks) == 1){
                    bo = 0; 
                }
            }
        }
        if(bo == 1){
            cout << nl << "NO"; 
        }
        else{
            cout << nl << "YES"; 
        }
    }
}

}
}