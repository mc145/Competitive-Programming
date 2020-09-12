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
     /* n-1/m-1 is the number of extra socks he can get, after expiring n socks. Thereefore, the answer is n + n-1/m-1
     */
    int n,m; 
    cin >> n >> m; 
    cout << floor((n-1)/(m-1)) + n; 
}