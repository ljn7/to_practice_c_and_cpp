// Certain type of steel is graded according to the following conditions.

//     Hardness of the steel must be greater than 50
//     Carbon content of the steel must be less than 0.7
//     Tensile strength must be greater than 5600

// The grades awarded are as follows:

//     Grade is 10 if all three conditions are met
//     Grade is 9 if conditions (1) and (2) are met
//     Grade is 8 if conditions (2) and (3) are met
//     Grade is 7 if conditions (1) and (3) are met
//     Grade is 6 if only one condition is met
//     Grade is 5 if none of the three conditions are met
#include <bits/stdc++.h>

int main () {
  int T;

  int hardness_grade = 50, tensile_grade = 5600;
  float carbon_grade = 0.7;


  std::cin >> T;

  while (T--) {

    int hardness, tensile_strength;
    float carbon_content;

    std::cin >> hardness 
             >> carbon_content 
             >> tensile_strength;
    
    hardness = (hardness > hardness_grade) ? 1 : 0;
    carbon_content = (carbon_content < carbon_grade) ? 1 : 0;
    tensile_strength = (tensile_strength > tensile_grade) ? 1 : 0;

    if (hardness || carbon_content || tensile_strength) {
        if (hardness && carbon_content && tensile_strength)
          std::cout << "10\n";
        else if (hardness && carbon_content)
          std::cout << "9\n";
        else if (carbon_content && tensile_strength)
          std::cout << "8\n";
        else if (hardness && tensile_strength)
          std::cout << "7\n";
        else 
          std::cout << "6\n";      
      }

    else 
      std::cout << "5\n"; 

  } 
}