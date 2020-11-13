//50个学生，输出成绩80分以上的学号和成绩
#include <stdio.h>
int main()
{
    int score[3];
    int i;
    for (i = 0; i < 50; i++)
    {
        printf("请输入第%d个学生的成绩:", i + 1);
        scanf("%d", &score[i]);
    }
    for (i = 0; i < 50; i++)
    {
        if (score[i] > 79)
        {
            printf("学号:%d,成绩：%d\n", i + 1, score[i]);
        }
    }

    return 0;
}