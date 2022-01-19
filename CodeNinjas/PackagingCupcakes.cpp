#include<iostream>
#include<algorithm>
int main() {
    int t;
    std::cin>>t;
    while(t--) {
        int a, b;
        std::cin>>a>>b;
        int r1 = std::max(a, b);
        int r2 = a+b;
        std::cout<<r1<<" "<<r2<<std::endl;
    }
}