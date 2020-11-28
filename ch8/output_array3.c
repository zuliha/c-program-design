#include <stdio.h>
int main()
{
    int *p, a[10];
    printf("enter ten numbers:");

    for (int i = 0; i < 10; i++)
        scanf("%d", a + i);
    for (p = a; p < a + 10; p++)
        printf("%d  ", *p);
    printf("\n");
    return 0;
}
/* 
enter ten numbers:0 1 2 3 4 5 6 7 8 9
0  1  2  3  4  5  6  7  8  9  
*/