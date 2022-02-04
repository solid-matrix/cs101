#include <stdio.h>

void printBits(char a) {
  for (int i = sizeof(char) * 8 - 1; i >= 0; i--) {
    if ((a >> i) & 0x1)
      printf("1");
    else
      printf("0");

    if (i & 4 == 0) printf("_");
  }
  printf("\n");
}

int main() { printBits(-127); }