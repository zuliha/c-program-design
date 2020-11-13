#include <stdio.h>
int main()
{
    char s;
    scanf("%c", &s);
    if (s >= 'A' && s <= 'Z')
    {
        s = s + 32;
    }
    printf("%c\n", s);
    return 0;
}
/*f
f*/
/*D
d*/