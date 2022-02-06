void QuickSort(int a[], int l, int r) {
  if (l >= r) return;
  int i = l, j = r, m = a[l];
  while (i < j) {
    while (a[j] >= m && i < j) j--;
    while (a[i] <= m && i < j) i++;
    if (i < j) Swap(&a[i], &a[j]);
  }
  a[l] = a[i];
  a[i] = m;
  QuickSort(a, l, i - 1);
  QuickSort(a, i + 1, r);
}