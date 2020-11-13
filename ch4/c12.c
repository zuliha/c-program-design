#include <stdio.h>
int main()
{
    int h = 10;
    float x1 = 2, y1 = 2, x2 = -2, y2 = 2, x3 = -2, y3 = -2, x4 = 2, y4 = -2, x, y, s1, s2, s3, s4;
    printf("输入一个点（x,y):\n");
    scanf("%f %f", &x, &y);
    s1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
    s2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
    s3 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
    s4 = (x - x4) * (x - x4) + (y - y4) * (y - y4);
    if (s1 > 1 && s2 > 1 && s3 > 1 && s4 > 1)
    {
        h = 0;
    }
    printf("该点高度为:%d\n", h);

    return 0;
}
/*输入一个点（x,y):
4 4
该点高度为:0*/
/*输入一个点（x,y):
2 3
该点高度为:10*/