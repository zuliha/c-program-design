#include <stdio.h>
#define sum 100000
int main()
{
    int i, total = 0;
    float aver, amount;

    for (i = 1; i < 1000; i++)
    {
        printf("enter amount:");
        scanf("%f", &amount);
        total += amount;
        if (total >= sum) 
            break;
    }
    aver = total / i;
    printf("num=%d\naver= %f\n", i, aver);
    return 0;
}
/*enter amount:20000
enter amount:40000
enter amount:10000 
enter amount:10000
enter amount:20000
num=5
aver= 20000.000000*/
