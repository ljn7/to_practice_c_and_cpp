#include<iostream>
int main() {
    int t, p1[t], p2[t], p1total=0, p2total=0, lead1, lead2, winner=0;
    std::cin>>t;
    for(int i=0;i<t;i++) {
            std::cin>>p1[i]>>p2[i];
            if(i==0) {
                lead1=p1[i]-p2[i];
                lead2=p2[i]-p1[i];
            }
            if(lead1>lead2){
                winner=1;
            }
            if(lead2>lead1){
                winner=2;
            }
            if(p1[i]>p2[i]){
                p1total=p1[i]-p2[i];
                if(lead1<p1total){
                    lead1=p1total;
                }
            }
            else{
                p2total=p2[i]-p1[i];
                if(lead2<p2total){
                    lead2=p2total;
                }
            }
        }
        if(lead1>lead2){
            std::cout<<winner<<" "<<lead1;
        }
        else{
            std::cout<<winner<<" "<<lead2;
        }
    
}