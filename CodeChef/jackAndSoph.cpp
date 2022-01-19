#include <iostream>
#include <string>
int main () {
  int totalDragon, totalSloth;
  unsigned short int t;
  std::string str0 = "DRAGON", str1 = "SLOTH", str2 = "TIE";
  std::cin >> t;
  while (t--) {
    unsigned short int dsa0, dsa1, toc0, toc1, dm0, dm1;
    std::cin >> dsa0 >> toc0 >> dm0;
    std::cin >> dsa1 >> toc1 >> dm1;
    totalDragon = dsa0 + toc0 + dm0;
    totalSloth = dsa1 + toc1 + dm1;
    if(totalDragon > totalSloth)
      std::cout << str0 << std::endl;
    else if(totalSloth > totalDragon)
      std::cout << str1 << std::endl;
    else if(totalSloth == totalDragon) {
      if(dsa0 > dsa1)
        std::cout << str0 << std::endl;
      else if (dsa1 > dsa0)
        std::cout << str1 << std::endl;
      else if (dsa0 == dsa1) {
        if (toc0 == toc1)
          std::cout << str2 << std::endl;
        else if (toc0 > toc1)
          std::cout << str0 << std::endl;
        else
          std::cout << str1 << std::endl;
      }
    }
  }
}