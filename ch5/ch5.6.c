#include <stdio.h>
int main()
{
    int i, j, n = 0;
    for (i = 1; i < 5; i++)
        for (j = 1; j < 6; j++, n++)
        {
            if (n % 5 == 0)
                printf("\n");
            if (i == 3 && j == 1)
                break;
            printf("%d\t", i * j);
        }
    printf("\n");
    return 0;
}
/*

1       2       3       4       5
2       4       6       8       10

4       8       12      16      20
*/
