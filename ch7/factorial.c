#include <stdio.h>
int main()
{
    int factorial(int n);
    int f, n;
    printf("输入一个正整数:\n");
    scanf("%d", &n);
    f = factorial(n);
    printf("%d的阶乘为：%d\n", n, f);
    return 0;
}
int factorial(int n)
{
    int c;
    if (n == 0 || n == 1)
    {
        c = 1;
    }
    else
    {
        c = n * factorial(n - 1);
    }
    return c;
}
/*输入一个正整数:
5
5的阶乘为：120*/