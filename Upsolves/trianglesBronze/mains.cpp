#include<iostream>
#include<math.h> 
#include<vector>
#include<fstream> 


using namespace std; 

int main(){

    ifstream cin("triangles.in"); 
    ofstream cout("triangles.out"); 

    int n; 
    cin >> n; 
    vector<int> x; 
    vector<int> y;
    for(int i = 0; i<n; i++){
        int a,b; 
        cin >> a >> b; 
        x.push_back(a); 
        y.push_back(b);
    }
    int ans = -1; 
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            for(int k = 0; k<n; k++){
                if(x[i] == x[j] && y[j] == y[k]){
                    ans = max(ans, abs((x[j] - x[k]) * (y[j] - y[i])));
                }
            }
        }
    }
    cout << ans; 
}