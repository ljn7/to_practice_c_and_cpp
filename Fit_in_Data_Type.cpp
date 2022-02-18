#include <iostream>
using namespace std;

int main() {
    uint32_t T;
    cin >> T;
   
    while (T--) {
      
      short int X, N;
      
      cin >> N >> X;
      
      
      if (X > N) {
        
        int counter = 0, loopUntil = (X - N);
        
        for (int i = 0; i < loopUntil; i++) {
          counter++;
          if (counter - 1 > N)
            counter = 0;
        }
        
        cout << counter - 1 << "\n";
      }
      else 
        cout << X << "\n";
      
    }
}
