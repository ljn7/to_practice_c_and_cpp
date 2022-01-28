#include <bits/stdc++.h>

int main () {
  int T;
  std::cin >> T;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  while (T--) {

    std::string str;
    std::getline(std::cin, str);

    int size = str.size();
    
    std::string first_str;
    std::string second_str;

    int it = size / 2;

    for(int i = 0; i < it; i++)
      first_str += str[i];

    if (size % 2) 
      it++; 

    for(int i = it; i < size; i++)
      second_str += str[i];

    sort(first_str.begin(), first_str.end());
    sort(second_str.begin(), second_str.end());
    
    // //debug output
    // std::cout << first_str << std::endl;
    // std::cout << second_str << std::endl;
    // //debug output


    if (first_str == second_str)
      std::cout << "YES\n";
    else
      std::cout << "NO\n";

  }

}