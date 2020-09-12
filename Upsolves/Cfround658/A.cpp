#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
#include<fstream>  
#include<set> 
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

vector<int> printShortestSuperSeq(vector<int> X, vector<int> Y) 
{ 
    int m = X.size(); 
    int n = Y.size(); 
  
    // dp[i][j] contains length of shortest supersequence 
    // for X[0..i-1] and Y[0..j-1] 
    int dp[m + 1][n + 1]; 
  
    // Fill table in bottom up manner 
    for (int i = 0; i <= m; i++) 
    { 
        for (int j = 0; j <= n; j++) 
        { 
            // Below steps follow recurrence relation 
            if(i == 0) 
                dp[i][j] = j; 
            else if(j == 0) 
                dp[i][j] = i; 
            else if(X[i - 1] == Y[j - 1]) 
                dp[i][j] = 1 + dp[i - 1][j - 1]; 
            else
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]); 
        } 
    } 
  
    // Following code is used to print shortest supersequence 
  
    // dp[m][n] stores the length of the shortest supersequence 
    // of X and Y 
    int index = dp[m][n]; 
  
    // string to store the shortest supersequence 
    vector<int> str; 
  
    // Start from the bottom right corner and one by one 
    // push characters in output string 
    int i = m, j = n; 
    while (i > 0 && j > 0) 
    { 
        // If current character in X and Y are same, then 
        // current character is part of shortest supersequence 
        if (X[i - 1] == Y[j - 1]) 
        { 
            // Put current character in result 
            str.push_back(X[i - 1]); 
  
            // reduce values of i, j and index 
            i--, j--, index--; 
        } 
  
        // If current character in X and Y are different 
        else if (dp[i - 1][j] > dp[i][j - 1]) 
        { 
            // Put current character of Y in result 
            str.push_back(Y[j - 1]); 
  
            // reduce values of j and index 
            j--, index--; 
        } 
        else
        { 
            // Put current character of X in result 
            str.push_back(X[i - 1]); 
  
            // reduce values of i and index 
            i--, index--; 
        } 
    } 
  
    // If Y reaches its end, put remaining characters 
    // of X in the result string 
    while (i > 0) 
    { 
        str.push_back(X[i - 1]); 
        i--, index--; 
    } 
  
    // If X reaches its end, put remaining characters 
    // of Y in the result string 
    while (j > 0) 
    { 
        str.push_back(Y[j - 1]); 
        j--, index--; 
    } 
  
    // reverse the string and return it 
    reverse(str.begin(), str.end()); 
    return str; 
} 



int main(){

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
    int n,m; 
    cin >> n >> m;
    vector<int> ns; 
    vector<int> ms;
    string x = "";  
    for(int i = 0; i<n; i++){
       int a;
       cin >> a; 
       ns.push_back(a);  
    }
  
    for(int i = 0; i<m; i++){
        int b; 
        cin >> b; 
      ms.push_back(b); 
    }
    vector<int> v; 
    for(int k: ns){
        for(int l: ms){
            if(k == l){
                v.push_back(k); 
            }
        }
    }
    if(v.size() != 0){
        cout << "YES" << nl << 1 << " " << v[0] << nl; 
    } 
    else{
        cout << "NO" << nl; 
    }
}
}