#include<iostream>
int main()
{
    int t;
    std::cin >> t;
    while(t>0) {
        int n, size=1000, fact[1000], carry = 0, j=size-1, temp;
        std::cin >> n;
        fact[size-1]=1;
        while(n>1){
            
            for(int i=size-1;i>=j;i--) {
                temp=fact[i]*n+carry;
                fact[i]=temp%10;
                carry=temp/10;
            }
            while(carry>0) {
                fact[--j]=carry%10;
                carry/=10;
            }
            n--;
        }
        for (int i=size-1;i>=j;j++) {
            std::cout<<fact[j];
        }
        t--;
        if(t!=0){
            std::cout<<std::endl;
        }
        t--;
    }   
}