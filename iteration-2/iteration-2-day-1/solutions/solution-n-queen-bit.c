#include <stdio.h>
#include <time.h>
#define N 15
unsigned int h = 0, x = 0, y = 0, sum = 0;
void Resolve(int i) {
  if (i == N) {
    sum++;
    return;
  }
  for (int j = 0; j < N; j++) {
    if (h >> j & 1 || x >> (i + j) & 1 || y >> (i - j + N - 1) & 1) continue;
    h |= 1 << j;
    x |= 1 << (i + j);
    y |= 1 << (i - j + N - 1);
    Resolve(i + 1);
    h &= ~(1 << j);
    x &= ~(1 << (i + j));
    y &= ~(1 << (i - j + N - 1));
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