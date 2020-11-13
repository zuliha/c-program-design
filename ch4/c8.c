#include <stdio.h>
int main()
{
    int grade;
    printf("输入成绩：\n");
    scanf("%d", &grade);
    printf("成绩等级为：\n");
    switch (grade / 10)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;

    default:
        printf("E\n");
        break;
    }

    return 0;
}
/*输入成绩：
13
成绩等级为：
E*/
/*输入成绩：
68
成绩等级为：
D*/