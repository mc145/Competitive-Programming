#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
typedef long double ld; 


int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); 
// ifstream cin("Filename.in"); 
// ofstream cout("Filename.out"); 
char nl = '\n'; 
char bl = ' ';

int t; 
cin >> t; 

for(int case_num = 1; case_num <= t; case_num++){


    // cout << "Case #" << case_num << ": "; 

    int n,a,b,c; 
    cin >> n >> a >> b >> c; 


    int rock = 0; 
    int sci = 0; 
    int pap = 0; 

    string s = ""; 
    for(int i = 0; i<n; i++){
    	char z; 
    	cin >> z;
    	s.push_back(z);  
    	if(z == 'R'){
    		pap++; 
    	}
    	else if(z == 'S'){
    		rock++; 
    	}
    	else{
    		sci++; 
    	}
    }

  //  cout << "THIS" << bl << pap << bl << rock << bl << sci << nl; 

    int fi = min(a,rock); 
    int se = min(b, pap); 
    int thi = min(c, sci);

//cout << "BLA" << bl << fi << bl << se << bl << thi << nl; 
    string ans = ""; 
    for(int i = 0; i<s.length(); i++){
    	if(s[i] == 'S'){
    		if(a > 0){ 
    			ans.push_back('R'); 
    			a--; 
    		}
    		else{
    			if(b - se >= c - thi){
    				ans.push_back('P');
    				b--;  

    			}
    			else{
    				ans.push_back('S');
    				c--;  
    			}
    		}
    	}
    	else if(s[i] == 'P'){
    		if(c > 0){
    			ans.push_back('S');
    			c--; 
    		}
    		else{
    			if(b - se >= a - fi){
    				ans.push_back('P'); 
    				b--; 
    			}
    			else{
    				a--; 
    				ans.push_back('R'); 
    			}
    		}
    	}
    	else{
    		if(a > 0){
    			ans.push_back('P'); 
    			b--; 
    		}
    		else{
    			if(a - fi >= c - thi){
    				ans.push_back('R');
    				a--;  
    			}
    			else{
    				ans.push_back('S'); 
    				c--; 
    			}
    		}
    	}
    }

    int tot = fi + se + thi; 

    if(tot < (n+1)/2){
    	cout << "NO" << nl; 
    }
    else{
    	cout << "YES" << nl << ans << nl; 
    }

}


}

