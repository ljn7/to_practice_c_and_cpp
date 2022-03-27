//code for social media beginner question

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main () {

  int n = 0;
  cout << "Enter the number: ";
  cin >> n;

  cout << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) 
      cout << "*";
    cout << endl;
  }
}