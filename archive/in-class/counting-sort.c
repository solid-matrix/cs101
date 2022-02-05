#include <stdio.h>

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

    // counting sort
    const int k = 100;
    int c[k];
    for (int i = 0; i < k; i++)
        c[i] = 0;

    for (int i = 0; i < n; i++)
        c[a[i]]++;

    // output
    for (int i = 0; i < k; i++)
        for (int j = 0; j < c[i]; j++)
            printf("%d ", i);

    printf("\n");

    return 0;
}
