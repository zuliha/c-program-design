//100~200间的素数
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, k;
    for (n = 100; n < 201; n++)
    {
        k = sqrt(n);
        for (i = 2; i <= k; i++)

            if (n % i == 0)
                break;
        if (i >= k + 1)

            printf("%d\n", n);
    }
    return 0;
}
/*101
103
107
109
113
127
131
137
139
149
151
157
163
167
173
179
181
191
193
197
199*/