#include<stdio.h>

void sort(int str[],int n)
{
    int i,j,t;
    for ( i = 0; i < n; i++)
    {
        for ( j= i+1; j< n; j++)
        {
            if (str[j]>str[i])
            {
                t=str[i];
                str[i]=str[j];
                str[j]=t;
            }
        }
    }
}

int main(){
    int arr[10],*p,i;
    p=arr;
    printf("enter ten numbers:\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",p++);
    }
    p=arr;
    sort(p,10);
    for ( i = 0; i < 10; i++,p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}
/*
enter ten numbers:
523 5 67 4 121 86 45 54 9 11   
523 121 86 67 54 45 11 9 5 4 
*/