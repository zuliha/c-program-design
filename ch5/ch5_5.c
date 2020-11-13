#include<stdio.h>
int main()
{
    int a,n,t=0,S=0;
    printf("Please input a&n:");
    scanf("%d%d",&a,&n);
    for(int i=0;i<n;i++)
    {
        t=t*10+a;
        S+=t;
    }
    printf("Sn=%d\n",S);
    return 0;
}
/*Please input a&n:2 3
Sn=246*/