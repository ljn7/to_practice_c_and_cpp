#include <bits\stdc++.h>

using namespace std;
//Prints the sum of n number
void sum(int n) {
  static int sumOfN = 0;
  if (n == 0)
    return;
  sumOfN += n;
  sum(n - 1);
  if (n == 1) 
    cout << sumOfN << endl;;
}

int fact(int n) {
  static int facts = n;
  if (n == 0) 
    return 1;
  facts = n * fact(n - 1);
}

//pattern printing 
// n = 5

// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

void pattern_printing(int n) {
 
  if (n == 0)
    return;
  pattern_printing(n - 1);
  int i = 1;
  while (i <= n)
    cout << i++ << " ";
  cout << endl;
}

void pattern_printing1(int n) {
 
  if (n == 0)
    return;
  int i = 1;
  while (i <= n)
    cout << i++ << " ";
  cout << endl;
  pattern_printing1(n - 1);
}

void pattern_printing2(int n) {
  static int intial_value = n;
  if (n == 0)
    return;

  int i = n, counter = 0;
  while (i > 1) {
    cout << "  ";
    i--;
    counter++;
  }

  i = intial_value - counter;
  while (i > 0)
    cout << i-- << " ";
  cout << endl;
  pattern_printing2(n - 1);
}

void pattern_printing3(int n) {
  static int intial_value2 = n;
  if (n == 0)
    return;
  int i = n;
  int space = intial_value2 - n;
  while (space-- > 0)
    cout << "  ";
  while (i > 0) {
    cout << i-- << " ";
  }
  cout << endl;
  pattern_printing3(n - 1);
  
}
int main () {
  // sum(5);
  // cout << fact(5) << endl;
  int n = 5;

  while(true) {
    pattern_printing2(n);
    pattern_printing(n);
    pattern_printing3(n);
    pattern_printing1(n);
  }
  
}