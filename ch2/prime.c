#include <stdio.h>
int main()
{
    int a = 0, num;
    printf("输入一个整数：");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
        if (num % i == 0)
        {
            a++;
        }

    if (a == 0)
    {
        printf("%d是素数。\n", num);
    }
    else
    {
        printf("%d不是素数。\n", num);
    }
    return 0;
}
/*
输入一个整数：228
228不是素数。
输入一个整数：2
2是素数。
输入一个整数：11
11是素数。
*/