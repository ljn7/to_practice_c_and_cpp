#include <bits/stdc++.h>
int main() {
  float a, b, c;
  float areaOfTriangle, semiPerimeter, total;
  scanf("%f %f %f", &a, &b, &c);
  semiPerimeter = (a + b + c) / 2;
  total = (((semiPerimeter * (semiPerimeter - a)) *
           (semiPerimeter - b)) * (semiPerimeter - c)); 
  areaOfTriangle = sqrtf(total);
  if (areaOfTriangle > 0)
     printf("YES");
  else 
     printf("NO");
     
  return 0;
}
