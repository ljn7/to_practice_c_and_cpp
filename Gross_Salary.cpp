#include <bits/stdc++.h>

int main () {
  int t;
  std::cin >> t;

  while (t--) {
    int salary;
    std::cin >> salary;
    float gross_salary;

    if (salary >= 1500) 
      gross_salary = 500 + (0.98 * salary) + salary;
    else
      gross_salary = 2 * salary;
      
    
    std::cout << std::setprecision(2) << std::fixed;

    std::cout << gross_salary << std::endl;
  }
}