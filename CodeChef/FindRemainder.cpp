#include<iostream>
int main() {
    short int t;
    short int a,b;
    short int remainder;
    std::cin >> t;
    for (int i=0;i<t;i++) {
        std::cin >> a >> b;
        remainder = a%b;
        std::cout << remainder << std::endl;
    }
}