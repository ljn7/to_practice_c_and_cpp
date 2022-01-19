#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int inputAmount;
    float totalBalance=0.00;
    cin >> inputAmount >> totalBalance;
        if (inputAmount%5!=0) {
            cout<<fixed<<setprecision(2)<<totalBalance;
            exit(0);}    
        if ((inputAmount+0.50)>=totalBalance) {
            cout<<fixed<<setprecision(2)<<totalBalance;
            exit(0);}    
    float afterWithdrawl=totalBalance-(inputAmount+0.50);
    cout<<fixed<<setprecision(2)<< afterWithdrawl;
    return 0;
}