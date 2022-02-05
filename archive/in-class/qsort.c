#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void qsort(int a[], int l, int r)
{
    if (l >= r)
        return;
    int i = l, j = r, m = a[l];
    while (i < j)
    {
        while (a[j] >= m && i < j)
            j--;
        while (a[i] <= m && i < j)
            i++;
        if (i < j)
            swap(&a[i], &a[j]);
    }
    a[l] = a[i];
    a[i] = m;
    qsort(a, l, i - 1);
    qsort(a, i + 1, r);
}

int main()
{
    int n = 10;
    int a[10] = {41, 24, 76, 11, 45, 64, 21, 69, 19, 36};
    qsort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}