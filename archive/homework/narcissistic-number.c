// 水仙花数
#include <stdio.h>

// 函数 cube(a) 返回a的立方
int cube(int a)
{
    return a * a * a;
}

// 函数 sxh(a)，传入一个值a，判断a是否为水仙花数，是则返回1，否则返回0
int sxh(int a)
{
    int sum = 0;
    int b = a;
    while (b > 0)
    {
        int t = b % 10;
        b = b / 10;
        sum = sum + cube(t);
    }

    if (sum == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    for (int i = 1; i <= 1000000; i++)
    {
        if (sxh(i))
        {
            printf("%d\n", i);
        }
    }
}
