#include <stdio.h>
#define MAXN 32
int n, k;
int a[MAXN];

// int hp = 0;
// int h[MAXN];

int dfs(int d, int sum) {
  if (sum > k) return 0;
  if (sum == k) {
    // for (int i = 0; i < hp; i++) printf("%d ", h[i]);
    // printf("\n");
    return 1;
  }
  if (d == n) return 0;

  int r1 = dfs(d + 1, sum);

  // h[hp++] = a[d];
  int r2 = dfs(d + 1, sum + a[d]);
  // hp--;
  return r1 || r2;
}

int main() {
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; i++) scanf("%d", a + i);
  int res = dfs(0, 0);
  printf("%s\n", res ? "YES" : "NO");
}