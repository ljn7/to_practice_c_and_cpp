
#include <iostream>
#include <string>
using std::cout;
using std::endl;
int main() {

    struct Array {
      
      int a[10];
      int length;
      int size;
    };
    // int **ptr = new int*[3];

    Array arr = {{1, 2, 3, 4, 5}, 5, 10};

    for (int i = 0; i < 3; i++) {
      int temp = arr.a[0];
      int j = 0;
      while (j < 4) {
        arr.a[j] = arr.a[j+1];
        j++;
      }
      arr.a[4] = temp;
    }

    for (int i = 0; i < 5; i++) 
      cout << arr.a[i] << endl;
    
    
    // *(ptr+1) = new int[4];
    // **(ptr+1) = 12;
    // *(*(ptr+1)+1) = 13;

    // cout << **(ptr + 1);
    // cout << *(*(ptr+1)+1);

    
    // std::cout << *(*(ptr)+1) << std::endl;
    // *((ptr+1)+1) = 5;
    //     std::cout << ptr[1][1];

    // std::cout << **((ptr+1)+1) << std::endl;
    // std::cout << ptr[1][1];
}