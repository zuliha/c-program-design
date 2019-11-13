#include <stdio.h>
#include <math.h>
int main()
{
    int max(int x, int y);
    int a, b, c;
    printf("请输入两个整数:\n");
    scanf("%d %d", &a, &b);
    c = max(a, b);
    printf("max=%d\n", c);
    return 0;
}
int max(int x, int y)
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return z;
}
/* 
请输入两个整数:
8 963
max=963*/
