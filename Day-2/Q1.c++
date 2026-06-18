#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int sum = 0;
  cin >> n;
  while(n>0){
    int lastDigit = n%10;
    sum = sum + lastDigit;
    n = n/10;
  }
  cout << sum;
  return 0;
}