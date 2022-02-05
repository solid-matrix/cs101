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

    // bubble sort
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);

    // output
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
