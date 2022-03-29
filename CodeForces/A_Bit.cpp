#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;
  int sum = 0;
  while (T--) {
    string str;
    cin >> str;
    if (str[0] == '+' || str[2] == '+')
      sum++;
    else 
      sum--;
  }
  cout << sum << endl;
}