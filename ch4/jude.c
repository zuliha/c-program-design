#include <stdio.h>
#include <math.h>
int main()
{
    int a, p;
    scanf("%d", &a);
    if ((a > 1000) && (a < 0))
    {
        printf("请重新输入\n");
    }
    else
    {
        p = sqrt(a);
    }
    printf("%d\n", p);
    return 0;
}
/*
9
3

625
25
*/