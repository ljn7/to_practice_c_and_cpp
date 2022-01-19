#include <bits/stdc++.h>
using namespace std;

int main () {

  short int T;

  std::cin >> T;
   
  while (T--) {
    short int N;
    std::cin >> N;
    short int R[N+1], G[N+1], B[N+1];

    for (int i = 0; i < 3; i++)
      std::cin >> R[i] >> G[i] >> B[i];
    int counter = 0;
    int i = 0;
      if (R[0] != N) {
        if (R[i+1] != 0)
          counter++;1
        if (R[i+2] != 0) {
          counter++;
        }
      }
      i++;
      if (G[i] != N) {
        if (G[i+1] != 0)
          counter++;
        if (G[i+2] != 0) {
          counter++;
        }
      }
      i++;
      if (B[i] != N) {
        if (B[i+1] != 0)
          counter++;
        if (B[i+2] != 0) {
          counter++;
        }
      }
       
      std::cout << counter << std::endl;
        
    }
}