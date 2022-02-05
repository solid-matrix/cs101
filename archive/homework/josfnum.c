/*
约瑟夫环问题之报数
n个小朋友们坐成一个圆圈，编号分别为1, 2, 3, ... , n；
第1个小朋友从1开始报数，报到m的小朋友离开座位；
然后下一个小朋友从1接着报数，依次循环；
每次报到m的小朋友离开座位，直到剩下最后一个小朋友为止。
输入：
n m
其中1<=n,m<=10000
输出：
最后留下的小朋友的编号。
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

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        inq(i + 1);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
            inq(outq());
        outq();
    }
    printf("%d\n", outq());

    return 0;
}