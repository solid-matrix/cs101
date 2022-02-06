#include <stdio.h>
#define MAXN 10000000

int n, k;
int a[10000000];

int find(int l, int r) {
  if (l > r) return 0;
  int m = (l + r) / 2;
  if (a[m] == k) {
    return 1;
  } else if (k < a[m]) {
    return find(l, m - 1);
  } else {
    return find(m + 1, r);
  }
}

int main() {
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) scanf("%d", a + i);
  printf("%s", find(0, n) ? "YES" : "NO");
}