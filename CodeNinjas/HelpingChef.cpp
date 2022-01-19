#include<iostream>
#define si short int 
#define nl std::endl
#define pf std::cout
int main() {
    si t, n;
    std::cin>>t;
    while (t--) {
        signed int a, b;
        if (a==b) pf<<"="<<nl;
        else if (a<b) pf<<"<"<<nl;
        else if (a>b) pf<<">"<<nl;
    }
}