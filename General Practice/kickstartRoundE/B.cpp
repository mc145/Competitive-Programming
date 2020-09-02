#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
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

int minInVector(vector<int> arr){
    int mins = 1e9; 
    for(int i = 0; i<arr.size(); i++){
        mins = min(mins, arr[i]); 
    }
    return mins; 
}

int maxInVector(vector<int> arr){
    int maxs = -1; 
    for(int i = 0; i<arr.size(); i++){
        maxs = max(maxs, arr[i]); 
    }
    return maxs; 
}

bool checkElement(vector<int> arr, int k){
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == k){
            return true; 
        }
    }
    return false; 
}


void solve(){
    /*
    1
1 1 1 1
    */
    int n,a,b,c;
    cin >> n >> a >> b >> c; 

    int notVisible = n - (a + b - c);

    if(notVisible <= 0){
        cout << "IMPOSSIBLE"; 
    }
    else{
    vector<int> ones; 
    for(int i = 0; i<notVisible; i++){
        ones.push_back(1); 
    } 
    vector<int> vis;
    for(int i = 0; i<c; i++){
        vis.push_back(n);
    }
    vector<int> first; 
    for(int i = 0; i<a-c; i++){
        first.push_back(n-1); 
    }
    vector<int> second; 
    for(int i = 0; i<b-c; i++){
        second.push_back(n-1);
    }
        for(int i = 0; i<first.size(); i++){
        cout << first[i] << " "; 
    }

    cout << vis[0] << " ";
    for(int i = 0; i<ones.size(); i++){
        cout << ones[i] << " ";
    }
    for(int i = 1; i<vis.size(); i++){
        cout << vis[i] << " ";
    }
    for(int i = 0; i<second.size(); i++){
        cout << second[i] << " "; 
    }
    
    

    } 



}

char nl = '\n'; 
char bl = ' ';
const int MOD = 1e9 + 7; 



int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
 int cnts = 1;
 int t; 
 cin >> t; 
 while(t--){
     cout << "Case #" << cnts << ": "; 
     solve(); 
     cnts++; 
     cout << nl; 
 }


}

