/*
约瑟夫环问题之酒吧游戏
n个人围成一个圆桌，按照顺时针的顺序1, 2, ... , n进行编号；
某一个人开始报一个数字，然后顺时针的下一个人会报数+1；
当某个人报的数字含有7或是7的倍数时，这个人退出游戏，其他人接着报数！
直到剩下一个人为止！
输入：
n m t
n 代表n个人，m代表开始报数的人的编号，t表示开始报数的数字是t
1<=n,m<=10000, m<=n
输出：
最后剩下的人的编号。
*/
#include <stdio.h>
#define MAXN 10000

int a[MAXN], h = 0, t = 0;

void inq(int v)
{
    a[h] = v;
    h = (h + 1) % MAXN;
}

int outq()
{
    int tmp = a[t];
    t = (t + 1) % MAXN;
    return tmp;
}

int lenq()
{
    if (h >= t)
        return h - t;
    else
        return h - t + MAXN;
}

int have7(int a)
{
    if (a % 7 == 0)
        return 1;
    while (a > 0)
    {
        if (a % 10 == 7)
            return 1;
        a = a / 10;
    }
    return 0;
}

int main()
{
    int n, m, t;
    scanf("%d%d%d", &n, &m, &t);
    for (int i = 0; i < n; i++)
        inq(i + 1);
    for (int i = 0; i < m - 1; i++)
        inq(outq());

    while (lenq() > 1)
    {
        if (have7(t))
            outq();
        else
            inq(outq());
        t++;
    }

    printf("%d\n", outq());

    return 0;
}