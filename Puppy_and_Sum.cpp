#include <bits/stdc++.h>

int sum (int D, int N) {
 
  int sumInRec = 0;
  for (int i = 1; i <= N; i++) {
    sumInRec += i;
  }
  if (D == 1)
    return sumInRec;
  return sum((D - 1), sumInRec);
}

int main() {
  int T;
  std::cin >> T;

  while (T--) {

    int D, N;
    std::cin >> D >> N;

    std::cout << sum(D, N) << std::endl;
  }
}