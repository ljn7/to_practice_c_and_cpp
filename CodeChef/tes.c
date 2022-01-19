#include <stdio.h>
void pushZerosToEnd(int arr[], int n) {
	    int counter = 0, i = 0, j, temp;
	    for (int i = 1; i <=n ; i++) {
	        if(arr[i-1] == 0) {
                for (j=i-1; j<n; j++){
                    arr[j] = arr[j+1];  
                }
	            counter++;
	        }
	    }
	    while (counter > 0) {
	        arr[n--] = 0;
	        counter--;
	    }
        return;
	}
int main () {
    int array[5] = {3, 5, 0, 0, 4};
    int n = 5, i = 0;
    pushZerosToEnd(array, n);
    while (i<n) {
        printf("%d, ", array[i++]);

    }
    	
}