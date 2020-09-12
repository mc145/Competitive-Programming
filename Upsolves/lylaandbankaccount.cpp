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

int a; cin>>a;
	if(a>=0)
		cout<<a;
	else
	{
		if(abs(a)%10>(abs(a)/10%10))
			cout<<a/10;
		else
			cout<<(a/100)*10-(abs(a)%10);
	}



}