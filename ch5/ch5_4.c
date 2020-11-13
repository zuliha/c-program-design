#include <stdio.h>
int main()
{
    char c;
    int zimu = 0, kongge = 0, num = 0, others = 0;
    printf("please enter characters:\n");
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            zimu++;
        else if (c ==' ')
            kongge++;
        else if ((c >= '0' && c <= '9'))
            num++;
        else
            others++;
    }
    printf("字母数:%d\n空格数:%d\n数字数:%d\n其他数:%d\n", zimu, kongge, num, others);
    return 0;
}
/*please enter characters:
ni hao .123
字母数:5
空格数:2
数字数:3
其他数:1*/