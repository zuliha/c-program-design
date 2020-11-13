#include <stdio.h>
int is_prime(int x)
{

    for (int n = 100; n < 201; n++)
    {

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return 1;
        }
        return 0;
    }

    else
    {
        printf("enter false!\n");
    }
    return 0;
}
int main()
{
    int a, x;
    printf("请输入一个数：");
    scanf("%d", &x);
    a = is_prime(x);
    if (a == 1)
    {
        printf("%d is not prime\n", x);
    }
    else;
    {
        printf("%d is prime\n", x);
    }

    return 0;
}