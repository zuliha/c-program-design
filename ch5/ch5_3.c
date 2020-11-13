#include <stdio.h>
int main()
{
    int m, n, i, x, y, max, min;
    printf("输入两个正整数：\n");
    scanf("%d %d", &m, &n);
    min = m > n ? n : m;
    max = m > n ? m : n;

    if (max % min == 0)
    {
        printf("最大公约数：%d\n最小公倍数：%d\n", min, max);
    }
    else
    {
        for (i = 1; i <= min; i++)

            if (max % i == 0 && min % i == 0)
                x = i;

        while (max % m != 0 || max % n != 0)

            max++;

        y = max;
        printf("最大公约数为:%d\n最小公倍数为:%d\n", x, y);
    }
    return 0;
}
/*输入两个正整数：
8 16
最大公约数：8
最小公倍数：16*/