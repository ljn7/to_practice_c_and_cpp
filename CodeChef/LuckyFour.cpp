#include<iostream>
#include<cmath>
int main() {
    int t, numbers, counter=0, temp;
    std::cin >> t;
    for (int i=0;i<t;i++) {
        std::cin >> numbers;
        while (numbers>0) {
        int lastDigit=numbers%10;
        if (lastDigit==4) {
            counter++;
            numbers/=10;
        }
        else {
            numbers/=10;
        }


    }
    std::cout << counter << std::endl;
    counter=0;
}
}