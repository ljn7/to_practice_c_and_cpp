#include <iostream>
int main() {
    int N;
    std::cin>>N;
    int divdent = N;
    int arr[N+1];
    int count = N+1;
    for (int i=(N+1);i>0;i--) {
        if (i==1) {
            arr[count]=divdent;
            count--;
            break;
        }
        if (N%divdent==0) {
            arr[i]=divdent;
            count--;}
        divdent--;        
    }
    auto c2=count;
    for (;count<N;N--) {
        std::cout<<arr[N]<<" ";
    }
    return 0;
}