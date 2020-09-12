#include<iostream>
#include<string> 
#include<vector> 

using namespace std; 

int main(){
    // Data Types
    /*
    multiple line comment
    dkfjkd
    */ 
   /*
    integer - int -10^10 => 10^10
    decimal - double 3.14, 3.33333, -1.20, 5.0 -10^10 => 10^10
    long long - any requirement you need
    long double

    string s = "He1345wkkljd"
    'A', '2', 
    char (character) = 'a';
    
    s[0] = 'H'; 

    char a = '2';
    int b = (int) a;
    string s = "234"; 
    int a = stoi(s); 

    (data type) (name of the array)[(size of the array)];
    
    int arr[6] = {1,2,3,4,5,6};
     int a = arr[0]; => 1
     int b = arr[1]; => 2
     limitation is that its a fixed size
     
    vector<(data type)> (name); 
    vector<int> v;
     vector<string> hello; 

     int a = 2; 
     v.push_back(a); [2]
     int b = 3; 
     v.push_back(b); [2,3]
     v.erase(v.begin() + 0); [3]

     sort((name) + (size)); 
    sort(arr.begin(), arr.begin() + n); 
    sort(v.begin(), v.end()); 

    // size of vector v.size() 
    // size of array arr.length() 
    // length of string s.length()

    printing   cout << 
    reading from input cin >> 
    "\n"

    for(int i = 0; i<=5; i+=2){
        cout << "\n" << "Hello World"; 
    }

    int i = 0; 
    while(i <= 5){
        (code) 
        i++; 
    }

    int => int
    string => string
    int a = 2; 
    int b = 2; 
    if(a == b){
        (code)
    }
    else if(that's not true but if this is true){
        (code) 
    }
    else{
        (code)
    }

    n mod m
    n % m
    2 % 2 == 0
    5 % 2 == 1
   */ 

int n; 
cin >> n;
 int p1[n]; 
    int p2[n]; 
    int p3[n]; 
     
for(int i = 1; i<=n; i++){
   int a,b,c; 
   cin >> a >> b >> c;
   p1[i-1] = a; 
   p2[i-1] = b; 
   p3[i-1] = c; 
}
int counter = 0; 
int curSum = 0; 
for(int j = 0; j<=n-1; j++){
    curSum = curSum + p1[j]; 
    curSum = curSum + p2[j]; 
    curSum = curSum + p3[j]; 
    if(curSum >= 2){
        counter = counter + 1; 
    }
    curSum = 0; 
}
cout << counter; 
}