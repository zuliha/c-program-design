#include<stdio.h>
int main()
{
    int c1,c2;
    c1=97;
    c2=98;
    printf("c1=%c,c2=%c\n",c1,c2);
    printf("c1=%d,c2=%d\n",c1,c2);
    return 0;
}
/*c1=-59,c2=-58
➜  ch3 git:(master) ✗ clang char3.c
➜  ch3 git:(master) ✗ ./a.out      
c1=a,c2=b
c1=97,c2=98*/