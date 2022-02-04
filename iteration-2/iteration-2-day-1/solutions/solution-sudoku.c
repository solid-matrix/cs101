#include <stdio.h>
int a[9][9], r[9][9], v[9][10], h[9][10], c[3][3][10];
void Print() {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) printf("%d ", a[i][j] == 0 ? r[i][j] : a[i][j]);
    printf("\n");
  }
  printf("- - - - - - - - -\n");
}
void Resolve(int g) {
  int i = g / 9, j = g % 9;
  if (i == 9) return Print();
  if (a[i][j] != 0) return Resolve(g + 1);
  for (int k = 1; k <= 9; k++) {
    if (v[i][k] || h[j][k] || c[i / 3][j / 3][k]) continue;
    r[i][j] = k;
    v[i][k] = h[j][k] = c[i / 3][j / 3][k] = 1;
    Resolve(g + 1);
    v[i][k] = h[j][k] = c[i / 3][j / 3][k] = 0;
  }
}
int main() {
  for (int i = 0; i < 9; i++)
    for (int j = 0; j < 9; j++) {
      scanf("%d", &a[i][j]);
      if (a[i][j]) v[i][a[i][j]] = h[j][a[i][j]] = c[i / 3][j / 3][a[i][j]] = 1;
    }
  Resolve(0);
  return 0;
}