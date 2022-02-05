#include <stdio.h>

int square(int a)
{
    return a * a;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[n];

    for (int i = 0; i < n; i++)
    {
        b[i] = square(a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    return 0;
}
