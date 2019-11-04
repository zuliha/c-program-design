#include<stdio.h>
#include<math.h>
int main(){
    int a,p;
    scanf("%d",&a);
    if((a>1000)&&(a<0))
    {
        printf("请重新输入\n");
    } 
    else
    {
    p=sqrt(a);
    }
    printf("%d\n",p);
    return 0;

}
/*
➜  ch4 git:(master) ✗ clang jude.c -lm
➜  ch4 git:(master) ✗ ./a.out 
9
3
➜  ch4 git:(master) ✗ ./a.out
625
25
*/