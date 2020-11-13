#include <stdio.h>
int main()
{
    int year, leap;
    printf("enter year:\n");
    scanf("%d",&year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                leap = 1;
            }
            else
            {
                leap = 0;
            }
        }
        else
        {
            leap = 1;
        }
    }
    else
    {
        leap = 0;
    }
    if (leap)
    {
        printf("%d is leap year\n", year);
    }
    else
    {
        printf("%d is not leap year\n", year);
    }
    return 0;
}
/*enter year:
1998
1998 is not leap year*/
/*enter year:
2020
2020 is leap year*/
