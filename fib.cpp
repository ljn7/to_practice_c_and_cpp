#include <iostream>
#include <vector>
#include <chrono>

int arr_of_fib[100] = {0, 1};
int fib(int n) {

  
  if (n <= 1) return arr_of_fib[n];
  // if (n == 1) return 1;
  // if (n <= 0) return 0;

  if (arr_of_fib[n] == 0)
    arr_of_fib[n] = fib(n - 1) + fib(n - 2);

  return arr_of_fib[n];
  // return fib(n - 1) + fib(n - 2);
}

int main () {
  int n = 40;
  std::chrono::_V2::system_clock::time_point start = std::chrono::high_resolution_clock::now();
  std::cout << fib(n) << std::endl;
  std::chrono::_V2::system_clock::time_point stop = std::chrono::high_resolution_clock::now();
  std::chrono::__enable_if_is_duration<std::chrono::microseconds> duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
  std::cout << duration.std::chrono::microseconds::count() << std::endl;
//  const int cd = 2;
//   *<const_cast&>(cd) = 3;
//  std::cout << cd << "\n";

//  *c = 3;
//  std::cout << cd << "\n";
 
}