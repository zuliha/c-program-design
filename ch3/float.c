#include <stdio.h>
int main()
{
    int a, b;
    float x, y;
    char c1, c2;
    scanf("%d%d", &a, &b);//输入整数
    scanf("%f%f", &x, &y);//输入小数
    scanf("%c%c", &c1, &c2);//输入字符
    printf("a=%d,b=%d\nx=%f,y=%f\nc1=%c,c2=%c\n", a, b, x, y, c1, c2);
    return 0;
}
/*
3 7 8.5 71.82Aa
a=3,b=7
x=8.500000,y=71.820000
c1=A,c2=a
*/