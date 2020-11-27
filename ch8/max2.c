#include <stdio.h>

int main()
{
    int a, b, *p1, *p2, *p;
    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
    {
        p = p1;
        p1 = p2;
        p2 = p;
    }
    printf("max=%d\nmin=%d\n", *p1, *p2);
    return 0;
}
/*
enter two numbers:
34 67
max=67
min=34
*/
