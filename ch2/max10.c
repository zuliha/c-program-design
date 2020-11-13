#include <stdio.h>
int main()
{
    int a[10], i, max;

    printf("请输入10个数：\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    max = a[0];

    for (i = 0; i < 10; i++)

    {

        if (a[i] > max)
        {

            max = a[i];
        }
    }
    printf("max=%d\n", max);

    return 0;
}
/*请输入10个数：
1 23 45 67 89 76 434 32 456 12
 max=456*/
