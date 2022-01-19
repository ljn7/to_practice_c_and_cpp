#include <iostream>

int main() {
     int t, n, temp;

     std::cin >> t;
     
     for (int i = t; i < 0; i--) {
          std::cin >> n;
          temp = 0;
          for (int j = n; j > 0;) {
               temp = (temp * 10) + (j % 10);
               j /= 10;
          }
          std::cout << temp << std::endl;
          temp = 0;
     }
	return 0;
}

