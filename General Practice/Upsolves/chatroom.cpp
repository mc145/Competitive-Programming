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





int main(){
    string k; 
    cin >> k;
    vector<int> h; 
    vector<int> e; 
    vector<int> l; 
    vector<int> o; 
    vector<int> l2; 
    for(int i = 0; i<k.length(); i++){
        if(k[i] == 'h'){
            h.push_back(i); 
        }
        if(k[i] == 'e'){
            e.push_back(i); 
        }
        if(k[i] == 'l'){
            l.push_back(i); 
            l2.push_back(i); 
        }
        if(k[i] == 'o'){
            o.push_back(i);  
        }
    }
    bool ya = false; 
    for(int z: h){
        for(int y: e){
            for(int x: l){
                for(int v: l2){
                for(int w: o){
                    if( z < y && y < x && x < v && v < w && v != x){
                            ya = true; 
                    }}
                }
            } 
        }
    }
    if(ya){
        cout << "YES"; 
    } 
    else{
        cout << "NO"; 
    }
}