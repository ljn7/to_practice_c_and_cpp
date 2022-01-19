#include<iostream>
int main() {
    int t, p[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
    std::cin>>t;
    while(t>0){
        int price, count=0;
        std::cin>>price;
        for (int i=11; i>=0; i--) {
             if (price>=p[i]) {
                  price-=p[i];
                  count++;
             }
             if (price==p[i]) {
                  price-=p[i];
                  count++;
             }
             /*if (price<p[i]) {

                  price=price-p[i];
                  count++;
             }*/
             if (price>p[i])
                  i++;
             
        }

        std::cout<<count<<std::endl;
        t--;
     }
     return 0;
}