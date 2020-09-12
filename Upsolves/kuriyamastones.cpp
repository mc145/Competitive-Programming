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

int n; 
cin >> n; 
vector<int> ins; 
vector<int> sins; 
for(int i = 0; i<n; i++){
    int a; 
    cin >> a;
    ins.push_back(a); 
    sins.push_back(a); 
}

sort(sins.begin(), sins.end()); 
int m; 
cin >> m;

vector<int> l; 
vector<int> r; 
vector<int> type; 

for(int i = 0; i<m; i++){
    int b,c,d; 
    cin >> b >> c >> d; 
    l.push_back(b); 
    r.push_back(c); 
    type.push_back(d);
} 



vector<int> pref;
vector<int> spref; 

pref.push_back(sins[0]); 
spref.push_back(ins[0]); 

for(int i = 1; i<=ins.size(); i++){
    pref.push_back(pref[i-1] + ins[i]); 
    spref.push_back(spref[i-1]+ sins[i]); 
}

// 1 1-2 1-3 1-4 1-5 1-6 1-7 1-8 1-9 
// 3-5 = 1-5 - 1-2
// l-r = 1-r - 1-(l-1)

for(int i = 0; i<type.size(); i++){
    
}



}

