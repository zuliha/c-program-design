#include <stdio.h>

void swap(int *p1, int *p2)
{

    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


int main()
{
    int a, b, *p1, *p2;
    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
    {
        swap(p1, p2);
    }
    printf("max=%d\nmin=%d\n", *p1, *p2);
    return 0;
}
/*
enter two numbers:
34 87
max=87
min=34
*/
