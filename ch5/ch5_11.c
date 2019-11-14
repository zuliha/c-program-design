#include <stdio.h>
int main()
{
    double s1 = 0, s2 = 0, s3 = 0, b;
    int  i, a;
    for (i = 1; i < 101; i++)
    {
        s1 += i;
    }
    for (a = 1; a < 51; a++)
    {

        s2 += a * a;
    }
    for (b = 1; b < 11; b++)
    {
        s3 += 1 / b;
    }
    printf("%lf %lf %lf\n", s1, s2, s3);
    printf("%15.6f\n", s1 + s2 + s3);
    return 0;
}
/*5050.000000 42925.000000 2.928968
   47977.928968*/