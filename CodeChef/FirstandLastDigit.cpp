#include<iostream>
int main() {
    short int t;
    int n,sum=0;
    std::cin >> t;
    for (int i=0;i<t;i++) {
        std::cin >> n;
        sum+=n%10;
        while (n>=10) {
            n/=10;
        }
        sum+=n;
        std::cout << sum << std::endl;
        sum=0;
    }
}