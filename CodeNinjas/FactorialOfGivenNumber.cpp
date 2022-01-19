#include<iostream>
#define usi unsigned short int
#define ulli unsigned long long int
int main() {
    usi t;
    usi n;
    std::cin>>t;
    while (t--) {
        std::cin>>n;
        ulli factor = 1;
        for (int i=1; i<=n; i++) {
            factor*=i;
        }
    std::cout<<factor<<std::endl;
    }

}