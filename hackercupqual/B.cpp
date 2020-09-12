#include<iostream>
#include<vector>
#include<string>
#include<math.h> 
#include<algorithm> 
#include<sstream>
#include<stdio.h> 
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

ofstream fout("out2.txt"); 
ifstream fin("int2.txt"); 


int main(){
char nl = '\n'; 
char bl = ' ';
/*
For array arr use the following preamble to sort
int diff = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr + diff); 

*/

	int t;
	cin >> t; 
	int cnts = 1; 
	while(t--){
		int n; 
		cin >> n; 
		vector<char> ins(n); 
		int cnt = 0; 
		for(int i = 0; i<n; i++){
			//scanf("%c", ins[i]);  
			cin >> ins[i]; 
			if(ins[i] == 'A'){
				cnt++; 
			}
			else{
				cnt--; 
			}
		}
		cout << "Case #" << cnts << ": " << (abs(cnt) == 1 ? "Y": "N");
		cout << nl; 
		++cnts; 
	}
}

