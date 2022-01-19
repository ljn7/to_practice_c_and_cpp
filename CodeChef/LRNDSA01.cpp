#include <iostream>
int main() {
  int Arr[101], i, counter;
  i = 0;
  counter = 0;
  for (i = 0; i < 100; i++) {
    std::cin >> Arr[i];
    if (Arr[i] == 42)   
      break;
  }
  counter = i;
  i = 0;
  while (i < counter)
    std::cout << Arr[i++] << std::endl;
    
	return 0;
}
