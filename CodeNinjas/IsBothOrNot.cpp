#include <iostream>
int main() {
    int N;
    std::cin>>N;
    int divdent = N;
    int arr[N+1];
    int count = N+1;
    for (int i=(N+1);i>0;i--) {
        if (i==1) {
            arr[i]=divdent;
            count--;
            break;
        }
        if (N%divdent==0) {
            arr[i]=divdent;
            count--;}
        divdent--;        
    }
    for (int i=(N+1); i>count; i-- ) {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}