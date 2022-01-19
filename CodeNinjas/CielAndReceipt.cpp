#include<iostream>
void rev(int);
int main() {
    int t;
    std::cin>>t;
    while(t>0) {
        int input;
        std::cin>>input;
        rev(input); 
        t--;
      }
     
     return 0;
}
void rev(int rev){
    int temp=0, temp1=rev;
    
    while (rev!=0) {
    temp=(temp*10)+(rev%10);
    rev/=10;
    }   
    if (temp==temp1) std::cout<<"wins"<<std::endl;
    else std::cout<<"loses"<<std::endl;
}
