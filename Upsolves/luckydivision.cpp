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




int main(){
    int n; 
  bool ya = false; 
    cin >> n;
    if(n < 4){
        cout << "NO"; 
    } 
    else if(n >= 4 && n % 4 == 0){
        cout << "YES"; 
        }
        else{
            for(int i = 1; i <=n; i++){
                if(ya == false){
            string k = to_string(i);
            int count = 0;  
            for(char a: k){
                if(a != '4' && a != '7'){
                    count++; 
                }
                
            }
            if(count == 0){
                // lucky
                if(n%i == 0){
                    ya = true; 
                    cout << "YES"; 
            
                    break; 
                }
            }

        }
            }
            if(ya == false){
                cout << "NO"; 
            }
            

}
} 