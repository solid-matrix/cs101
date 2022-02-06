void InsertSort(int a[], int n) {
  for (int i = 1; i < n; i++)
    for (int j = i - 1; j >= 0; j--)
      if (a[j + 1] < a[j]) Swap(&a[j + 1], &a[j]);
}
