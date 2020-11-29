#include<stdio.h>

void inv(int *str,int n)
{
    int temp,*i,*j,*p,m=(n-1)/2;
    p=str+m;
    for ( i = str,j=str+n-1; i<=p; i++,j--)
    {
        temp=*i;
        *i=*j;
        *j=temp;
    }
    
}

int main(){
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