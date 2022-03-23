#include <iostream>
#include <vector>

void reverseArray(int *arr, int m)
{
	// Write your code here.
    for (int i = 0, j = m - 1; i <= j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main () {
  int array[5] = {1, 2, 3, 4, 5};

  reverseArray(array, 5);

  for (int i: array) 
    std::cout << i << " ";

}