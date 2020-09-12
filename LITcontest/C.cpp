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
vector<int> nums; 
for(int i = 0; i<n; i++){
    int zz = 0; 
    cin >> zz;
     nums.push_back(zz);  
}
int m; 
cin >> m;
vector<int> left; 
vector<int> right; 
for(int i = 0; i<m; i++){
    int a,b; 
    cin >> a >> b; 
    left.push_back(a);
    right.push_back(b); 
}
vector<int> odd; 
vector<int> even; 

vector<int> odds; 
vector<int> evens; 

for(int i = 0; i<nums.size(); i+=2){
    odds.push_back(nums[i]); 
}
for(int i = 1; i<nums.size(); i+=2){
    evens.push_back(nums[i]); 
}
odd.push_back(odds[0]); 
for(int i = 1; i<odds.size(); i++){
    odd.push_back(odds[i] * odd[i-1]);
}
even.push_back(evens[0]); 
for(int i = 1; i<evens.size(); i++){
    even.push_back(evens[i] * even[i-1]); 
}



for(int i = 0; i<m; i++){
      int l = left[i]; 
    int r = right[i]; 
  
    if(l == 1){
        l = 0; 
        if(r%2 == 0){
            r = r/2 - 1; 
        }
        else{
          r/=2;
        } 
        cout << odd[r]/odd[0] << nl; 
        
    }
    else{
  
    if(l%2 == 1){
     if(r%2 == 0){
            r = r/2 - 1; 
        }
        else{
        r = r/2;
        } 
    l = l/2 - 1; 
    int z = odd[r]; 
    int y = odd[l]; 
    cout << z/y << nl; 
    }   
    else{
        if(r%2 == 0){
            r = r/2 - 1; 
        }
        else{
        r = r/2;
        } 
        l = l/2 - 1; 
        //cout << even[r]/even[l] << nl; 
        int zs = even[r]; 
        int ys = even[l];
        cout << zs/ys << nl; 
    }
}
}


}

