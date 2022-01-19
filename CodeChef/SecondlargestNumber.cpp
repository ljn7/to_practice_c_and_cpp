#include<iostream>
int main() {
   int t;
   std::cin>>t;
   for(int i=0;i<t;i++){
      int a, b, c;
      std::cin>>a>>b>>c;
      if(a>b && a>c) {
         if(b>c)
            std::cout<<b<<std::endl;
         else
            std::cout<<c<<std::endl;
         }
      if(b>c && b>a) {
         if(c>a)
            std::cout<<c<<std::endl;
         else
            std::cout<<a<<std::endl;
         }
      if(c>a && c>b){
         if(a>b)
            std::cout<<a<<std::endl;
         else
            std::cout<<b<<std::endl;
         }
      }
   }
