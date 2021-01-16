//指向结构体数组的指针
#include <stdio.h>

int main()
{
    struct Student
    {
        int num;
        char name[20];
        float score;
    };
    struct Student stu[3] = {{101, "zhang", 66.5}, {102, "wang", 88}, {103, "li", 92}};
    struct Student *p;
    for (p = stu; p < stu + 3; p++)
    {
        printf("%6d %6s %6.2f\n", p->num, p->name, p->score);
    }
    return 0;
}
/*
101  zhang  66.50
102   wang  88.00
103     li  92.00
*/