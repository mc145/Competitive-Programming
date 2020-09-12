#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<stdio.h> 
#include<sstream>
#include<map> 
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
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

bool doesWork(vector<pair<int,int> > v, int mins){
    for(int i = 0; i<v.size(); i++){
        if(gcd(v[i].first, v[i].second) != mins){
            return false; 
        }
    }
    return true; 
}


char nl = '\n'; 
char bl = ' ';

void solve(){
    int n; 
    cin >> n;


        map<int,int> ins; 
        vector<int> srts; 
        int mins = 1e9+1; 
        for(int i = 0; i<n; i++){
            int z;
             cin >> z; 
            ins.insert(pair<int,int>(z,i+1));
             srts.push_back(z);
             mins = min(mins, z); 
        }
        sort(srts.begin(), srts.end()); 
    vector<pair<int,int> > change; 
        for(int i = 0; i<n; i++){
           if(i+1 != ins.at(srts[i])){
               change.push_back(make_pair(ins.at(srts[i]), i)); 
               cout << i+1<< bl << ins.at(srts[i]) << nl; 
           }
        }

          
        //cout << (doesWork(change, mins)? "YES": "NO") << nl; 
        

   }
    




int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 


/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/
int t; 
cin >> t; 
while(t--){
    solve(); 
}


}

