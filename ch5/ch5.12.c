#include <stdio.h>
int main()
{
    char c;
    c = getchar(); //输入一个字符给字符变量c
    while (c != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if ((c >= 'w' && c <= 'z') || (c >= 'W' && c <= 'Z'))
            {
                c -= 22;
            }
            else
            {
                c += 4;
            }
        }
        printf("%c", c);
        c = getchar();
    }
    printf("\n");
    return 0;
}
/*china
glmre&*/