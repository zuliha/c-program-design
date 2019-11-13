#include<stdio.h>
#include<math.h>
int main(){
    int a[10],i;
    int max=a[0];
    scanf("%d",&a[10]);
    for(i=1;i<10;i++)
    if(a[i]>max)
   {
       max = a[i] > max ? a[i] : max;
       printf("max=a[i]\n");
   }
    return 0;

}