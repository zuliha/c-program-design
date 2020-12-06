#include <stdio.h>

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int (*p)[4], i, j;           //p为指向包含4个整型元素的指针变量
    p = arr;
    printf("enter row and colum:");
    scanf("%d %d", &i, &j);
    printf("a[%d][%d]=%d\n",i,j,*(*(p+i)+j));
    return 0;
}
/*
enter row and colum:1 3
a[1][3]=8
*/