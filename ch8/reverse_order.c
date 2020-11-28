#include <stdio.h>

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
}

int main()
{
    void inv(int x[], int n);
    int i, arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    inv(arr, 10);
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
/*
0 1 2 3 4 5 6 7 8 9 
9 8 7 6 5 4 3 2 1 0 
*/
