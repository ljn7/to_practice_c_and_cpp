#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies){
    bool* result = (bool*) malloc(sizeof(bool) * candiesSize);
    int i, j, great;
    //*returnSize = candiesSize;
    for (i = 0; i<candiesSize; i++) {
        for (j = i; j<candiesSize; j++) {
            if (candies[j] < candies[i])
                great = candies[i];
        }   
    }
    for (i = 0; i<candiesSize; i++) {
        if (candies[i] + extraCandies >= great) 
            result[i] = 1;
        else result[i] = 0;
    }
    return result;
}
int main() {
    int arr1[] = {4,2,1,1,2};
    bool arr[5];
    int n = 5, i = 0;
    *arr = kidsWithCandies(arr1, 5, 1);

    while (n--) {
        printf("%d, ",arr[i]);
        i++;
    }
}