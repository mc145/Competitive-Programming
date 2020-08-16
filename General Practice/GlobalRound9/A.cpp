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

int main(){

char nl = '\n'; 

int t; 
cin >> t; 
while(t--){
    int n; 
    cin >> n;
    ll arr[n]; 
    for(ll i = 0; i<n; i++){
        cin >> arr[i]; 
    }
    for(ll i = n-1; i>=2; i--){
        if(arr[i] - arr[i-1] > 0 && arr[i-1] - arr[i-2] > 0){
            arr[i-1] = arr[i-1] * -1; 
        }
        else if(arr[i] - arr[i-1] < 0 && arr[i-1] - arr[i-2] < 0){
            arr[i-1] = arr[i-1] * -1; 
        }
        else{
            continue; 
        }
    }
    cout << nl; 
    for(ll i = 0; i<n; i++){
        cout << arr[i] << " "; 
    }


}
}
