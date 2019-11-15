#include <stdio.h>
int main()
{
    int Y, x;
    scanf("%d", &x);
    if (x < 0)
    {
        printf("%d\n", x);
    }
     else if ((1 <= x) && (x < 10))
    {
        Y = 2 * x - 1;
        printf("%d\n", Y);
    }
    else
    {
        Y = 3 * x - 11;
        printf("%d\n", Y);
    }
    return 0;
}
/*  
8
15

10
19

-5
-5
*/