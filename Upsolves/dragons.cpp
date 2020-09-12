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





int main(){

char nl = '\n'; 
char bl = ' ';

int s,n; 
cin >> s >> n; 
vector<pair<int,int> > v; 

for(int i = 0; i<n; i++){
	int a,b; 
	cin >> a >> b; 
	v.push_back(make_pair(a,b)); 
} 
sort(v.begin(), v.end()); 

 
while(v[0].first < s && v.size() > 0){
	s+=v[0].second; 
	v.erase(v.begin() + 0);
}
if(v.size() == 0){
	cout << "YES" << nl; 
}
else{
	cout << "NO" << nl; 
}

/*


10 1
100 100

2 2 
1 99 
100 0
*/














}