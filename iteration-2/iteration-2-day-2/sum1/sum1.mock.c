#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 30, m = 30, k = 0;
  int a[n];

  for (int i = 0; i < n; i++) {
    a[i] = rand() % 10000;
  }

  for (int i = 0; i < m; i++) {
    k += a[rand() % n];
  }

  printf("%d %d\n", n, k);
  for (int i = 0; i < n; i++) printf("%d ", a[i]);
}