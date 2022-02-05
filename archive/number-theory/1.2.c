#include <stdio.h>
#include <math.h>

int main()
{
    int a[10000];
    int p[10000];
    int s[10000];
    int n = 0;
    for (int i = 0; i < 10000; i++)
        a[i] = 1;
    a[0] = a[1] = 0;

    for (int i = 2; i < 10000; i++)
    {
        if (a[i])
        {
            p[n++] = i;
            for (int j = 2; i * j < 10000; j++)
                a[i * j] = 0;
        }
    }

    s[0] = p[0];
    for (int i = 1; i < n; i++)
        s[i] = s[i - 1] + p[i];

    for (int i = 0; i < n; i++)
        printf("%d ", p[i]);

    printf("\n");
}