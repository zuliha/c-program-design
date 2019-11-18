#include <stdio.h>
int main()
{
    int a, b, p, *pointer_1, *pointer_2;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    pointer_1 = &a;
    pointer_2 = &b;
    if (a < b)
    {
        pointer_1 = &b;
        pointer_2 = &a;
        printf("%d %d", *pointer_1, *pointer_2);
    }
    else
    {
        printf("%d %d", *pointer_1, *pointer_2);
    }
    printf("\n");
    return 0;
}
/* enter two numbers:78 2
78 2 
*/
/*enter two numbers:25 98
98 25  
*/