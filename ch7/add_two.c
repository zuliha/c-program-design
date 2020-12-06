#include <stdio.h>
#include <math.h>
int main()
{
    float add(float x, float y), a, b, sum;
    printf("enter two numbers:\n");
    scanf("%f %f", &a, &b);
    sum = add(a, b);
    printf("sum=%f\n", sum);
    return 0;
}
float add(float x, float y)
{
    float c;
    c = x + y;
    return c;
}
/*
enter two numbers:
2 89
sum=91.000000
*/
