#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int x = 10;
   int *ptr = &x;
   int *&ptr1 = ptr;
}