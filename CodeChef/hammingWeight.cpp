#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
// int hammingWeight(uint32_t n) {
//         int counter = 0;
//     while (n != 0) {
//         if (n & 1)
//             counter++;
//         n >>= 1;
//     }
//     return counter;
// }
int main () {
    // uint32_t n = 00000000000000000000000010000000;
    // std::cout<<hammingWeight(n);
    for (int i = 0; i<31; i++) {
        int result = 0;
        result = pow(3, i);
        std::cout<<result<<std::endl;
    }
    }
    	
