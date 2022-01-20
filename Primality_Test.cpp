#include <bits/stdc++.h>

int main() {
  int T;
  std::cin >> T;
  while (T--) {
    int N;
    int counter = 0;
    std::cin >> N;
    
    if (N == 1) {
      std::cout << "no\n";
      continue;
    }
    
    if ((N > 2) && (N % 2 == 0)) {
      std::cout << "no\n";
      continue;
    }

    bool flag = 1;
    for (int i = 2; i <= N/2; i++) {
      if (N % i == 0)
        counter++;
      if (counter == 1) {
        std::cout << "no\n";
        flag = 0;
        break;
      }
    }
    
    if(flag)
      std::cout << "yes\n";
  }
}