#include <stdio.h>

double ab(double a)
{
    if (a >= 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}

double root(double a)
{
    double l = 0.0, h = a, m;
    while (ab(m * m - a) > 0.00000000000001)
    {
        m = (l + h) / 2.0;
        if (m * m > a)
        {
            h = m;
        }
        else
        {
            l = m;
        }
    }
    return m;
}

int main(int argc, char const *argv[])
{
    double a;
    scanf("%lf", &a);
    printf("%.20lf\n", root(a));
    return 0;
}
