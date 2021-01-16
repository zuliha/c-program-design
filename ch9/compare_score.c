//选择排序比较成绩
#include <stdio.h>

struct Student
{
    int num;
    char name[20];
    float score;
};

int main()
{
    struct Student stu[5] = {{101, "Zhang", 78}, {102, "Li", 82.5}, {103, "Wang", 73.5}, {104, "Han", 62}, {105, "Wu", 100}}; //定义结构体数组并初始化
    struct Student temp;                                                                                                      //定义结构体变量temp,用作交换时的临时变量
    const int n = 5;
    int i, j, k;
    printf("The order is:\n");
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {

            if (stu[j].score > stu[k].score)

                k = j;
            temp = stu[k];
            stu[k] = stu[i];
            stu[i] = temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%6d %8s %6.2f\n", stu[i].num, stu[i].name, stu[i].score);
    }
    return 0;
}
/*
The order is:
   105       Wu 100.00
   102       Li  82.50
   101    Zhang  78.00
   103     Wang  73.50
   104      Han  62.00
*/