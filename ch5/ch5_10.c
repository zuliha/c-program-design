#include<stdio.h>
int main(){
    double s=0,t=1;
    int n;
    for(n=1;n<21;n++)
    {
    t=t*n;
    s=s+t;
    }
printf("1!+2!+...+20!=%f\n",s);
return 0;
}
//1!+2!+...+20!=2561327494111820288.000000