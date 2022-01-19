/* 
Sarthak got an empty magic grid of size N×N on his birthday. The grid can only be filled with
 positive integers such that the bitwise XOR of all numbers from any row, any column, or any of the two main diagonals
  must all be the same! Can you help Sarthak fill this grid using only positive integers no more than 109

?
Input Format

    The first line of each input contains T

- the number of test cases. The test cases then follow.
The only line of each test case contains an integer N

    - the size of the grid.

Output Format

For each test case, output N
lines, each containing N

space-separated integers, such that the grid satisfies the condition given in the statement.

Each integer should be positive and ≤ 10 ^ 9 */

#include <iostream>


int main () {
  int t, n, bitNumber = 0;
  std::cin >> t;

  while (t > 0) {
    std::cin >> n;
    int sum = 0;
    if (n < 128) {
      if (n > 64) {
        if (n == 64) {
        sum += 64;
        bitNumber = bitNumber * 10 + 1;
        }
        else { 
          sum += 64;
          bitNumber = bitNumber * 10 + 1;
        }
        if (sum >= 32) {
          if (sum == 32 && sum + 32 <= n) {
            sum += 32;
            bitNumber = bitNumber * 10 + 1;
          }
          else if (sum + 32 <= n) {
            sum += 32;
            bitNumber = bitNumber * 10 + 1;
          }
          else {
            bitNumber = bitNumber * 10 + 0;
          }
        }
        if (sum >= 16) {
          if (sum == 16 && sum + 16 <= n) {
            sum += 16;
            bitNumber = bitNumber * 10 + 1;
        }
        else if (sum + 16 <= n) {
          sum += 16;
          bitNumber = bitNumber * 10 + 1;
        }
        else {
          bitNumber = bitNumber * 10 + 0;
        }
        }
        if (sum >= 8) {
        if (sum == 8 && sum + 8 <= n) {
          sum += 8;
          bitNumber = bitNumber * 10 + 1;
        }
        else if (sum + 8 <= n) {
          sum += 8;
          bitNumber = bitNumber * 10 + 1;
        }
        else {
          bitNumber = bitNumber * 10 + 0;
        }
       }
        if (sum >= 4) {
          if (sum == 4 && sum + 4 <= n) {
            sum += 4;
            bitNumber = bitNumber * 10 + 1;
          }
          else if (sum + 4 <= n) {
            sum += 4;
            bitNumber = bitNumber * 10 + 1;
          }
          else {
            bitNumber = bitNumber * 10 + 0;
          }
        }
        if (sum >= 2) {
          if (sum == 2 && sum + 2 <= n) {
            sum += 2;
            bitNumber = bitNumber * 10 + 1;
          }
          else if (sum + 2 <= n) {
            sum += 2;
            bitNumber = bitNumber * 10 + 1;
          }
          else {
            bitNumber = bitNumber * 10 + 0;
          }
        }
        if (sum >= 1) {
          if (sum == 1 && sum + 1 <= n) {
            sum += 1;
            bitNumber = bitNumber * 10 + 1;
          }
          else if (sum + 1 <= n) {
            sum += 1;
            bitNumber = bitNumber * 10 + 1;
          }
          else {
            bitNumber = bitNumber * 10 + 0;
          }
        }
      }
    }
    while (n > 0) {
      while (bitNumber > 0) {
        std::cout << bitNumber % 10 << " ";
        bitNumber = bitNumber / 10;
      }
      std::cout << std::endl;
      n--;
    }
    std::cout << std::endl;
  }
  t--;
}