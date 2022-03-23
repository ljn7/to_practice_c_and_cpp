#include <bits/stdc++.h>
using namespace std;
int main() {
   short int T;
   cin >> T;
   
   while (T--) {
     int N, sum1 = 0, sum2 = 0;
     
     cin >> N;
     
     if (N == 1) {
       int temp;
       cin >> temp;
       cout << temp << "\n";
       continue;
     }
     
     for (int i = 0; i < N / 2; i++) {
       int temp = 0;
       cin >> temp;
       sum1 += temp;
     }
     
     N = ((float) N/2.0) + 0.5;
     for (int i = 0; i < N; i++) {
      int temp;
      cin >> temp;
      sum2 += temp;
     }
      
     cout << ((sum1 > sum2) ? sum1: sum2) << "\n";
   }
}
