#include<iostream>
int main() {
    int t,op;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        while(n!=0){
            int temp;
            temp=n%10;
            op*=10+temp;
            n/=10; 
        }
    std::cout<<op<<std::endl;
}
}