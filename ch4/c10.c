#include <stdio.h>
int main()
{
    int i, n;
    double p, p1, p2, p4, p6, p10;
    p1 = 100000 * 0.1;
    p2 = p1 + 100000 * 0.075;
    p4 = p2 + 200000 * 0.05;
    p6 = p4 + 200000 * 0.03;
    p10 = p6 + 400000 * 0.015;

    printf("输入利润：\n");
    scanf("%d", &i);
    printf("奖金为：");
    n = i / 100000;
    if (n > 10)
    {
        n = 10;
    }
    else
    {

        switch (n)
        {
        case 0:
            p = i * 0.1;
            break;
        case 1:
            p = p1 + (i - 100000) * 0.075;
            break;
        case 2:
        case 3:
            p = p2 + (i - 200000) * 0.05;
            break;
        case 4:
        case 5:
            p = p4 + (i - 400000) * 0.03;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            p = p6 + (i - 600000) * 0.015;
            break;
        case 10:
            p = p10 + (i - 1000000) * 0.015;
            break;

        default:
            break;
        }
    }

    printf("%lf\n", p);
    return 0;
}
/*输入利润：
550000
奖金为：24500.000000*/
/*输入利润：
1000000
奖金为：39500.000000*/