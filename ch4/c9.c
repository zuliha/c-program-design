#include <stdio.h>
int main()
{
    int n, gw, sw, bw, qw, ww;
    printf("输入一个正整数:");
    scanf("%d", &n);
    if (n > 0 && n < 10)
    {
        gw = n;
        printf("%d 是1位数\n", gw);
        printf("%d\n", gw);
    }
    else if (9 < n && n < 100)
    {
        gw = n % 10;
        sw = n / 10;
        printf("%d 是2位数,gw is %d,sw is %d\n", n, gw, sw);
        printf("%d %d\n", gw, sw);
    }
    else if (99 < n && n < 1000)
    {
        gw = n % 10;
        sw = n % 100 / 10;
        bw = n / 100;
        printf("%d 是3位数,gw is %d,sw is %d,bw is %d\n", n, gw, sw, bw);
        printf("%d %d %d\n", gw, sw, bw);
    }
    else if (999 < n && n < 10000)
    {
        gw = n % 100 % 10;
        sw = n % 100 / 10;
        bw = n / 100 % 10;
        qw = n / 1000;
        printf("%d 是4位数,gw is %d,sw is %d,bw is %d,qw is %d\n", n, gw, sw, bw, qw);
        printf("%d %d %d %d\n", gw, sw, bw, qw);
    }
    else if (9999 < n && n < 100000)
    {
        gw = n % 100 % 10;
        sw = n % 100 / 10;
        bw = n / 100 % 10;
        qw = n / 1000 % 10;
        ww = n / 10000;
        printf("%d 是5位数,gw is %d,sw is %d,bw is %d,qw is %d,ww is %d\n", n, gw, sw, bw, qw, ww);
        printf("%d %d %d %d %d\n", gw, sw, bw, qw, ww);
    }
    else
    {
        printf("enter error!\n");
    }

    return 0;
}
/*输入一个正整数:45563
45563 是5位数,gw is 3,sw is 6,bw is 5,qw is 5,ww is 4
3 6 5 5 4*/