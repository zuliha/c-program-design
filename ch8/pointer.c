#include<stdio.h>

int main(){
    int a;
    int *addr;
    int **addr1 = &addr;    
    a = 4;  
    addr = &a;
    // printf("%d\n",*addr);
    printf("%d\n",**addr1);
    **addr1 = 8;
    // addr1 = &addr;
    printf("%d,%#X，%#X\n",a,addr,addr1);
    return 0;
}
/*
4
8,0XDBCFC4A4，0XDBCFC498
*/