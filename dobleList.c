#include <stdlib.h>
#include <stdio.h>

typedef struct element
{
    int val;
    struct element *next, *pre;
} element;

// creat a node with value val
element *new (int val)
{
    element *e = (element *)malloc(sizeof(element));
    e->val = val;
    return e;
}

element *new_list()
{
    element *head = new (0);
    head->next = head;
    head->pre = head;
    return head;
}

//add node with value val to the top of list
void append_top(element *head, int val)
{
    element *node = new (val);
    if (head->pre == head)
    {
        head->pre = node;
    }
    node->next = head->next;
    node->pre = head;
    head->next = node;
    head->val++;
}

//add node with value val to the tail of list
void append_tail(element *head, int val)
{
    element *node = new (val);
    node->next = head;
    node->pre = head->pre;
    head->pre = node;
    head->pre->next = node;
    head->val++;
}

int remove_top(element *head)
{
    element *node = head->next;
    int val = -1;
    if (node != head)
    {
        head->next = node->next;
        if (node->next == head)
        {
            head->pre = head;
        }
        val = node->val;
        free(node);
    }
    return val;
}

int remove_tail(element *head)
{
    element *node = head->pre;
    int val = -1;
    if (node != head)
    {
        head->pre = node->pre;
        if (node->pre == head)
        {
            head->next = head;
        }
        val = node->val;
        free(node);
    }
    return val;
}

void print_list(element *head)
{
    for (int i = 0; i < 20; i++)
    {
        printf("*");
    }
    printf("\n");

    printf("Number of nodes: %d\n", head->val);
    element *pointer = head->next;

    printf("HEAD");
    while (pointer != head)
    {
        printf("->%d", pointer->val);
        pointer = pointer->next;
    }
    printf("\n");
    for (int i = 0; i < 20; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    element *head = new_list();
    // append_top(head, 1);
    // append_top(head, 2);
    // head->next = new(1);
    // head->pre= head->next;
    for (int i = 0; i < 10; i++)
    {
        append_top(head, i);
    }
    for (int i = 0; i < 10; i++)
    {
        append_tail(head, i);
    }
    remove_top(head);
    print_list(head);
    remove_tail(head);
    print_list(head);
}