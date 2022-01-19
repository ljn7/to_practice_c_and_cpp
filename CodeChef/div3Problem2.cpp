#include <bits/stdc++.h>
using namespace std;

int main () {

  short int T;
  bool flag, breaker;

  std::cin >> T;
   
  while (T--) {
    int N, X;

    std::cin >> N >> X; 

    int A[N];
    flag = 0;
    
    for (int i = 0; i < N; i++) 
      std::cin >> A[i];

    std::sort (A, A + N, std::greater <int>());

    int total = accumulate(A, A+N,0);
    if (total < X)
    	std::cout << -1 << std::endl; 

    int counter = 0, sum = 0, sum2 = 0, counter2 = 0;
    breaker = 1;
    for (int i = 0; i < N; i++) {
    	// cout<<"Element is: "<<A[i]<<endl;

      if(sum + A[i] <= X) {
        sum += A[i];
        counter++;
      }
      if (breaker) {
        sum2 += A[i];
        counter2++;
        
        if (sum2 > X)
          breaker = 0;
      }

      // cout<<"Breaker boolean value ->"<<breaker<<endl;
      // cout<<"sum1 = "<<sum<<endl;
      // cout<<"sum2 = "<<sum2<<endl;
      // cout<<"Counter 1 = "<<counter<<endl;
      // cout<<"Counter 2 = "<<counter2<<endl;
      if (sum2 >= X) {
        std::cout << counter2 << std::endl;
        break;
      }
    }
    // if (sum == X) {
    //   std::cout << counter << std::endl;
    //   continue;
    // }
    // else if (flag == 1) {
    //   std::cout << 1 << std::endl;
    //   continue;
    // }
    // else if (sum2 > X) {
    //   std::cout << counter2 << std::endl;
    // }
    // else 
      

  }
}