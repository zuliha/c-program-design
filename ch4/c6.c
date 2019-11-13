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
/*  ch4 git:(master) ✗ clang c6.c
➜  ch4 git:(master) ✗ ./a.out 
8
15
➜  ch4 git:(master) ✗ ./a.out
10
19
➜  ch4 git:(master) ✗ ./a.out
-5
-5
*/