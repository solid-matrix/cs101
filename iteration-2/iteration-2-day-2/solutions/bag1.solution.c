#include <stdio.h>
#define MAXN 100000

typedef struct {
  int w;
  int v;
} Item;

int m, n;
Item t[MAXN];

void Swap(Item *a, Item *b) {
  Item tmp = *a;
  *a = *b;
  *b = tmp;
}

int Compare(Item a, Item b) { return a.v - b.v; }

void QuickSort(int l, int r) {
  if (l >= r) return;
  int i = l, j = r;
  Item m = t[l];
  while (i < j) {
    while (Compare(t[j], m) <= 0 && i < j) j--;
    while (Compare(t[i], m) >= 0 && i < j) i++;
    if (i < j) Swap(&t[i], &t[j]);
  }
  t[l] = t[i];
  t[i] = m;
  QuickSort(l, i - 1);
  QuickSort(i + 1, r);
}

int main() {
  scanf("%d%d", &m, &n);
  for (int i = 0; i < n; i++) scanf("%d%d", &t[i].w, &t[i].v);
  QuickSort(0, n - 1);

  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (m >= t[i].w) {
      m -= t[i].w;
      sum += t[i].w * t[i].v;
    } else {
      sum += m * t[i].v;
      m = 0;
    }
    if (m == 0) break;
  }
  printf("%d\n", sum);
  return 0;
}