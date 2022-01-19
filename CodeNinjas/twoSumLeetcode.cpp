#include <iostream>
#include <stdlib.h>
//#include <windows.h>
#include <cstring>
#include <vector>
// #include <stl
// int smallestRepunitDivByK(int k) {
//         typedef unsigned long long int ulli;
//         if (k <= 0) return -1; 
//         if (k == 1) return 1;
//         int endingPoint = 1, temp = k;
        

//         for (int i = 0; i < temp; i++) {
//             temp /=10;
//             endingPoint *=10;
//         }
//         endingPoint *= 10;
//         endingPoint -= 1;
//         for (int i = 1; i < endingPoint; i++) {
//             if (k % i == 0)
//                 return i;
//         }
//         for (ulli j = 2; j < endingPoint; j++) {
//             if (k % j == 0) {
//                 ulli counter = 0;
//                 for (ulli l = 0; l < j; l++) {
//                     j /= 10;
//                     counter++;
//                     }
//                 return counter;
//             }
//         }
        
//         return -1;
//     }

//any number that contains only digit "1" divisible by k

int smallestRepunitDivByK(int k) {       
    if (k <= 0) return -1; 
    unsigned long long int digit = 1, counter = 0;
    while (digit <= 11111111111111111111ULL) {
        if (digit % k == 0) {
            break;
            }
            digit = digit * 10 + 1;
        if (digit == 430646668853801415ULL) {
            digit = 11111111111111111111ULL;
            break;
        }
    }       
    if (digit % k == 0) {
        while (digit>0) {
            digit /= 10;
            counter++;
            }
        }
    else return -1;
    return counter;      
}

int main() {
        int k = 23;
        system("cls");
        std::cout<<smallestRepunitDivByK(k);
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
