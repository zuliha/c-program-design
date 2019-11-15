#include <stdio.h>
int main()
{
    int a, b, max;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("max=a\n");
    }
    else
        printf("max=b\n");
    return 0;
}
/*
2 3
max=b
9 1
max=a
*/