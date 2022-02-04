#include <stdio.h>
int count = 0;
void Resolve(int d, int s) {
  if (d == 7) {
    count++;
    return;
  }
  for (int i = s; i < 52; i++) Resolve(d + 1, i + 1);
}
int main() {
  Resolve(0, 0);
  printf("Total number of combinations = %d", count);
  return 0;
}