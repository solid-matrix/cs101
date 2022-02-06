#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 100000;
  printf("%d\n", n);
  for (int i = 0; i < n; i++) {
    printf("%d ", rand() % 1000);
  }
}