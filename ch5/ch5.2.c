#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    do
    {
        sum = sum + i;
        i++;

    } while (i < 101);
    printf("%d\n", sum);
    return 0;
} /*➜  ch5 git:(master) ✗ clang ch5.2.c 
➜  ch5 git:(master) ✗ ./a.out 
5050*/                                   