#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
using namespace std; 
typedef long long ll; 
typedef long double ld; 
int main(){
    int k; 
    vector<int> mon; 
    cin >> k;
    for(int i  = 0; i<12; i++){
        int a; 
        cin >> a; 
        mon.push_back(a); 
    }
    sort(mon.begin(), mon.end()); 
    int sum = 0; 
    int count = 0; 
   
    for(int i = mon.size() - 1; i>=0; i--){
         if(sum >= k){
                break; 
            }
            sum += mon[i]; 
            count++; 
           
    }
    
  

    if(sum < k){
        cout << -1; 
    }
    else{
    cout << count; 
}

}

