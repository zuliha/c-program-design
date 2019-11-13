#include <stdio.h>
#define sum 100000
int main()
{
    int i, total = 0;
    float amount, aver;
    for (i = 1; i < 1001; i++)
    {
        scanf("%f", &amount);
        total = total + amount;
        if (total > sum)
            break;
    }
    aver = total / i;
    printf("num=%d\naver=%f\n", i, aver);
    return 0;
}
/*➜  ch5 git:(master) ✗ clang ch5.3.c
➜  ch5 git:(master) ✗ ./a.out 
4500
7800
8540
25400
45200
35000
num=6
aver=21073.000000*/
