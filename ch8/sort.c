#include <stdio.h>

void swap(int * p1, int * p2)
{

    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void exchange(int *p1,int *p2,int *p3)
{
    if (*p1<*p2)
    {
        swap(p1, p2);
    }
    if (*p1<*p3)
    {
        swap(p1, p3);
    }
    if (*p2<*p3)
    { 
        swap(p2 ,p3);
    }
}

int main()
{
    int a, b,c, *p1, *p2,*p3;
    printf("enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    exchange(p1,p2,p3);
    printf("%d %d %d\n", a, b,c);           
    return 0;
}
/*
enter three numbers:
34 965 132
965 132 34
*/