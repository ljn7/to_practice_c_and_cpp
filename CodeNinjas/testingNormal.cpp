#include <iostream>
#include <stdlib.h>
//#include <windows.h>
#include <cstring>
#include <vector>
// #include <stl
using std::vector;
vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size(), success = 0, breaker;
        vector<int> result;
        for (int i = 0; i < size; i++) {
                if (success) break;
                for (int j = i+1; j<size; j++) {
                    // if (j==i) continue;
                    int temp = nums[i] + nums[j];
                    // if (target < 0) {
                    //     int breaker = 0;
                    //     if (temp < target) breaker = 1;
                    //     if (breaker) break;
                    //     if (temp == target) {
                    //     result.vector::push_back(i);
                    //     result.vector::push_back(j);
                    //     success = 1;
                    //     breaker = 1;
                    //     break;
                    //     }
                    //     if (breaker) break;
                        
                    // }
                    // if (target >= 0 && temp > target) break;
                    if (temp == target) {
                        result.vector::push_back(i);
                        result.vector::push_back(j);
                        success = 1;
                        break;
                    }
                }  
        }
        return result;
    }
int main() {
    vector<int> inputArray = {-1,-2,-3,-4,-5};
    vector<int> result = twoSum(inputArray, -8);
    for (int i = 0; i < result.size(); i++) {
        std::cout<<result[i]<<std::endl;
    }
}

//   //   //char a = 65, b = 97;
//   // /*a = a + b;
//   //   b = a - b;
//   //   a = a - b;
     
//   //   std::cout<<"A: "<<sizeof(a)<<" B: "<<sizeof(b)<<std::endl;
//   //   std::cout<<"A: "<<a<<" B: "<<b<<std::endl;
//   //   std::cout<<"A: "<<(char)((int)a+(float)b)<<std::endl; */
//   //   int byte = 1024*1024;
//   //   int n;
//   //   std::cout<<"Enter how many MB\n";
//   //   std::cin>>n;
//   //   long long int total = n * byte;
//   //   void *p = malloc(total);
   
//   //   if (p != NULL) {
//   //     memset(p, 0, total);
//   //     getchar();
//   //     free(p);
//   //   }
//   int byte = 1024*1024;
//     int n;
//     std::cout<<"Enter how many MB\n";
//     std::cin>>n;
//     long long int total = n * byte;
//     void *p = malloc(total);
   
//     if (p != NULL) {
//       memset(p, 0, total);
//       getchar();
//       free(p);
//     }
// }
