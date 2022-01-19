#include <iostream>
#include <string>
using namespace std;

int romanToInt(const string& s) {
  int sum = 0;
  int size = s.size();
  enum roman {I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000};
  for (int i = 0; i < size; i++) {

  }
  return sum;
}
int main () {
  string s = "I";
  cout << romanToInt(s);
}