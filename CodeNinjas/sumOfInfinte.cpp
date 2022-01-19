#include<iostream>
using namespace std;
int main () {
    short int T;
    cin>>T;
    while(T--) {
        short int N;
        cin>>N;
        int A[N], Q, L, R, B[R], result=Q, sum=0;
        for (int i=0;i<N;i++) {
            cin>>A[i];
        }
        cin>>Q;
        while(Q--){
        //for(int i=0;i<2;i++) {
            cin>>L>>R;
            int K=0;
            int temp=L-1;
            //do {
                for(;temp<R;temp++) {
                    sum+=A[temp];
                    if()
                    } 
               // } while(temp<R);
            } 
            if(Q!=1)
                cout<<sum<<" ";
            else
                cout<<sum;
        //}
    }
    return 0;
}