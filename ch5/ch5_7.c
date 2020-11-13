#include <stdio.h>
int main()
{
    float k1 = 0, k2 = 0, k3 = 0.0, i, s;
    for (i = 1; i < 101; i++)
    {
        k1 += i;
    }
    for (i = 1; i < 51; i++)
    {
        k2 += i * i;
    }
    for (i = 1; i < 11; i++)
    {

        k3 += 1.0 / i;
    }
    s = k1 + k2 + k3;
    printf("s=%f\n", s);
    return 0;
}
//s=47977.929688