#include <stdio.h>
int main()
{
    int a, b;
    int *p1, *p2;
    int swap(int *pointer_1, int *pointer_2);
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
    {
        swap(p1, p2);
        printf("%d %d", a, b);
    }
    else
    {
        printf("%d %d", a, b);
    }
    printf("\n");
    return 0;
}
int swap(int *pointer_1, int *pointer_2)
{
    int m;
    m = *pointer_1;
    *pointer_1 = *pointer_2;
    *pointer_2 = m;
    return 0;
}
/* 
enter two numbers:10 100
100 10
*/
/*enter two numbers:100 10
100 10
*/