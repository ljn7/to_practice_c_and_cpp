#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
void kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool* result = malloc(sizeof(bool) * candiesSize);
    int i,j, great;
    *returnSize = candiesSize;
    for (i = 0; i<candiesSize; i++) {
        for (j = i+1; j<candiesSize; j++) {
            if (candies[j] < candies[i])
                great = candies[i];
        }   
    }
    for (i = 0; i<candiesSize; i++) {
        if (candies[i] + extraCandies >= great) 
            result[i] = true;
        else result[i] = false;
    }
    //return result;
}  
int main() {
    int c[] = {4, 2, 1, 1, 2};
    int size = 1;
    kidsWithCandies(c, 5, 1, &size);
    return 0;
}