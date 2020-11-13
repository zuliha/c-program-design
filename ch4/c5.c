#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    printf("输入数字：\n");
    scanf("%d",&n);
    if (n<1000)
    {
        printf("重新输入！\n");

    }
    else
    {
        m=sqrt(n);
        printf("%d\n",m);
    }
    return 0;
    
    
}
/*输入数字：
1200
34*/