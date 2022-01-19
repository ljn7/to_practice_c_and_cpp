#include<iostream>
int main() {
    int temp=0, temp2=1, fib=1, n;
    std::cin>>n;
    std::cout<<temp<<", "<<temp2<<", ";

    

    for (int i=3; i<=n; i++) {
        if(i<n)
        std::cout<<fib<<", ";
        else
        std::cout<<fib<<".";
        temp=fib;
        fib+=temp2;
        temp2=temp;
        
    }
    
}