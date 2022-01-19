#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
// int maximumWealth(int accounts[3][2], int accountsSize, int accountsColSize) {
//     int i, j, sum = 0, maxOutput;
//     int* customerWealth;
//     customerWealth = (int*) malloc(sizeof(int) * accountsSize);
//     for (i = 0; i < accountsSize; i++) {
//             for (j = 0 ; j < accountsColSize; j++) {
//                 sum += accounts[i][j];
//             }
//         customerWealth[i] = sum;
//         sum = 0;
//     }
//     for (i = 0; i<accountsSize; i++)
//         printf("%d ", customerWealth[i]);
//     maxOutput = customerWealth[0];
//     for (i = 1; i<accountsSize; i++) {
//         if (customerWealth[i] > maxOutput) 
//             maxOutput = customerWealth[i];
//     }
//     free(customerWealth);
//     return maxOutput;
// }
int (int arr[])
int main() {
    int account[3][2]= {{1,5},{7,3},{3,5}};
    int result;
    result = maximumWealth(account, 3, 2);
    printf("%d", result);
}