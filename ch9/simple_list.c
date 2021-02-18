//简单的静态链表
#include <stdio.h>
struct Student
{
    int num;
    float score;
    struct Student *next;
};

int main()
{
    struct Student a, b, c, *head, *p;
    a.num = 101;
    a.score = 89.5;
    b.num = 102;
    b.score = 90;
    c.num = 103;
    c.score = 85;
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    p = head;
    do
    {
        printf("%d %5.1f\n", p->num, p->score); //输出p指向的结点的数据
        p = p->next;                            //使p指向下一结点
    } while (p != NULL);
    return 0;
}
/*
101  89.5
102  90.0
103  85.0
*/
