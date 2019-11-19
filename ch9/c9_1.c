#include <stdio.h>
int main()
{
    struct student
    {
        long int num;
        int age;
        char name[4];
        char sex;
        char addr[20];

    } a = {5, 20, "Limin", 'M', "123 Beijing Rode"};
    printf("No.%ld\nage:%d\nname:%s\nsex:%c\naddr:%s\n", a.num, a.age, a.name, a.sex, a.addr);
    return 0;
}
/* 
No.5
age:20
name:Limin
sex:M
addr:123 Beijing Rode 
*/
