#include <stdio.h>
#include <math.h>
int main()
{
    float r = 0.01, m, n, k, d = 300000.0, p = 6000.0;

    m = log(p / (p - d * r));
    n = log(1 + r);
    k = m / n;

    printf("%6.1f\n", k);
    printf("%6.2f\n", k); //检查小数点后第二位是否四舍五入

    return 0;
}
//  69.7
//  69.66