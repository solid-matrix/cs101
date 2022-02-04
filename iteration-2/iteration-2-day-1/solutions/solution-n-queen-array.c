#include <stdio.h>
#include <time.h>
#define N 15
int h[N], x[N * 2 - 1], y[N * 2 - 1], r[N], sum = 0;
void Resolve(int i) {
  if (i == N) {
    sum++;
    return;
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
  clock_t start = clock();
  Resolve(0);
  clock_t finish = clock();
  printf("Finished in %lf seconds\n",
         (double)(finish - start) / CLOCKS_PER_SEC);
  printf("Total %d solutions\n", sum);
  return 0;
}