#include <stdio.h>
#define MAXN 100000
int main() {
  int n, h[MAXN], a[MAXN], t = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", h + i);
  t = 1;
  a[t - 1] = h[0];

  for (int i = 1; i < n; i++) {
    int p = -1, min = 100000000;
    for (int j = 0; j < t; j++) {
      if (h[i] <= a[j] && a[j] <= min) {
        min = a[j];
        p = j;
      }
    }
    if (p >= 0) {
      a[p] = h[i];
    } else {
      t++;
      a[t - 1] = h[i];
    }
  }
  printf("%d\n", t);
  return 0;
}