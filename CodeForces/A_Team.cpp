#include <bits/stdc++.h>

using namespace std;

int main () {
  short int T;
  cin >> T;
  int sum = 0;

  while (T--) {
    int a, b, c;
    cin >> a >> b >> c; 
    if (a && b && c) 
      sum++;
    else if (a && b)
      sum++;
    else if (a && c)
      sum++;
    else if (b && c)
      sum++;
  }
  cout << sum << endl;
}