#include <iostream>



int main () {

  char input;
  std::cin >> input;

  int totalIteration = input - 61;
  int space = 1;
  int n = input - 64;

  for (int i = 0; i < n; i++) {
    
    for (int j = totalIteration/2; j > 0; j--)
      std::cout << input;

    std::cout << input;

    for (int j =totalIteration/2; j > 0; j--)
      std::cout << input;

    totalIteration -= 2;
    std::cout << std::endl;
    input--;

    for (int j = space++; j > 0; j--)
      std::cout << " ";



  

  }

}