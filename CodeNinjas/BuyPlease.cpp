#include <iostream>
int main() {
    int N;
    std::cin>>N;
    if ((N%5)==0 || (N%11)==0) {
        if ((N%5)==0 && (N%11)==0)
            std::cout<<"BOTH";
        else std::cout<<"ONE";    
    }
    else std::cout<<"NONE";
    return 0;
}