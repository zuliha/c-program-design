//由小到大输出两个整数
#include <stdio.h>
int main()
{
    int t, a, b;
    printf("输入两个整数：\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    printf("%d %d\n", a, b);
    return 0;
}
/*输入两个整数：
4 3
3 4*/   