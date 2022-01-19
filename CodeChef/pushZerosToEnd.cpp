#include <stdio.h>
#include <iostream>
#include <algorithm>
// void pushZerosToEnd(int *arr, int n) {
// 	    int counter = 0;
// 	    for (int i = 0; i<n; i++) { //n=5 & i = 2
// 	        if (arr[i] == 0) { // 2
// 	            for (int j  = i; j<n; j++) 
//                     arr[j] = arr[j+1]; 
//                 counter++;
//                 if (arr[i] == 0)
//                     i--;
// 	        }
// 	    }
// 	    counter = n - counter;
// 	    while (counter < n)
// 	        arr[counter++] = 0;
//     return;        
	void segregateEvenOdd(int arr[], int n) {

		std::sort(arr, arr + n); 
		int* tempArr = new int[n+1]; 
		int counter = 0, j = 0, i = 0;
	    while(i < n) {
	        if(arr[i] % 2 == 0)
	            tempArr[counter++] = arr[i];
            i++;
	        if (i == n) {
                while(j < n) {
					if(arr[j] % 2 != 0)
	              		tempArr[counter++] = arr[j++];
					else 
						j++;
				}
	        }
        }
		for (int i = 0; i < n; i++)  
			arr[i] = tempArr[i];
	    delete[] tempArr;
	    return;
	}
    

int main () {
    int array[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7, i = 0;
	system("cls");
    segregateEvenOdd(array, 7);
    while (i<n) {
        printf("%d, ", array[i++]);

    }
    	
}