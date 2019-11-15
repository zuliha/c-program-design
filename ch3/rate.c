#include <stdio.h>
#include <math.h>
int main()
{
    // printf("十年后是现在的%f倍",pow(1.09,10));
    float r = 0.09;
    int n = 10;
    float p;
    p = powf(1 + r, n);
    printf("10年后是现在的%f倍\n", p);
    printf("%d,%f\n", n, r);
    return 0;
}
/*
10年后是现在的2.367364倍
10,0.090000
*/