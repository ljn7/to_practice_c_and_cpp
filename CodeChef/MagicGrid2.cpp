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

int main() {
   int n, t;
   while (t > 0) {
          int n;
          std::cin >> n;
          for (int i = 0; i < n; i++) {
               for (int j = 0; j < n; j++) {
                    std::cout << "1 ";
               }
               std::cout << "\n";
          }           
          t--;
   }
}