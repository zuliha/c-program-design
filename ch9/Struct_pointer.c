#include <stdio.h>

int main()
{
    struct Student
    {
        int num;
        char name[20];
        char sex;
        float score;
    } stu = {05, "Mike", 'M', 97.5};
    ;
    //struct Student stu = {05, "Mike", 'M', 97.5};
    struct Student *p;
    p = &stu;
    printf("%6d %8s %4c %6.2f\n", (*p).num, (*p).name, (*p).sex, (*p).score);
    return 0;
}
//     5     Mike    M  97.50