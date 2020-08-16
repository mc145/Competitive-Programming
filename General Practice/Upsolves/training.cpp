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

int t; 
cin >> t; 
int k  = 1; 
while(t--){
    int n,p; 
    cin >> n >> p;
    vector<int> skill; 
    while(n--){
        int a; 
        cin >> a;
        skill.push_back(a); 
    }
    sort(skill.begin(), skill.end()); 
    int mins = 999999; 
    for(int i = 0; i<skill.size() - p + 1; i++){
        int sum = 0; 
    int maxs;
        for(int j = i; j<i+p; j++){
            maxs = skill[i+p-1]; 
            sum+=maxs-skill[j]; 
             //cout << nl << "Maxs minus skill which was added to the sum is " << maxs - skill[j]<< " Sum when i is " << i << " is equal to " << sum << " Current minimum is " << mins; 
        }
        if(sum < mins){
            mins = sum; 
        }
       
    }
   //cout << nl << "Case #" << k <<  ": " << mins; 
    k++; 
   
}
}