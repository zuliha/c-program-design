#include<stdio.h>
void swap(a,b,c)
int main()
{
    int a,b,c;

    scanf("%d%d%d\n",&a,&b,&c);
    if (a>c)
    {1
        swap(a,c);
    }
    if(b>c)
    {
        swap(b,c);
    }
    if(a>b)
    {
        swap(a,b);
    }
    printf("按从大到小顺序为:%d%d%d\n",a,b,c);
    return 0;
}