//用迭代法求平方根
#include <stdio.h>
#include <math.h>
int main()
{
    float x0, x1, a;
    scanf("%f", &a);
    x0 = a / 2;
    x1 = (x0 + a / x0) / 2;
    do
    {
        x0 = x1;
        x1 = (x0 + a / x0) / 2;
    } while (fabs(x0 - x1) >= 1e-5);
    printf("The square root of %f is %f\n", a, x1);
    return 0;
}
/* 
2
The square root of 2.000000 is 1.414214 
*/