#include <stdlib.h>
void fun1(int a, int b) {
   printf("Add: %d", (a+b));
}
void fun2(int a, int b) {
   printf("Sub: %d", (a-b));
}
void fun3(int a, int b) {
   printf("Multiplication: %d", (a*b));
}
int main()
{
   int c=10, d=20, ch;
   void (*func[3])(int, int) = {fun1, fun2, fun3};
   printf("Choose 0, 1, 2");
   scanf("%d", &ch);
   (*func[ch])(c, d);

   return 0;
}