#include <stdio.h>
int main()
{
    float p = 3.14, r, s1, s2, v1, v2, c;
    int h;
    printf("输入圆的半径r,高h\n");
    scanf("%f %d", &r, &h);
    s1 = p * r * r;
    s2 = 4 * p * r * r;
    v1 = 4 / 3 * p * r * r * r;
    v2 = p * r * r * h;
    c = 2 * p * r;
    printf("圆的面积为%6.2f\n", s1);
    printf("圆球的面积为%6.2f\n", s2);
    printf("圆球的体积为%6.2f\n", v1);
    printf("圆柱的体积为%6.2f\n", v2);
    printf("圆的周长为%6.2f\n", c);
    return 0;
}
/*
输入圆的半径r,高h
1.5 3
圆的面积为  7.07
圆球的面积为 28.26
圆球的体积为 10.60
圆柱的体积为 21.19
圆的周长为  9.42
*/