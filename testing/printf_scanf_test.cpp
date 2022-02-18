#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

  for (int i = 1; i < argc; i++) {

    if (!(strcmp(argv[i], "-t")))
      printf("Accepted");
    else 
      printf("No");

  }

}