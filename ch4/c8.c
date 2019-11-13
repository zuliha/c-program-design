#include<stdio.h>
int main()
{
    char grade;
    printf("请输入你的成绩:\n");
    scanf("%c",&grade);
    switch (grade / 10)
{

case 10:


case 9 : printf("A\n");break;

case 8 : printf("B\n");break;

case 7 : printf("C\n");break;

case 6 : printf("D\n");break;

default: printf("E\n");break;

}
return 0;
}