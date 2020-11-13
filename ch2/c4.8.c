#include <stdio.h>
#include <math.h>
int main()
{
    double a, x, b, c, p, q, x1, x2;
    printf("enter a,b,c:\n");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    p = -b / (2.0 * a);
    q = sqrt((b * b - 4 * a * c) / (2.0 * a));
    x1 = p + q;
    x2 = p - q;
    printf("x1=%lf\nx2=%lf\n", x1, x2);
    return 0;
} 