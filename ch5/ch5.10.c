#include <stdio.h>
int main()
{
    int n, i;
    printf("输入一个大于3的整数:\n");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++)
        if (n % i == 0)
            break;

    if (i < n)
        printf("%d is not prime\n", n);

    else

        printf("%d is prime\n", n);

    return 0;
}
/*输入一个大于3的整数:
11
11 is prime*/