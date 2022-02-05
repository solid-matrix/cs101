#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    // input
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // selection sort
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(&a[i], &a[j]);

    // output
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
