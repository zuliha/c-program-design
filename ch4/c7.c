#include <stdio.h>
int main()
{
    int x, Y;
    scanf("%d", &x);
    if (x < 0)
    {

        printf("Y=-1\n");
    }
    else if (x == 0)
    {
        printf("Y=0\n");
    }
    else
    {
        printf("Y=1\n");
    }
    return 0;
} 
/*
5
Y=1

0
Y=0

-7
Y=-1
*/