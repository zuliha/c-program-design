#include<stdio.h>

void inv(int *str,int n)
{
    int temp,*i,*j,*p,m;
    m=(n-1)/2;
    p=str+m;
    j=str+n-1;
    for ( i = str; i<=p; i++,j--)
    {
        temp=*i;
        *i=*j;
        *j=temp;
    }
}

int main(){
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p=arr;
    for (int i = 0; i < 10; i++,p++)
        printf("%d ", *p);
    printf("\n");
     p=arr;
    inv(p, 10);
    for (p = arr; p < arr+10; p++)
        printf("%d ", *p);
    printf("\n");
    return 0;
}
/*
0 1 2 3 4 5 6 7 8 9 
9 8 7 6 5 4 3 2 1 0 
*/