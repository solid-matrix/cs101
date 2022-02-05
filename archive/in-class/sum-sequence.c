#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0; // initialize the variable

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("Sum of sequence: %d\n", sum);

    return 0;
}
