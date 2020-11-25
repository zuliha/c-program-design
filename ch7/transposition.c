#include <stdio.h>

const int N = 3, M = 3;

void display(int martix[N][M])
{
    printf("----------------\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d  ", martix[i][j]);
        }
        printf("\n");
    }
    printf("----------------\n");
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void transposition(int arr[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < M; j++)
        {
            swap(&arr[i][j], &arr[j][i]);
        }
    }
}

int main()
{
    int a[N][M];
    printf("输入数组：\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    display(a);

    transposition(a);
    display(a);

    return 0;
} 
/*输入数组：
1 2 3 4 5 6 7 8 9
----------------
1  2  3  
4  5  6  
7  8  9  
----------------
----------------
1  4  7  
2  5  8  
3  6  9  
----------------*/