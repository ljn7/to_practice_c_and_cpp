#include<iostream>
int main() {
    int t;
    std::cin>>t;
    int p1, p2, sumP1=0, sumP2=0, leadP1=0, leadP2=0;
    for (int i=0; i<t; i++){
        std::cin>>p1>>p2;
        sumP1+=p1;
        sumP2+=p2;
        if (p1>p2) {
            if(i==0) leadP1=p1-p2;
            if(i>=1 && (sumP1-sumP2)>leadP1) leadP1=sumP1-sumP2;
        } 
        else {
            if(i==0) leadP2=p2-p1;
            if(i>=1 && (sumP2-sumP1)>leadP2) leadP2=sumP2-sumP1;
        } 
        } 
    if(leadP1>leadP2) std::cout<<1<<" "<<leadP1;
    else std::cout<<2<<" "<<leadP2;
        
}
