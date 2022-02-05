#include <stdio.h>
#include <math.h>
int isSquare(int a)
{
    int aroot = (int)sqrt(a);
    if (aroot * aroot == a)
        return 1;
    else
        return 0;
}

int main()
{
    for (int a = 1; a <= 10000; a++)
    {
        if (isSquare(a * a * 2 - 1))
        {
            printf("%d ", a);
        }
    }
    printf("\n");

    for (int a = 1; a <= 10000; a++)
    {
        if (isSquare(a * a * 2 + 1))
        {
            printf("%d ", a);
        }
    }
    printf("\n");
}