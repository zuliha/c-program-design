#include<stdio.h>
int main(){
    int sum=0;
    int i;
    for(i=1;i<=100;i++)
    sum=sum+i;
    printf("1~100的和sum=%d\n",sum);
    return 0;
}
/*➜  ch2 git:(master) ✗ gcc sum.c
➜  ch2 git:(master) ✗ ./a.out 
1~100的和sum=5050*/