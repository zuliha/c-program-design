//由小到大输出三个数
#include <stdio.h>
int main()
{
    float a, b, c,t;
    printf("输入三个数；\n");
    scanf("%f %f %f", &a, &b, &c);
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
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("%6.2f %6.2f %6.2f\n",a,b,c);
    return 0;
}
/*输入三个数；
3.4 5.6 -4.1 
 -4.10   3.40   5.60*/