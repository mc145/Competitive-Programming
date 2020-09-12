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

int n,m; 
cin >> n >> m; 

// time complexity 
// overall time complexity is O(mn)

// space complexity 
// overall space complexity is O(2m + 2n) space


// O(2m) space
vector<pair<string,string> > lang; 


// O(m)
for(int i = 0; i<m; i++){
    string a,b; 
    cin >> a >> b; 
    lang.push_back(make_pair(a,b)); 
}
// O(n) space 
vector<string> lecture; 
// O(n)
for(int i = 0; i<n; i++){
    string c; 
    cin >> c; 
    lecture.push_back(c); 
}
// O(n) space 
vector<string> ans; 
int finj; 

// O(nm)
for(int i = 0; i<lecture.size(); i++){
    for(int j = 0; j<lang.size(); j++){
        if(lang[j].first == lecture[i] || lang[j].second == lecture[i]){
            finj = j; 
            break; 
        }
    }
    int l1 = lang[finj].first.length(); 
    int l2 = lang[finj].second.length(); 

    if(l1 == l2){
        ans.push_back(lang[finj].first); 
    }
    else if(l1 < l2){
        ans.push_back(lang[finj].first);
    }
    else{
        ans.push_back(lang[finj].second); 
    }
}

// O(n)
for(int i = 0; i<ans.size(); i++){
    cout << ans[i] << " "; 
}
}

