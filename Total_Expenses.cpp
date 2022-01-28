#include <bits/stdc++.h>
int main () {
  int t;
  std::cin >> t;
  std::cout << std::setprecision(6) << std::fixed;
  while (t--) {
    double quantity, price;
    std::cin >> quantity >> price;
    double result = quantity * price;
    if (quantity > 1000)
      result = result - (0.1 * result);
    std::cout << result << std::endl;
  }
}