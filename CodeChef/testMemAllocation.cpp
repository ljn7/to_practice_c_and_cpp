#include <iostream>
#include <cstdlib>
#include <string>
class MemoryAllocation {
  public:
  unsigned long long int t;
  int a;
  char b, ba, bb, bc, bd;
}; 
int main () {
  MemoryAllocation testing;
  system ("CLS");
  int c = 10;
  
  std::cout << &testing << std::endl;
  std::cout << c << std::endl;
  testing.t = 1;
  std::cout << testing.t << std::endl;
  MemoryAllocation& nothing = testing;
  std::cout << testing.t << std::endl;
  nothing.t = 2;
  std::cout << &nothing << std::endl;

  std::cout << sizeof(c) << std::endl;
  MemoryAllocation* memtest;
  std::cout << sizeof(memtest) << std::endl;
  std::cout << sizeof(testing) << std::endl;
  int* a = &c;
  std::cout << sizeof(a) << std::endl;
  
}
