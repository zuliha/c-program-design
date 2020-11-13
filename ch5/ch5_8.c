//水仙花数
#include <stdio.h>
int main()
{
    int bw, sw, gw;
    for (int i = 100; i < 999; i++)
    {
        bw = i / 100;
        sw = (i % 100) / 10;
        gw = (i % 100) % 10;
        if (bw * bw * bw + sw * sw * sw + gw * gw * gw == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
/*153
370
371
407*/