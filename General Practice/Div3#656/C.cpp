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


// vector<int> erases(vector<int> k, int n){
//     vector<int>::iterator it; 
  
//     it = k.begin() + n; 
//     k.erase(it); 
//     return k; 
// }




int main(){
    char nl = '\n'; 

    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n;
        vector<int> ins; 
         for(int i = 0; i<n; i++){
             int a; 
             cin >> a;
             ins.push_back(a); 
         }
         int inc = 0; 
         int fi = ins.size(); 
         bool ya = false; 
         for(int i = ins.size() - 2; i>=0; i--){
             if(ins[i] > ins[i+1] && ya == false){
                 inc++;
                 //cout << nl << ins[i] << " " << ins[i+1];  
                 ya = true; 
             }
             else if(ins[i] <= ins[i+1]){
                 ya = false; 
             }
                if(ins[i] < min(ins[0], ins[ins.size() - 1])){
                    inc++;
                }

             if(inc == 2){
                 fi = i; 
                 break; 
             }
             
         }
         if(inc < 2){
             fi = -1; 
         }
          cout << fi + 1<< nl; 
    }
}