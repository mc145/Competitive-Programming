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

ll n; 
cin >> n;
int count1 = 0; 
     int count2 = 0;
    int count3 = 0; 
    int count4 = 0;
 while(n--){
     string s; 
     cin >> s; 
     
    if(s == "AC"){
        count1++; 
    }
    else if(s == "WA"){
        count2++; 
    }
    else if(s == "TLE"){
        count3++;
    }
    else{
        count4++; 
    }
 }

 cout << nl << "AC " << "x " << count1; 
  cout << nl << "WA " << "x " << count2;
   cout << nl <<  "TLE " << "x " << count3;
    cout << nl << "RE " << "x " << count4;   

}
