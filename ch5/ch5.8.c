#include <stdio.h>
int main()
{
    char c;
    int letters = 0, space = 0, digit = 0, others = 0;
    printf("please enter characters\n");
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c ==' ')
            space++;
        else if ((c >= '0' && c <= '9'))
            digit++;
        else
            others++;
    }
    printf("字母数:%d\n空格数:%d\n数字数:%d\n其他数:%d\n", letters, space, digit, others);
    return 0;
}
/*please enter characters
hello world!
字母数:10
空格数:1
数字数:0
其他数:1*/