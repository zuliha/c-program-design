//判断2000~2500年中的每一年是否为闰年
#include <stdio.h>
int main()
{
    for (int year = 2000; year < 2501; year++)
    {
        if (year % 4 == 0 && year % 100 != 0)
        {
            printf("%d is leap year\n", year);
        }
        else if (year % 400 == 0)
        {
            printf("%d is leap year\n", year);
        }
        else
        {
            printf("%d is not leap year\n", year);
        }
    }
    return 0;
}