//  Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
// If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.
// Input

// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.
// Output

// For each test case, display the smallest number of notes that will combine to give N, in a new line.
// Constraints

//     1 ≤ T ≤ 1000
//     1 ≤ N ≤ 1000000
#include <iostream>

int main () {
  int T;
  std::cin >> T;
  int currency[] = {100, 50, 10, 5, 2, 1};
  while (T--) {
    int N;
    std::cin >> N;
    int counter = 0;
    for(int i = 0; i < 6; i++) {
      if (N >= currency[i]) {
        while(N >= currency[i]) {
          N -= currency[i];
          counter++;
        }
      }
    }
    std::cout << counter << std::endl;
  }
}

