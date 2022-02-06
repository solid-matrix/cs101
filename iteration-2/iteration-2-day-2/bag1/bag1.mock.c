#include <stdio.h>
#include <stdlib.h>

int main() {
  int m = 10000, n = 10;
  printf("%d %d\n", m, n);
  for (int i = 0; i < n; i++) {
    printf("%d %d\n", rand() % 10, rand() % 100);
  }
  return 0;
}