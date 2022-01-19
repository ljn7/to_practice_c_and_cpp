#include<iostream>
int main() {
    int n;
    short int t;
    int sum=0;
    std::cin >> t;    
    for (int i=0;i<t;i++) {
            std::cin >> n;
            while (n!=0) {
                sum+=n%10;
                n/=10; } 
        std::cout << sum << std::endl;
        sum=0;
        }
    }