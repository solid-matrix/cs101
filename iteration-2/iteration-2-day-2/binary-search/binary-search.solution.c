#include <stdio.h>
#define MAXN 10000000

int n, k;
int a[10000000];

int find(int l, int r) {
  if (l > r) return -1;
  int m = (l + r) / 2;
  int res;
  if (a[m] == k) {
    return m;
  } else if (k < a[m]) {
    res = find(l, m - 1);
  } else {
    res = find(m + 1, r);
  }
}

int main() {
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) scanf("%d", a + i);
  printf("%d\n", find(0, n));
}