#include <stdio.h>
int main()
{
    int a = 100, b = 10;
    int *pointer_1, *pointer_2;
    pointer_1 = &a;
    pointer_2 = &b;
    printf("%d %d", *pointer_1, *pointer_2);
    return 0;
}
//100 10