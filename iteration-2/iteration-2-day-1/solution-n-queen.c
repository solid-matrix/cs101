#include <stdio.h>
#define N 8
int h[N], x[N * 2 - 1], y[N * 2 - 1], r[N], sum = 0;
void Print() {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) printf(r[i] == j ? "o " : "+ ");
    printf("\n");
  }
  printf("- - - - - - - -\n");
}
void Resolve(int i) {
  if (i == N) {
    sum++;
    return Print();
  }
  for (int j = 0; j < N; j++) {
    if (h[j] || x[i + j] || y[i - j + N - 1]) continue;
    r[i] = j;
    h[j] = x[i + j] = y[i - j + N - 1] = 1;
    Resolve(i + 1);
    h[j] = x[i + j] = y[i - j + N - 1] = 0;
  }
}
int main() {
  Resolve(0);
  printf("Total %d solutions\n", sum);
  return 0;
}