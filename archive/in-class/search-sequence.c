#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(int argc, char const *argv[])
{
    int n, m, e = FALSE;
    scanf("%d%d", &n, &m);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            e = TRUE;
        }
    }

    if (e)
    {
        printf("Number %d exist in sequence\n", m);
    }
    else
    {
        printf("Number %d not exist in sequence\n", m);
    }
    return 0;
}
