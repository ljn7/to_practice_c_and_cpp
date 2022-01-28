#include <bits/stdc++.h>
long gcd(long a, long b) {
  
  if (b > a) {
    long temp = b;
    b = a;
    a = temp;
  }
  while (true) {
    
    if (!a || !b)
      break; 
    a %= b; 
    if (a == 0)
      break;
    b %= a;
  }
  if (a > b)
    return a;
  else 
    return b;
}

int main () {
  int t;
  std::cin >> t;

  while(t--) {
    long a, b;

    std::cin >> a >> b;
    long gcd_result = gcd(a, b);
    std::cout << gcd_result
              << " " 
              << (a * b / gcd_result)
              << std::endl;
             
  }
}
