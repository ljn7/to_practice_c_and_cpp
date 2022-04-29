#include <iostream>

class BOX {
  

  public:
    BOX(){}
    BOX(int A) 
      : a(A) {}
    int a;

    BOX operator+(BOX& RIGHT) {
      BOX Result;

      std::cout << "RIGHT " << RIGHT.a << std::endl;

      Result.a = this -> a + RIGHT.a;
      
      return Result.a;
    }
};

int main () {
  BOX A(10);
  BOX B(20);
  BOX RESULT;

  RESULT = A + B;
  std::cout << "Result " << RESULT.a;
}