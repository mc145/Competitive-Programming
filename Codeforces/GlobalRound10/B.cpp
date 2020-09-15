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

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

const int MOD = 1e9 + 7; 

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/


int t;
cin >> t; 
while(t--){
    ll n,k; 
    cin >> n >> k; 

    vector<pair<int, int> > ins; 
    vector<pair<int,int> > sec; 
    int cnt = 0; 
    for(int i = 0; i<n; i++){
        int zz; 
        cin >> zz; 
        ins.push_back(make_pair(zz, cnt)); 
         sec.push_back(make_pair(zz, cnt)); 

        ++cnt; 
    }
    sort(ins.begin(), ins.end()); 
    sort(sec.begin(), sec.end()); 
    if(n == 1){
        cout << 0 << nl; 
    }
    else{
    if(k%2 == 0){
        sec[0].first = ins[ins.size() - 1].first - ins[0].first; 
         for(int i = 0; i<ins.size(); i++){
             //cout << ins[0] + ins[i] - ins[ins.size() - 1] << " "; 
             // cout << ins[0].first + ins[i].first - ins[ins.size() - 1].first << nl; 
            // cout << "Initial is " << ins[i].first << nl; 
           //  ins[i].first = sec[0].first + sec[i].first - sec[ins.size() - 1].first;
            
             //cout << ins[i].first << nl; 
            ins[i].first = sec[ins.size() - 1].first - ins[i].first; 
            ins[i].first = sec[0].first - ins[i].first; 
         }
        sort(ins.begin(), ins.end(), sortbysec); 
        for(int i = 0; i<ins.size(); i++){
            cout << ins[i].first << bl; 
        }

    }
    else{
        for(int i = 0; i<ins.size(); i++){
            //cout << ins[ins.size() - 1] - ins[i] << bl; 
            ins[i].first = sec[ins.size() - 1].first - sec[i].first; 
        }
        sort(ins.begin(), ins.end(), sortbysec); 
        for(int i = 0; i<ins.size(); i++){
            cout << ins[i].first << bl; 
        }
    }
    cout << nl; 
}
}
}

