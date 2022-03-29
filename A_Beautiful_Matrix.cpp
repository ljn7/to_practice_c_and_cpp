#include <bits/stdc++.h>

using namespace std;

int main () {

  int markUp;
  for (int i = 0; i < 24; i++) {
    int temp = 0;
    cin >> temp;
    if (temp)
      markUp = i;
  }
  if ( markUp > 12) 
    cout << markUp - 12 << endl;

  else if (markUp < 12) {
    markUp -= 12;
    cout << markUp * -1 << endl;
  }
  else 
    cout << markUp << endl;
}