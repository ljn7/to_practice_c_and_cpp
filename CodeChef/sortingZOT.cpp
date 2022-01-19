#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
void sort012(int a[], int n) {
    int zero = 0, one = 0, two = 0, int b[n], i = 0;
    for (i = 0; i<n; i++) {
        if(a[i]==0) zero++;
        else if(a[i]==1) one++;
        else two++;
        }

    for (i = 0; zero !=0 || one != 0 || two !=0; i++) {
        if (zero !=0) {
            b[i] = 0;
            zero--;
            }
        else if (zero == 0 && one !=0) {
            b[i] =1;
            one--;
            }
        else {
            b[i] = 2;
            two--;
            }
        }
}    
int main() {
    int c[] = {1, 2, 0, 0, 2};
    sort012(b, 5);
    return 0;
}