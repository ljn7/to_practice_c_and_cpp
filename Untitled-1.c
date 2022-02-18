#include <stdio.h>

typedef enum {false = 0, true = 1}bool;
int main () {
  bool something = true;

  if (something)
    printf("%d", &something);

}