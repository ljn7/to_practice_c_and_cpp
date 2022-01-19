#include<iostream>
int main() {
    int t, temp;
    std::cin>>t;
    int arr0[t];
    for(int i=0;i<t;i++) {
                std::cin>>arr0[i];
                }
    for(int i=0;i<t;i++) {
        for(int j=i+1;j<t;j++) {
            if (arr0[i]<arr0[j]) {
                temp=arr0[i];
                arr0[i]=arr0[j];
                arr0[j]=temp;
                }
            }
        }
    for(int i=0;i<t;i++){
        std::cout<<arr0[i];
        int j=i+1;
        if(j!=t){
        std::cout<<std::endl;
        }
    }
}