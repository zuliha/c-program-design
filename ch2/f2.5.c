函数写这个题
#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    int i=2;
    while(i<=(int)sqrt(n))
    {
        if(n%i == 0)
            return 0;  //不是素数，直接返回0
        else
            i++;
    }
    return 1;
}
int main()
{
    int n;
    printf("输入一个大于等于3的正整数: ");
    scanf("%d",&n);
    if(isPrime(n))
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
    return 0;
}