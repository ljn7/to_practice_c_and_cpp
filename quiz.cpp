#include <bits/stdc++.h>

int fun (int n) { 

  int x=1, k; 

  if (n==1) return x; 

  for (k=1; k<n; ++k) 
    x=x + fun (k) * fun (n - k); 

  return x; 

}

int main() {
  // fun(n);
  register int a = 10;
  class addr {
    int aa;
    
    addr() {
      aa = aa;
    }
    void init() {
      aa ;
    }
  };
  int *add = &a;
  std::cout << *add;

  addr test;

  test.addr();
 

}