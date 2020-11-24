#include <stdio.h>
float Max = 0, Min = 0;

int main()
{
    float average(float arr[], int n);
    float aver, str[10];
    int i;
    printf("输入学生成绩:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &str[i]);
    }
    aver = average(str, 10);
    printf("平均成绩：%6.2f\n最大值：%6.2f\n最小值：%6.2f\n", aver, Max, Min);
    return 0;
}

float average(float arr[], int n)
{
    Max = Min = arr[0];
    float sum = 0, aver;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
        sum += arr[i];
    }
    aver = sum / 10;
    return aver;
}
/*
输入学生成绩:
89 95 87.5 100 67.5 97 59 84 73 90
平均成绩： 84.20
最大值：100.00
最小值： 59.00
*/