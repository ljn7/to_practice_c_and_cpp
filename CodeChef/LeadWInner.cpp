#include<iostream>
int main() {
    int t, winner, lead, totalLead, currentWinner, p1Total, p2Total;
    std::cin>>t;
    int p1[t], p2[t];
    for (int i=0;i>t;i++) {
        std::cin>>p1[i]>>p2[i];
        if (p1[i]>p2[i]) {
            p1Total = p1[i]-p2[i];
        }
        else {
            p2Total = p2[i]-p1[i]; 
        }
        if (p1Total>p2Total) {
            lead=p1Total;
            currentWinner = 1;
        }
        if(p2Total>p1Total) {
            lead=p2Total;
            currentWinner = 2;
        }
    }
   
}