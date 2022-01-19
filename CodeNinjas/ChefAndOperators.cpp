#include<iostream>
int main() {
    int t;
    std::cin>>t;
    while (t--) {
        int a, b;
        std::cin>>a>>b;
        if (a==b) std::cout<<"="<<std::endl;
        if (a<b) std::cout<<"<"<<std::endl;
        if (a>b) std::cout<<">"<<std::endl;
    }
}