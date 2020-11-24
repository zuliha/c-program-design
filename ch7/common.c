#include <stdio.h>

int main()
{
    int div(int x, int y);
    int mul(int x, int y);

    int a, b, result;
    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("%d和%d的最大公约数为:%d\n", a, b, mul(a, b));
    printf("%d和%d的最小公倍数为:%d\n", a, b, div(a, b));
    return 0;
}

//求最小公倍数
int div(int x, int y)
{
    int m, n;

    m = x > y ? x : y;
    while (m>1)
    {
        if ((m % x == 0) && (m % y == 0))
            break;
        m++;
    }
    return m;
}

//求最大公约数
int mul(int x, int y)
{
    int i, m, n;
    n = x > y ? y : x;

    while (n > 1)
    {
        if ((x % n == 0) && (y % n == 0))
            return n;
        n--;
    }
    return n;
}
/*
enter two numbers:
5 9
5和9的最大公约数为:1
5和9的最小公倍数为:45*/
