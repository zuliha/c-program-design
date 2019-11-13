#include<stdio.h>
int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("max=a\n");
    }  
    else
        printf("max=b\n");
        return 0;
}

/* clang max.c 
➜  ch2 git:(master) ✗ ./a.out 
2 3
max=b
➜  ch2 git:(master) ✗ 6 8
cd: string not in pwd: -6
➜  ch2 git:(master) ✗ ./a.out
9 1
max=a*/