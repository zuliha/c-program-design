#include<stdio.h>
int main()
{
    char c1,c2;
    c1=197;
    c2=198;
    printf("c1=%c,c2=%c\n",c1,c2);
    printf("c1=%d,c2=%d\n",c1,c2);
    return 0;
}
/*➜  ch3 git:(master) ✗ clang char2.c
➜  ch3 git:(master) ✗ ./a.out      
c1=�,c2=�
c1=-59,c2=-58*/