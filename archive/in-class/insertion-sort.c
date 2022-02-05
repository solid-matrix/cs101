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

    // insertion sort
    for (int i = 1; i < n; i++)
        for (int j = i - 1; j >= 0; j--)
            if (a[j + 1] < a[j])
                swap(&a[j + 1], &a[j]);

    // output
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
