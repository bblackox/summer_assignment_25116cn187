#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; // n is the number of which we have to make the multiplication table .
    cin >> n;
    for(int i = 1 ; i<11 ; i++){
       int multi = n*i;
    cout << n << " X " <<  i << " = " << multi << endl;  
}
    return 0;
}