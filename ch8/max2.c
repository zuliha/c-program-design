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
    printf("---------------\n");
    printf("max=%d\nmin=%d\n", b, a);         //a,b的值不改变，而p1和p2的值改变
    return 0;
}
/*
enter two numbers:
23 66 
max=66
min=23
---------------
max=66
min=23
*/
