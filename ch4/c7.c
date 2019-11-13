#include<stdio.h>
int main(){
    int x,Y;
    scanf("%d",&x);
    if(x<0)
    {
        
        printf("Y=-1\n");
    }
     else if(x==0)
     {
         printf("Y=0\n");
     }
    else
    {
        printf("Y=1\n");
    }
    return 0;
}/*➜  ch4 git:(master) ✗ clang c7.c
➜  ch4 git:(master) ✗ ./a.out 
5
Y=1
➜  ch4 git:(master) ✗ ./a.out
0
Y=0
➜  ch4 git:(master) ✗ ./a.out
-7
Y=-1*/