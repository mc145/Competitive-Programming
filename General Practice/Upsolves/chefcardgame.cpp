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


ll sumOfDigits(ll n){
    ll sum = 0; 
    while(n != 0){
        sum+=n%10; 
        n /= 10; 
    }
    return sum; 
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
  while(t--){
      int n;
       cin >> n; 
       vector<ll> chef;
        vector<ll> morty; 
        ll mpoint = 0;
         ll chefpoint = 0; 
        while(n--){
            ll a,b; 
            cin >> a >> b; 
            chef.push_back(a); 
            morty.push_back(b); 
        }
        for(int i = 0; i<chef.size(); i++){
            if(sumOfDigits(chef[i]) > sumOfDigits(morty[i])){
                    chefpoint++; 
            }
            else if(sumOfDigits(chef[i]) < sumOfDigits(morty[i])){
                    mpoint++; 
            }
            else{
                chefpoint++; 
                mpoint++; 
            }

        }
            if(chefpoint > mpoint){
                cout << nl << 0 << " " << chefpoint; 
            }
            else if(mpoint > chefpoint){
                cout << nl << 1 << " " << mpoint; 
            }
            else{
                cout << nl << 2 << " " << mpoint; 
            }
  }
}