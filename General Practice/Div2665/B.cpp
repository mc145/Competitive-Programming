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

char nl = '\n'; 

void solve(){
    ll zero,one,two;
     cin >> zero >> one >> two; 
     ll zeros, ones, twos; 
     cin >> zeros >> ones >> twos; 

     ll ans = 0; 

        int fi = min(zero,twos); 
     twos-=fi; 
     zero-=fi; 

        int se = min(twos,two); 
     twos-= se; 
     two-=se; 
     

        int the = min(twos, one); 
     twos-=the;
     one-=the; 
     ans-=2*the; 

     ll four = min(two, ones); 
    two-=four;
    ones-=four;
    ans+=2*four; 
   // cout << four << " " << 2 * four << " " << ans << nl; 

    int five = min(ones, one);
    one-=five;
    ones-=five; 

    int six = min(zero, ones); 

    ones-=six;
    zero-=six; 
    int seven = min(zero, zeros);

    zero-=seven; 
    zeros-=seven; 

    cout << ans << "\n";  


}


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 

char bl = ' ';
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

