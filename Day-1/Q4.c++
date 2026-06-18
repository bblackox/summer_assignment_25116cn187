#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    int count = 0;
    cin >> n;
    
    while(n>0){
    int lastDigit = n%10;
    n = n / 10;
    count++;
    }
    cout << count;
    return 0;
}