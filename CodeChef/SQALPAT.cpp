#include <stdio.h>

int main() {
     int n, i, tempIterator;
     tempIterator = 5, i = 1;
     scanf("%d", &n);
     
     while (tempIterator > 0) { 
          printf("%d ", i++);
          tempIterator--;
     }
     
     n--; 
   
     while  (n > 0){
          i = i + 4;
          printf("\n");
          if (i % 5 == 0) {
               tempIterator = 5;
               while (tempIterator > 0) {
                    printf("%d ", i--);
                    tempIterator--;
                    
          }
          }
          n--;
          if (n > 0) {
               printf("\n");
               i = i + 6;
               tempIterator = 5;
               while (tempIterator > 0) {
                    printf("%d ", i++);
                    tempIterator--;
               }
               n--;
          }
               
     }
	return 0;
}

