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





int main(){

char nl = '\n'; 
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

int n;
cin >> n; 
vector<int> ins; 
for(int i = 0; i<n; i++){
    int a; 
    cin >> a; 
    ins.push_back(a); 
}
int m; 
cin >> m;
vector<int> juicy; 
for(int i = 0; i<m; i++){
    int b; 
    cin >> b; 
    juicy.push_back(b); 
}
// precompute the limits
int sum = 0; 
vector<int> lim; 
for(int i = 0; i < ins.size(); i++){
    sum+=ins[i]; 
    lim.push_back(sum); 
}
vector<int> ans; 
// binary search for the correct answer
int low  = 0; 
    int high = n-1; 
    int mid; 
for(int i = 0; i<juicy.size(); i++){
    bool ya = true; 
    low = 0; 
    high = n-1; 
    while(ya){
        mid = low + floor((high-low)/2); 
        if(mid == 0){
            ya = false; 
        }
        else if(mid != 0){
        int c = juicy[i]; 
        int l = lim[mid]; 
        int k = lim[mid-1]; 

        if(c == l || c==k){ 
            if(c == k){
                mid-=1; 
            }
            ya = false; 
        }
      
        else{
            if(high - low == 1){
                mid+=1; 
                ya = false; 
            }
            else{
            if(c < l && k < c){
                ya = false; 
            }
            else{
                if(c < l){
                    high = mid; 
                }
                else{
                    low = mid;
                }
        }
            }
        }
       //cout << nl << i << " " << mid << " " << high << " " << low; 
    }
    } 
    ans.push_back(mid+1); 
}
for(int z: ans){
    cout << nl << z; 
}
 

}