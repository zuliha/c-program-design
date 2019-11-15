#include <stdio.h>
int main()
{
    int a, b;
    float x, y;
    char c1, c2;
    scanf("%d%d", &a, &b);
    printf("a=%d,b=%d\n", a, b);
    scanf("%f%f", &x, &y);
    printf("x=%f,y=%f\n", x, y);
    scanf("%c%c", &c1, &c2);
    printf("c1=%c,c2=%c\n", c1, c2);
    return 0;
}
/*
3 7 8.5 71.82Aa
a=3,b=7
x=8.500000,y=71.820000
c1=A,c2=a
*/