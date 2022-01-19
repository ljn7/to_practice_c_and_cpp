#include<iostream>
int main() {
    int t;
    std::cin>>t;
    int a[t], even = 0, odd = 0;
    for (int i=0; i<t; i++) {
       std::cin>>a[i];
       if((a[i]%2)==0) even++;
       else odd++;
    }
    if (odd>even) std::cout<<"NOT READY";
    else std::cout<<"READY FOR BATTLE";
}