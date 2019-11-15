#include <stdio.h>

int main()
{
    printf("请输入三个数\n");
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int max = a;

    if (max < b)

        max = b;

    if (max < c)
        max = c;

    printf("最大值为%d", max);

    return 0;
}
/*
请输入三个数
9 6852 585225
最大值为585225
*/