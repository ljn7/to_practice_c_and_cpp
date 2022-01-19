#include <iostream>
#include <string>

int main () {
  int input, counter = 0;
  double halfMinusOne;
  std::cin >> input;
  int i = 1;
  halfMinusOne = (input / 2) - 1;
  if (halfMinusOne < 1) {
    std::cout << counter;
    return 0;
  }
  int total;
  while(true) {
    if (halfMinusOne < 1) {
    std::cout << counter;
    return 0;
    }
    total = 2 * (i + halfMinusOne);
    counter++;
    if (i == halfMinusOne) {
      std::cout << counter;
      return 0;
    }
    if (total > input) {
      std::cout << counter;
      return 0;
    } 
    if (total == input) {
      std::cout << counter;
      return 0;
    }
    i++;
    halfMinusOne -= 1;
    
  }
}