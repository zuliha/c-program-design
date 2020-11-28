#include <stdio.h>
int main()
{
    int a[10];
    int *p=a;          //p指向a[0]
    printf("enter ten numbers:");
    for (int i = 0; i < 10; i++)
        scanf("%d", p++);
    p=a;               //重新使p指向a[0]
    for (int i = 0; i < 10; i++)
        printf("%d  s", *p++);
    printf("\n");
    return 0;
}
/* 
enter ten numbers:0 1 2 3 4 5 6 7 8 9
0  1  2  3  4  5  6  7  8  9  
*/