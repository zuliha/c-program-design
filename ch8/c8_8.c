#include <stdio.h>
int main()
{
    void inv(int x[], int n);
    int i, a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (i = 0; i < 10; i++)
        printf("%d", a[i]);
    printf("\n");
    inv(a, 10);
    for (i = 0; i < 10; i++)
        printf("%d", a[i]);
    printf("\n");
    return 0;
}
void inv(int x[], int n)
{
    int i, j, t, m = (n - 1) / 2;
    for (i = 0; i <= m; i++)
    {
        j = n - 1 - i;
        t = x[i];
        x[i] = x[j];
        x[j] = t;
    }
    return;
}