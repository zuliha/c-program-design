#include <stdio.h>

int main()

{

    int t, a, b, c, d;

    printf("请输入4个数:\n");

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)

    {

        t = a;

        a = b;

        b = t;
    }

    if (a > c)

    {

        t = a;

        a = c;

        c = t;
    }

    if (a > d)

    {

        t = a;

        a = d;

        d = t;
    }

    if (b > c)

    {

        t = b;

        b = c;

        c = t;
    }

    if (b > d)

    {

        t = b;

        b = d;

        d = t;
    }

    if (c > d)

    {

        t = c;

        c = d;

        d = t;
    }

    printf("由小到大输出:%d %d %d %d\n", a, b, c, d);

    return 0;
}
/*请输入4个数:
4 5 2 3
由小到大输出:2 3 4 5*/