//由大到小输出三个数
#include <stdio.h>
    void swap(int *x, int *y)
    {
    int z = 0;
    z = *x;
    *x = *y;
    *y = z;

} 

int main()
{
    void swap(int *x, int *y);
    int a, b, c;
    printf("please enter three numbers\n");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a < b)
    {
        swap(&a, &b);
    } 
    if (a < c)
    {
        swap(&a, &c);
    }
    if (b < c)
    {
        swap(&b, &c);
    }
    printf("%d,%d,%d\n", a, b, c);
    return 0;
}
