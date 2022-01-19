#include<iostream>
//#include<math.h>
using namespace std;
int main() {
    int n,k,a;
    int counter;
    /*int c=pow(10,7);
    int d=pow(10,9);*/
    cin >> n >> k;
   // if (k<=c){
    for (int i=0;i<n;i++) {
        cin >> a;
      //  if (a<d){
            if(a%k==0){
               counter++;
            }
        }
    //}
    cout << counter;
   // }
    return 0;
}
