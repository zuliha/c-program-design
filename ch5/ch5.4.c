#include <stdio.h>
int main()
{
    int n;
    for (n = 100; n <= 200; n++)
    {
        if (n % 3 == 0)
            continue;
        printf("%d", n);
    }
    printf("\n");
    return 0;
}/*➜  exc git:(master) ✗ ./a.out 
100101103104106107109110112113115116118119121122124125127128130131133134136137139140142143145146148149
151152154155157158160161163164166167169170172173175176178179181182184185187188190191193194196197199200
*/