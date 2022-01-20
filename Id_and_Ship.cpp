#include <bits/stdc++.h>

int main() {
  int T;
  std::cin >> T;
  std::unordered_map <char, std::string> ships = {
                                                  {'B', "BattleShip"},
                                                  {'C', "Cruiser"},
                                                  {'D', "Destroyer"},
                                                  {'F', "Frigate"},
                                                  {'b', "BattleShip"},
                                                  {'c', "Cruiser"},
                                                  {'d', "Destroyer"},
                                                  {'f', "Frigate"} 
                                                 };
                                              
  while (T--) {
   char key;
   std::cin >> key;
   auto result = ships.find(key);
   std::cout << result -> second << std::endl;
  }
}
// B or b 	BattleShip	
// C or c 	Cruiser	
// D or d 	Destroyer	
// F or f 	Frigate