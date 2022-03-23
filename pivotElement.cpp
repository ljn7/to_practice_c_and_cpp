#include <bits\stdc++.h>

int pivotIndex(int* nums) {
        int j = 0;
        int sum1 = 0;
        for (int i = 0; i < 6; i++) {
            
            int k = 6 - 1;
            long long sum2 = 0; 

            while (j < i) 

                if (j <= i) 
                    sum1 += nums[j++];

            while (k > i)        
                if (k > i) {
                    sum2 += nums[k--];
                }

            if (sum1 == sum2)
                  return i;
            }
        
        return -1;
    }

int main () {

  int arr[] = {1,7,3,6,5,6};

  std::cout << pivotIndex(arr);

}