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
    z = x > y ? x : y;
    return z;
}
/*请输入两个整数:
3 5
max=5
➜  ch1 git:(master) ✗ ./a.out
请输入两个整数:
43 4
max=43*/