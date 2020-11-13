#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, p, q, x1, x2, k;
    printf("请输入abc的值:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    k = b * b - 4 * a * c;

    if (k < 0)
    {
        printf("方程无实根!\n");
    }
    else
    {
        p = -b / (2.0 * a);
        q = sqrt(k) / (2.0 * a);
        x1 = p + q;
        x2 = p - q;
        printf("x1=%7.2f x2=%7.2f\n", x1, x2);
    }
    return 0;
}
/*请输入abc的值:
2 4 1
x1=  -0.29 x2=  -1.71*/
/*请输入abc的值:
6 3 1
方程无实根!*/