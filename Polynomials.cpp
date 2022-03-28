#include <iostream>

template <typename T>
struct Terms{
  T coeff;
  uint32_t exponent;
};

template <typename T>
struct Poly {
  int n;
  Terms<T>* terms;
};

int main () {

  Poly<int> P;
  
  Terms<int> T[5];
  P.n = 5;
  P.terms = T;

  
}