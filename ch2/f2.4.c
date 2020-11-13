#include <stdio.h>
int main()
{
    double sum = 1.0, deno = 2.0;
    double term;
    int sign = 1;

    for (deno = 2; deno < 101; deno++)
    {
        sign *= -1;
        term = sign * (1 / deno);
        sum += term;
    }
    printf(" %f\n", sum);

    return 0;
}
//0.688172