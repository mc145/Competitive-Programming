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


// ifstream fin(""); 
// ofstream fout(""); 


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
     while(t--){
         ll n; 
         cin >> n; 
         
         ll range = 10000000000;
         ll ask = (1 + n)/2; 
         ll counter = 0; 
            ll sask; 
            ll sasks; 
            ll minc = 1; 
            ll maxc = n; 
            ll desc = (1+n)/2; 
        while(range != 1){
            cout << "? " << ask << endl; 
            bool a; 
            cin >> a; 
            if(counter == 0){
                sask = ask; 
                ask = n; 
            }
            else{
                if(a){
                   maxc = abs(sask - ask); 
                   desc = (minc + maxc)/2; 
                sasks = ask; 
                if(ask - desc < 1 && ask + desc > n ){
                    ask = minc;
                }
                else{
                if(desc > ask){
                    ask = ask + desc;
                }
                 else{
                     ask = ask - desc; 
                    }
                }
                   sask = sasks; 
                   range = maxc - minc + 1; 
                }
                else{
                    minc = abs(sask - ask) + 1; 
                    desc = (minc + maxc)/2; 
                    sasks = ask; 
                    if(ask - desc < 1 && ask + desc > n){
                        ask = minc; 
                    }
                    else{
                      if(desc > ask){
                    ask = ask + desc;
                }
                    else{
                    ask = ask - desc; 
                     }
                    }
                    sask =sasks; 
                    range = maxc - minc + 1; 
                }
            }
            counter++; 
        }
            cout << "= " << desc << endl; 
         
     }

}


/*
Java:
int arr[] = new int[n]; 
C++:
int arr[n]; 

Java: 
static Scanner key = new Scanner(system.in); 
int a = key.nextInt(); 

C++:
int a; 
cin >> a; 

Java:
Arraylist<Integer> arr = new Arraylist<Integer>; 
C++:
vector<int> v; 
*/