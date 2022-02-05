#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int n;
    srand(time(0));
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        double x = 1.0 * rand() / RAND_MAX;
        double y = 1.0 * rand() / RAND_MAX;
        if (x * x + y * y <= 1.0)
            count++;
    }

    printf("%.10f\n", 1.0 * count * 4 / n);
    return 0;
}
