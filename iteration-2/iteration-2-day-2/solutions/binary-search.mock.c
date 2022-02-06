#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 10000000;
  int c = 0;

  printf("%d %d\n", n, n * 2);
  for (int i = 0; i < n; i++) {
    c += rand() % 10;
    printf("%d ", c);
  }
  printf("\n");
  return 0;
}